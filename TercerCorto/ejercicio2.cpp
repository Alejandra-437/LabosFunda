#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
//programa donde el usuario adivine el numero
char x (char * string){ 
        return string[0]
        ;}

int main(){ 
    int n, adivinado=0, num, cont=5, a;
    char letra;
    char Si;

    srand((unsigned)time(NULL));

    n = 1 + rand()%(100+1);

    cout<<"Adivina el numero entre 1 y 100"<<endl<<endl;
    cout<<"Tienes 5 intentos"<<endl<<endl;

    cout<<"Deseas jugar?\n";
    cout<<"Si(s)/No(n): ";
    cin>>letra;

    cout<<"Contenido de la variable a evaluar: ";
    cout<<letra<<'\n';

    //Condicionante para evaluar si desea o no
    if(letra != 's'){
        cout<<"La variable es distinta a 'S' o 's'\n";
        cout<<"Gracias por participar\n";
    } // cierre de if sino quiere jugar desde el inicio

    else{ //Entrando al else principal
        while (adivinado == 0){ 
        
            cout<<"Introduce un numero: ";cin>>num;
                
            if (num==n){
                cout<<"ADIVINASTE!"<<endl;
                adivinado = adivinado++;
                return 0;
        
            }else if(num > n) {
                cout<<"Menor"<<endl;
                cout<<"Vuelve a intentar"<<endl;
            } else if( num < n){ 
                cout<<"Mayor"<<endl;
                cout<<"Vuelve a intentar"<<endl;
            } ;
            cont --;
            if(cont > 0 && adivinado==0){ 
                cout<<"te quedan "<< cont<<" intentos\n";
            }else{ 
            adivinado=1;
            };
            if(cont==0 && num != n){ 
                cout<<"El numero correcto era: "<<n;
            }
        }   
    }  
    return 0;
}