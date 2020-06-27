#include <iostream>
#include <string.h>
using namespace std;
char Codigo( char letra){ //se crea una funcion donde ira el codigo murcielago.
    switch (letra)
    {                              //con un switch se hizo el codigo murcielago ya sea para mayusculas o minusculas
    case 'm': letra = '0'; break;
    case 'u': letra = '1'; break;
    case 'r': letra = '2'; break;
    case 'c': letra = '3'; break;
    case 'i': letra = '4'; break;
    case 'e': letra = '5'; break;
    case 'l': letra = '6'; break;
    case 'a': letra = '7'; break;
    case 'g': letra = '8'; break;
    case 'o': letra = '9'; break;
    
    case 'M': letra = '0'; break;
    case 'U': letra = '1'; break;
    case 'R': letra = '2'; break;
    case 'C': letra = '3'; break;
    case 'I': letra = '4'; break;
    case 'E': letra = '5'; break;
    case 'L': letra = '6'; break;
    case 'A': letra = '7'; break;
    case 'G': letra = '8'; break;
    case 'O': letra = '9'; break;
    }
    return letra;
}
int main(){ 
    int longitud; 
    string codigo;
    cout<<"Ingrese una frase: \n";
    getline(cin, codigo);
    longitud =  codigo.length();//cuenta el numero de caracteres dela cadena.
    for (int i = 0; i < longitud; i++) //la longitud no pude ser menor que 0.
    {
        cout<<(Codigo(codigo[i])); //se une la funcion con el arreglo para asi obtener la combinacion de letras
    }
    return 0;  
}