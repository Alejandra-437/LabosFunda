#include <iostream>
using namespace std;
// programa que verificará si un número es divisible entre otro
int main(){ 
    int x, y;
    cout <<"ingrese el numerador: "<<endl;
    cin>>x;
    cout<<"ingrese el denominador: "<<endl;
    cin>>y;
    if((x % y) != 0){ 
        cout<<"el numero "<<x<<" NO es divisible entre "<<y<<"\n";
    } else{ 
        cout<<"el numero "<<x<<" SI es divisible entre "<<y<<"\n";
    }
    return 0;

}