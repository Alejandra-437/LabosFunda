#include <iostream>
#include <math.h>
using namespace std;
int main(){ 
    string producto;
    float precio;
    int cantidad;
    float total = 0;
    precio = 2.25;
    cantidad = 1;
    cout<<"ingrese producto: ";
    cin>>producto;
    cout<<"\n";

    cout<<"ingrese cantidad: ";
    cin>>cantidad;
    cout<<"\n";
    cout<<"Precio del producto: ";
    cout<<precio;
    cout<<"\n";
    
    total = precio*cantidad;
    cout<<"Total a pagar:$ ";
    cout<<total;

    return 0;

}