#include <iostream>

using namespace std;
//programa que verifique si un número es positivo, negativo o cero.
int main(){ 
    int y;
    while (y != 0){ 
        cout<<"introduzca un numero por favor: ";
        cin>>y;
        if(y > 0){ 
            cout<<"el nummero es positivo\n";
        } else if (y < 0){ 
            cout<<"el numero es negativo\n";
        } else{ 
            cout<<"el numero es 0";
        }
    }

    
    return 0;
}