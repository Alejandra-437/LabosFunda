#include <iostream>
#include <cstdbool>

using namespace std;
bool funcion(int bisiesto){ 
    if(bisiesto % 4 != 0 || (bisiesto %100 == 0 && 400 != 0)){ 
        return false;
    } else{ 
        return true;
    }
}
int main(){ 
    int bisiesto=0;
    bool retorno=0;

    cout<<"Introduzca un año para ver si es bisiesto o no: ";
    cin>>bisiesto;
    cout<<endl;
    funcion(bisiesto);
    retorno=funcion(bisiesto);

    if (retorno==true)
    {
        cout<<"El anio es bisiesto\n";
    }else{ 
        cout<<"El anio no es bisiesto\n";
    }
    
    return 0;
}