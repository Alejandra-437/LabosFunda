#include <iostream>
using namespace std;
//sistema que calcule la nota final de n estudiantes y que diga si aprobaron o no
void llenando_Matriz(float matriz[][5],int estudiantes){//se le asigna a la matriz un numero especifico de columnas que representaran el numero de notas
    float nota;
    for (int i = 0; i < estudiantes; i++) 
    {                                      //se hacen las instrucciones for para asi ir guardando los datos
        for (int j = 0; j < 5; j++)
        {
            cout<<"Ingrese la nota "<<(j+1)<<" del estudiante "<<(i+1)<<": ";
            cin>>nota;
            matriz[i][j] = nota;//se le asigna a la matris la cantidad de estudiantes en las filas y la cantidad de notas en las columnas
            cout<<endl;         
        }
        
    }
    
}
void NotaFinal(float matriz[][5],int estudiantes){ 
    float Nota_Final;
    for (int i = 0; i < estudiantes; i++)
    {
        for (int j = 0; j < 5; j++)
        {                                       //con los for se guardaran los datos de la matriz y que luego se utilizaran para sacar la nota final de cada estudiante
            Nota_Final += ((matriz[i][j])* 0.2); 
        }
            
        cout<<"La nota final del estudiante "<<(i+1)<<" es: "<<Nota_Final<<"\n";
        if (Nota_Final >= 6)
        {
            cout<<"El estudiante aprobo\n\n";
        } else
        {
            cout<<"El estudiante no aprobo\n\n";
        
        }
        Nota_Final = 0; //variable que guarda la nota final igualandola a 0
    }
    
}
int main(){ 
    int estudiantes=0;
    cout<<"Ingrese la cantidad de estudiantes: ";
    cin>>estudiantes;  //se guardan los datos que ha puesto el usuario.
    cout<<"\n";

    float notas[estudiantes][5]; // se llama la fila del numero de estudiantes y las 5 columnas de las notas.
    llenando_Matriz(notas, estudiantes); // se llaman a las funciones
    NotaFinal(notas,estudiantes);

    return 0;
}