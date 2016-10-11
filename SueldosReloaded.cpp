#include <bits/stdc++.h>
using namespace std;
map<string, int> puestos;
int main()
{
    char otra='Y';

    enum puestos
    {
        Obrero,Administrativo,Jefe,Gerente
    };
    while(otra=='Y')
    {
    cout<<"Inserte su puesto para conocer su sueldo\n";
    cout<<"1-Obrero\n";
    cout<<"2-Administrativo\n";
    cout<<"3-Jefe\n";
    cout<<"4-Gerente\n";
    cout<<"Introduzca: ";
    cin>>puesto;
    switch(puestos[puesto])
    {
    case 1:
        cout<<"El sueldo es: 750";
        break;
    case 2:
        cout<<"El sueldo es: 1200";
        break;
    case 3:
        cout<<"El sueldo es: 2500";
        break;
    case 4:
        cout<<"El sueldo es: 5000";
        break;
    default:
        cout<<"No se inserto una opcion valida\n";
    }

    cout<<"\nDesea realizar otra consulta?(Y/N): ";
    cin>>otra;
    }

}
