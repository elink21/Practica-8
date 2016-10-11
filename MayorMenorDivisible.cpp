#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> numeros;
    int numero;
    char otra='Y';
    bool divisibles=true;
    do{
    for(int i=0;i<3;i++)
    {
                cout<<"Inserte el numero "<<i+1<<": ";
        cin>>numero;
            while(numero<=0)
            {
                cout<<"Valor invalido, vuelva a insertar el numero "<<i+1<<" : ";
                cin>>numero;
            }
            numeros.push_back(numero);
        }

    sort(numeros.begin(),numeros.end());
    for(int i=0;i<numeros.size();i++)
    {
        if(numeros[i]%numeros[0]!=0)divisibles=false;
    }

    cout<<"El mayor de los numeros es: "<<numeros[2]
    <<"\n El menor de los numeros es: "<<numeros[0]<<"\n";
    (divisibles?cout<<"Todos son divisibles":cout<<"No todos son divisibles");
    cout<<" entre el menor";

    cout<<"\n\n Desea realizar otro calculo? (Y/N): ";
    cin>>otra;
    divisibles=true;
    while(!numeros.empty())numeros.pop_back();


    } while(otra=='Y');

}
