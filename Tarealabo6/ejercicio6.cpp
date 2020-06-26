#include <iostream>
using namespace std;
//Programa que, dado un arreglo y un número entero, cuente cuantas veces se repite dicho número en el arreglo.
int arreglo(int arr[], int n, int digito){ 
    int Numero_repeticiones = 0;
    for(int i=0; i<n; i++){ 
        if(arr[i] == digito){ 
            Numero_repeticiones ++;
        }
    }
    return Numero_repeticiones;
}

int main(){
    int arr[15] = {1,2,3,4,5,6,7,8,5,3,2,6,2,8,5};
    int x;
    cout<<"Ingrese el digito a comparar: ";
    cin>>x;


    cout<<"El numero de repeticiones del numero "<<x<<" en el arreglo es "<<arreglo(arr,15,x)<<endl;
    return 0;
}
