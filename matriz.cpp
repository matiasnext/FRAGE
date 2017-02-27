#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int filas, columnas;
    cout << "Ingrese numero de filas: ";
    cin >> filas;
    cout << "Ingrese numero de columnas: ";
    cin >> columnas;
    int matriz[filas][columnas];
    for(int i =0; i< filas ; i++)
    {
        for(int j =0; j< columnas ;j++)
        {
             matriz[i][j]=rand()%10; //rand para rellenar la matriz con numeros aleatorios
             cout<<matriz[i][j]<<" ";
        }
    cout<<endl;
    }
}
