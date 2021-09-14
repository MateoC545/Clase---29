#include <iostream>
#include "uno.h"
using namespace std;
#define TAM 50

int mitad (int a[],int pinicial, int pfinal);
void ordenar (int a[],int pinicial, int pfinal);

int main()
{
    int A[TAM];
    int n;

    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>n;

    cout<<"Los elementos originales son: "<<endl;
    for(int i=0;i<n;i++)
        {
            A[i]=10+rand()%80;
            cout<<"["<<A[i]<<"]";
        }
    cout<<"\nElementos ordenados"<<endl;
    ordenar(A,0,n-1);
    for(int i=0;i<n;i++)
        {
            cout<<"["<<A[i]<<"]";
        }
    return 0;

}