#include<bits/stdc++.h>
using namespace std;

int main() {
    double gradosCentigrados=0;
    double gradosFarenheit=0;
    int opcion=0;
    char otra='Y';
    while(otra=='Y')
    {
    cout << "¿Que tipo de conversion desea realizar?(Inserte el numero de la opcion deseada)" << endl;
    cout << "1.-Farenheit a Centigrados" << endl;
    cout << "2.-Centigrado a Farenheit" << endl;
    cin >> opcion;
    switch(opcion)
    {
    case 1:
        cout << "Introduzca los grados Farenheit" << endl;
        cin >> gradosFarenheit;
        gradosCentigrados = (gradosFarenheit - 32) / 1.8;
        cout << gradosFarenheit << " Farenheit = " << gradosCentigrados << "C" << endl;
        break;
    case 2:
            cout << "Introduzca los grados Centigrados" << endl;
            cin >> gradosCentigrados;
            gradosFarenheit = 1.8 * gradosCentigrados + 32;
            cout << gradosCentigrados << "C = " << gradosFarenheit << " Farenheit" << endl;
        break;
    default:
        cout<<"\nNo se inserto una opcion valida\n";
    }

    cout<<"Desea realizar otra consulta?(Y/N)\n";
    cin>>otra;

    }

    cin.get();
}
