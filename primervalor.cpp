#include <iostream>

using namespace std;

int main()
{
    int vec[30], cant, cont=0;
    cout << "Ingrese la cantidad de valores que desea agregar: ";
    cin >> cant;
    for (int i=0; i<cant; i++)
    {
        cout << "Ingrese el valor " << i+1 << ": ";
        cin >> vec[i];
    }
    for (int i=0; i<cant; i++)
    {
        if(vec[i]==vec[0])
            cont++;
    }
    cout << "El valor " << vec[0] << " se repitio " << cont << " veces." << endl;
 return 0;
}
