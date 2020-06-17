#include <iostream>
using namespace std;
//Programa que lea la hora, hh, mm y ss, en el modo de 24 horas y que despliegue cual es la hora un segundo despues
int main(){ 
    int h,m,s;
    cout<<"Ingresa la hora"<<endl;
    cin>>h;
    cout<<"Ingresa minuto"<<endl;
    cin>>m;
    cout<<"Ingresa segundo"<<endl;
    cin>>s;
    if(h < 24 && m < 60 && s < 60){
          if(s < 59 && s >= 0){
          cout<<h<<"h "<<m<<"m "<<(s+1)<<"s";
          }else{
          if(s==59){
                  if(m==59){
                      if(h==23){
                          cout<<"00h 00m 00s";
                      }else{ 
                          cout<<(h+1)<<"h 00m 00s";
                      }
                  }else{
                      cout<<h<<"h "<<(m+1)<<"m 00s";
                  }
              }
          }
      }else{
          cout<<"Fuera de Rango";
      }
    return 0;
}