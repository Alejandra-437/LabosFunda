#include <iostream>

using namespace std;
//Programa que calcula el salario mensual de los empleados.
int main(){ 
    int N ; //numero de empleados
    
   float horas, extra, total, real;
   cout<<"Ingrese el numero de empleados: "; cin>>N;
   cout<<"Ingrese el numero de horas trabajadas y en numero de horas extra de cada empleado\n";
   for (int i = 1; i <= N; i++)
   {
       cout<<"Trabajador: "<<(i)<<endl<<"Horas normales: ";
       cin>>horas;cout<<"Horas extra: ";
       cin>>extra;
       cout<<endl;
        horas= 1.75 * horas; 
        extra= 2.50 * extra;
        total= horas + extra; //salario total que se calcula al sumar las horas normales y las horas extra
        real= (horas + extra)-(0.4 + 0.0625); //al salario se le aplica el descuento del seguro social y del AFP
        if(total>500){ 
            real= real - 0.1; //el 0.1 es el impuesto sobre la renta que se aplica cuando el salario pasa los $500
        }
        cout<<"El salario total del trabajador "<<(i)<<" : $"<<total<<endl<<"el salario real es: $"<<real<<endl<<endl; //
       
   }
   
    return 0;
}