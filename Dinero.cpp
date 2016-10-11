#include <bits/stdc++.h>
using namespace std;

int main()
{
    char otra='Y';
    float suma=0, individual,nFacturas=0,promedio;
    do
    {
        cout<<"Introduzca el monto individual: ";
        cin>>individual;
        if(individual>0)
        {
            nFacturas+=1;
            suma+=individual;
        }
        else if(suma==0){
            cout<<"Inserte una cantidad para realizar el calculo\n";
        }
        else if(individual==0){
            cout<<fixed;
            promedio=suma/nFacturas;
            cout<<setprecision(2)<<"La suma total de las facturas es: "<<suma
            <<"\n y el promedio es: "<<promedio<<"\n";

            cout<<"Desea hacer otro calculo? (Y/N): ";
            cin>>otra;
            suma=0;
            nFacturas=0;
        }
    }while(otra=='Y');


    cout<<"\nOperaciones finalizadas\n";
    cin.get();
}
