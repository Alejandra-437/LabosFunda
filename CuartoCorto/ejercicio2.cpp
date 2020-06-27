#include <iostream>
using namespace std;
//Programa que calcule el promedio de estatura de 25 alumnos y que diga cuantos se encuentran arriba y debajo de la media.
float Estatura[25];
void PromEstaturas(float arreglo[],float media[]){  //aqui se sacara la media de loas 25 alumnos
    for (int i = 1; i <=25; i++)
    {
        *media += arreglo[i]; 
    }
        *media = *media/25;
}
float EstaturaFueraDeMedia(float arreglo[], int *arriba, int *abajo, float promedio){ 
    for (int i = 0; i < 25; i++) //se puso un for para definir que alumnos estan encima o de bajo de la media
    {
        if (arreglo[i] > promedio) // se hace un if donde si el arreglo es mayor al promedio se agrega en arriba de la media y si no se agra a abajo de la media.
        {
            *arriba+=1;
        } else
        {
            *abajo+=1;
        }   
    }    
}  
int main(){ 
    float estatura;
    float promedio;
    int ArribaDeMedia = 0;
    int BajoDeMedia = 0;
    cout<<"Promgrama que saca la media de 25 alumnos en metros\n ";
    for (int i = 1; i <= 25; i++) //se hace un for onde se guardaran los datos en el arreglo.
    {
        cout<<"Ingrese la estatura del alumno en metros "<<(i)<<":\n";
        cin>> estatura;
        Estatura[i]=estatura;
    }
    PromEstaturas(Estatura, & promedio);   //se llama a la funcion donde se saco la media para mostrarsela al usuario
    cout<<"La media de estatura de los 25 alumnos es: "<<promedio<<"\n";
    
    EstaturaFueraDeMedia(Estatura, & ArribaDeMedia, & BajoDeMedia, promedio); //se llama la funcion donde se sacan a los que estan arriba o abajo de la media 
    cout<<"Hay "<<ArribaDeMedia<<" alumnos arriba de la media\n";             // y se le muestra al usuario
    cout<<"Hay "<<BajoDeMedia<<" alumnos abajo de la media\n";

    return 0;
}