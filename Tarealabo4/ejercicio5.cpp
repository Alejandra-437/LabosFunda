#include <iostream>

#include <string.h>
using namespace std;
//programa que verifique si la palabra ingresada inicia y finaliza con la misma letra.
    char x (char * string){ 
        return string[0];
    }
    char y (char * string){ 
        return string[strlen(string)-1];
    }
int main(){ 
    char palabra[30];
    cout<<"escribe una palabra: ";
    cin>>palabra;
    strupr(palabra);
    cout<<"La primera letra es: "<<x(palabra)<<endl;
    cout<<"la ultima letra es: "<<y(palabra)<<endl;
    if((x(palabra))==(y(palabra))){ 
        cout<<"la palabra ingresada inicia y finaliza con la misma letra";
    } else {
        cout<<"la palabra ingresada no inicia ni finaliza con la misma letra";
    }

    return 0;
}