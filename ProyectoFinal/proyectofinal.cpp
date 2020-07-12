#include <iostream>
#include <string>
#include <string.h>
using namespace std;
//Programa que procesa la informacion sobre productos comprados a modo que se procese una factura de compra.
const int longCad = 20; //constnte de la cadena, donde todos los arreglos tendran la misma cantidad de casillas para escribir los nombres de los articulos.
struct costoPorArticulo  //se crea una estructura donde ira el arreglo que guardara los datos de los atriculos comprados
{
    char nombreArticulo[longCad+1]; 
    int cantidad; 
    float precio;
    float subtotal;
    float total;
    float costoporArticulo;
};
void DatosDeArticulos(int n, int cantidad, char articulo, float precio,string cad, costoPorArticulo arreglo[]){
    //en esta funcion se guardaran los datos de los articulos en el arreglo 
    for (int i = 0; i < n; i++)//se pone un for para que los datos se puedan introducir en la cantidad de articulos que puso el usuario.
    {
        cout<<"Ingrese el nombre del articulo: ";
        getline(cin,cad, '\n');
        strncpy(arreglo[i].nombreArticulo, cad.c_str(), longCad);//se copia la cadena en el campo nombreArticulo de la posicion [i] del arreglo
        arreglo[i].nombreArticulo[longCad]='\0'; //se deja la ultima casilla en \0 para que termine el arreglo
        cout<<"Ingrese la cantidad que lleva de ese articulo: ";
        cin>>arreglo[i].cantidad;
        cout<<"Ingrese el precio del articulo: $";
        cin>>arreglo[i].precio;
        cin.ignore(100, '\n');//se limpia el buffer del teclado.
    }
    
}
void CostoporArt(float precio, int n, costoPorArticulo arreglo[], int cantidad, float costoporArticulo){ //funcion donde se calculara el costo por cada articulo.

    for (int i = 0; i < n; i++)//se pone un for para que calcule el precio por articulo para todos los articulos.
    {
        arreglo[i].costoporArticulo =   arreglo[i].precio * arreglo[i].cantidad; 
    }
    
}
void DesplieguedelArray(int n, costoPorArticulo arreglo[],float costoporArticulo){ //funcion que despliega el arreglo y que muestra en una tabla los datos de cada articulo.
    cout<<"\t\t\t***CONTENIDO DE LA COMRPA***\n";                                  
    cout<<"--------------------------------------------------------------------------+"<<endl;
    cout<<"Descripcion "<<" \t\tcantidad"<<"\tprecio c/u"<<"\tcosto por articulo  |"<<endl;
    cout<<"--------------------------------------------------------------------------+"<<endl;
    for (int i = 0; i < n; i++)//con un for se pone en la tabla los datos de cada articulo.
    {
        cout<<arreglo[i].nombreArticulo<<' ';
        cout<<"\t\t";
        cout<<arreglo[i].cantidad<<' ';
        cout<<"\t\t";
        cout<<'$'<<arreglo[i].precio<<' ';
        cout<<"\t\t";
        cout<<'$'<<arreglo[i].costoporArticulo<<' '<<endl;
    }
    cout<<"---------------------------------------------------------------------------+\n";
}
float TotalCosto(int n, costoPorArticulo arreglo[], float costoporArticulo,float IVA){ 
    float subtotal;                                                           //funcion que calculara el costo total de toda la compra
    float total;                            

    for (int i = 0; i < n; i++)//se usa un for para que lo calule en todos los articulos puestos.
    {
        subtotal = (arreglo[i].costoporArticulo + subtotal);//para sacar el subtotal se sumó  todos los costos de cada articulo
        IVA= subtotal * 0.13; //para sacar el IVA se multiplica el subtotal por 0.13(el IVA de El Salvador)
        total = subtotal + IVA; //el total seria la suma del subtotal con el IVA.
        
    }
    cout<<"\t\t\t\t\t\tSub Total: $"<<subtotal<<endl;
    return total; //se retorna el total para que al momento de pasarlo al main este quede con los datos reales y no se modifique.
}
int main(){ 
    int articulo;
    int cantidad;
    string cad;
    float precio;
    float costoporArticulo;
    float subtotal;
    float IVA;
    float total;
    int n;
    cout<<"Ingrese la catidad de articulos que lleva: "; //se solicita al usuario la cantidad de articulos que lleva
    cin>>n;
    cin.ignore(100, '\n'); //aqui se limpia el buffer del teclado para que no agarre error al momento de escribir la cadena
    costoPorArticulo arreglo[n];//arreglo que guardara los datos de los articulos
    DatosDeArticulos(n,cantidad,articulo,precio,cad, arreglo); //se llaman las funciones ocupadas para que el programa funcione
    CostoporArt(precio,n,arreglo,cantidad, costoporArticulo);
    DesplieguedelArray(n,arreglo,costoporArticulo);
    cout<<"\t\t\t\t\t\tTotal a pagar: $"<<TotalCosto(n,arreglo,costoporArticulo,IVA)<<endl; //se despliega el total de la funcion TotalCosto,
    cout<<"---------------------------------------------------------------------------+\n";
    cout<<"\t\t\tGRACIAS POR SU COMPRA\n";

    return 0;
}
