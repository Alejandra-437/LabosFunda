#include <iostream>
using namespace std;
//programa donde retorne el mcd de 2 numeros que se proporcionen como argumento.
int mcd(int x, int y){ 
    int respuesta=1;
    for(int i=1; i<=x; i++){ 
        if((x % i == 0) && (y % i == 0)){ 
            respuesta=i;
        }
    }
    return respuesta;
}
int main(){ 
    int x, y;
    cout<<"Introduzca el primer numero: \n";
    cin>>x;
    cout<<"Introduzca el segundo numero: \n";
    cin>>y;
     int respuesta = mcd(x,y);
     cout<<"El MCD de "<<x<<" y "<<y<<" es: "<<respuesta<<endl;
    
    return 0;
}