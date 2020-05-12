#include <iostream>

#include <math.h>
using namespace std;
int main(){ 
    char producto[20];
    float precio;
    int cantidad;
    float subtotal = 0;
    float IVA = 0;
    float total = 0;
    precio = 0;
    cantidad = 0;
    cout<<"ingrese producto: ";
    std::cin.getline(producto,20);
    cout<<"\n";

    cout<<"ingrese cantidad: ";
    cin>>cantidad;
    cout<<"\n";
    cout<<"ingrese precio del producto: ";
    cin>>precio;
    cout<<"\n";
    
    subtotal = precio*cantidad;
    cout<<"subtotal:$ ";
    cout<<subtotal;
    cout<<"\n";
    IVA = subtotal*0.13;
    total = subtotal+IVA;
    cout<<"Total a pagar:$ ";
    cout<<total;

    return 0;

}