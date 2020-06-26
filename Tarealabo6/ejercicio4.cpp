#include "iostream"

using namespace std;

int main(){
    
    int arreglo1 [20] = {14,3,6,7,5,4,2,0,14,23,45,20,2,12,64,21,23,6,12,1};
    int arreglo2 [20]= {2,12,45,2,5,7,12,87,12,4,23,1,23,4,56,23,4,2,3,12};
    int arreglo3 [20]={};
    int a; 
    int n=0;  
    int m=0;
    int o=0;
    


cout << "Los numeros dentro del arreglo 3 despues de realizar la suma son: ";


    do{

      arreglo3[n] =arreglo1[m]+arreglo2[o];
      cout << arreglo3 [n] << " " ;   
n++;
m++;
o++;

    }while(n<20);

return 0;

}
    
