#include <iostream>
using namespace std;
int main(){ 
    int dolares;
    float euros = 1.33;

    float conversion;

    cout<<"ingrese la cantidad de dolares a convertyr: ";
    cin>>dolares;
    conversion = dolares*euros;
    cout<<conversion;

    return 0;
} 