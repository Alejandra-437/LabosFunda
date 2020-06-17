#include <iostream>
#include <cstdbool>
#include <cstdlib>
using namespace std;
//n programa que lea tres números enteros que representan los valores de día (dd), mes (mm) y año (aa) de una fecha cualquiera
bool funcion(int anio){ 
    if(anio % 4 != 0 || (anio %100 == 0 && 400 != 0)){ 
        return false;
    } else{ 
        return true;
    }
}
int main(){
    int anio=0, mes, dia, anio_siguiente, dia_siguiente, mes_siguiente;
    bool retorno=0;

    cout<<"Ingrese el numero del dia: ";
    cin>>dia;
    cout<<"Ingrese el mes: ";
    cin>>mes;
    cout<<"Ingrese el anio: ";
    cin>>anio;
    funcion(anio);
    retorno=funcion(anio);

    if (retorno==true){ 
        if(dia==28&&mes==2){ 
            
            dia_siguiente = dia+1;
        }else if(dia==29&&mes==2){ 
          dia_siguiente=1;
        }
        }else  
         if((dia==28&&mes==2)||(dia==30&&(mes==4||mes==6||mes==9||mes==11))||dia==31){
        dia_siguiente=1;
        }else{
        dia_siguiente=dia+1;
        } if(dia_siguiente==1){
        mes_siguiente=mes+1;
        } else{
        mes_siguiente=mes;
        }if(mes_siguiente==13){
        anio_siguiente=anio+1;
        }else{
        anio_siguiente=anio;
        }if(mes_siguiente==13){
        mes_siguiente=1;
        }
    cout << "Valor de la fecha cambiada: " << dia_siguiente <<"/ "<< mes_siguiente <<"/ "<< anio_siguiente << endl;
    system ("pause");
    return EXIT_SUCCESS;
    
    

    return 0;
}