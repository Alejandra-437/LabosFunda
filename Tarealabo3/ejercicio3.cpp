#include <iostream>
#include <math.h>
using namespace std;
int main(){ 
    int a, b, c;
    float x = 0;
    cout<<"PROGRAMA PARA RESOLVER ECUACIONES CUADRATICAS\n";

    cout<< "ingrese a: ";
    cin>>a;
    cout<< "ingrese b: ";
    cin>>b;
    cout<< "ingrese c: ";
    cin>>c;

    x = (-b + sqrt(pow(b, 2)- 4*a*c))/(2*a);
    cout<<"El valor de x1 es de: ";
    cout<<x;
    x = 0;
    cout<<"\n";
    x = (-b - sqrt(pow(b, 2)- 4*a*c))/(2*a);
    cout<<"El valor de x2 es de: ";
    cout<<x;

   
    return 0;

}