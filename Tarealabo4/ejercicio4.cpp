#include <iostream>
#include <string.h>
using namespace std;
//programa  que verifique si la palabra ingresada es mayor a 10 caracteres o no y si la longitud es par o impar.
int main(){ 
    char palabra[10];
    while(strlen(palabra) != 10){
    cout<<"introduce una palabra: ";
    cin>> palabra;
    if((strlen(palabra))> 10){ 
        cout<<"La palabra supera los 10 caracteres\n";
    }else if((strlen(palabra)) % 2 == 0){ 
        cout<<"la palabra utiliza "<<strlen(palabra)<<" caracteres y su longitud es par\n";
    } else{ 
        cout<<"la palabra utiliza "<<strlen(palabra)<<" caracteres y su longitud es impar\n";
    }
    }
    return 0;
}