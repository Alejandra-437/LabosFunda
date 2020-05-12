#include <iostream>
#include <math.h>
using namespace std;
int main(){ 
   float radio;
   float area;
   float perimetro;
   float pi = 3.14159;
   cout<<"programa para calcular el area y el perimetro de un circulo \n";
   cout<<"ingrese el radio de un circulo: ";
   cin>>radio;
   
   area = pi*(pow(radio, 2));
   cout<<"El area calculada es: ";
   cout<<area;
   cout<<"\n";
   perimetro = 2*pi*radio;
   cout<<"El perimetro calculado es: ";
   cout<<perimetro;



   return 0;
}