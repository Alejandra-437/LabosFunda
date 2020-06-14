#include <iostream>
using namespace std;
//programa que indica si el año es bisiesto o no.
int main(){ 
    int fecha=0;
    cout<<"Introduzca un año para ver si es bisiesto o no: ";cin>>fecha;cout<<endl;
    if(fecha % 4 != 0 || (fecha %100 == 0 && 400 != 0)){ 
        cout<<"No es bisiesto.\n";
    }else
    {
        cout<<"Es bisiesto.\n";
    }
    

    
    return 0;
}