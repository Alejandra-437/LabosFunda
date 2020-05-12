#include <iostream>
using namespace std;
int main(){ 
   int num1, num2, num3;
   int promedio;
   int contador=0;
   int total=0;
   cout<<"PROGRAMA PARA CALCULAR PROMEDIO DE NUMEROS\n";
   cout<<"ingrese num1: ";
   cin>>num1;
   contador = contador +1;
   cout<<"ingrese num2: ";
   cin>>num2;
   contador = contador +1;
   cout<<"ingrese num3: ";
   cin>>num3;
   contador = contador +1;
   total = num1+num2+num3;

   cout<<"Suma total de numeros ingresados: ";
   cout<< total<<"\n";

   cout<<"Numero de miembros ingresados: ";
   cout<<contador<<"\n";

   cout<<"Promedio calculado: ";
   promedio = total/contador;

   cout<<promedio<<"\n";

   contador=0;
   total=0;


   return 0;
}