/*
Programa_39 almacenar 10 elementos en un vector, cuantos ceros, cuantos negativos, cuantos positivos y sumarlos.
Estructura for y arreglos
Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 11 de marzo de 2015
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    system ("color f0");
    int x, vec[10], ceros=0, nega=0, posi=0, sumposi=0, sumnega=0;
    cout << "\n 10 elementos, cuantos ceros, cuantos negativos, cuantos positivos y sumarlos. \n\n";

    for (x=0; x<10; x=x+1)
        {
        cout<<" Dame un valor: ";
        cin>>vec[x];

        if (vec[x]>0)
            {
            posi=posi+1;
            sumposi=sumposi+vec[x];
            }
        if (vec[x]<0)
            {
            nega=nega+1;
            sumnega=sumnega+vec[x];
            }
        if (vec[x]==0)
            {
            ceros=ceros+1;
            }
        }

        cout<<"\n Cantidad de elementos igual a cero:    "<<ceros;
        cout<<"\n Cantidad de elementos positivos:       "<<posi;
        cout<<"\n Cantidad de elementos negativos:       "<<nega<<"\n\n";
        cout<<"\n Suma de los elementos positivos:       "<<sumposi;
        cout<<"\n Suma de los elementos negativos:       "<<sumnega;
        cout<<"\n\n\t\t\t";

        system ("pause");

    return 0;
}
