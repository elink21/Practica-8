#include <bits/stdc++.h>
using namespace std;

//Examen del primer parcial SegundoAntonio Elias Edgardo

int main()
{
    char anotherTest='Y';
    float individualWeight,weightSum=0,prom=0;
    list<int>weightsList;

    list<int>::iterator i;

    while( anotherTest=='Y')
    {
        while(individualWeight!=-1)
        {
            cout<<"Ingrese el peso del alumno: ";
            cin>>individualWeight;
            if(individualWeight==-1 and weightsList.size()==0)
            {
                cout<<"\n--Error, no se ha incluido ningun peso todavia--\n";
                individualWeight=0;
            }
            else if (individualWeight!=-1)
            {
                if(individualWeight!=0) weightsList.push_back(individualWeight);
            }
        }

        weightsList.sort();
        i=weightsList.begin();

        for(i;i!=weightsList.end();i++) weightSum+=*i;

        prom=weightSum/weightsList.size();
        if(weightsList.size()<=3)
        {

            cout<<"\nEl mayor de los pesos es: "<<*weightsList.rbegin()<<"\n";
            cout<<"El promedio de los pesos es: "<<prom<<"\n";
        }
        else cout<<"\nEl promedio de los pesos es: "<<prom;

        cout<<"\nDesea realizar otra prueba (Y/N) ?";
            cin>>anotherTest;
            individualWeight=0;
            while(!weightsList.empty()) weightsList.pop_back();
            weightSum=0;
            prom=0;
    }

}
