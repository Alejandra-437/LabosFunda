#include <iostream>
using namespace std;
// programa que verifique si un número es par o impar
int main(){ 
    int x;
    cout<<"ingrese el numero: "<<endl;
    cin>>x;

    if(x%2==0){
        cout<<"el numero: "<<x<<" es par"<<endl;
    }else{
        cout<<"el numero: "<<x<<" es impar"<<endl;
    }
    return 0;
}