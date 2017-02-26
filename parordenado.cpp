//Dado dos valores, desarrollar una función con su prototipo correspondiente, que muestre los valores como par ordenado.

#include <iostream>

using namespace std;

void mostrar(int, int);

int main()
{
    int x,y;
	cout << "Ingresaar coordenada x" << endl;
	cin >> x;
	cout << "Ingresaar coordenada y" << endl;
	cin >> y;
	mostrar(x,y);
return 0;
}

void mostrar (int a, int b)
{
	cout << "El par ordenado es: ";
	cout << "(" << a << "," << b << ")" << endl;
}
