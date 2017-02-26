#include <iostream>

using namespace std;

void mostrar();

int main()
{
  int x,y;
	cout << "Ingresaar coordenada x" << endl;
	cin >> x;
	cout << "Ingresaar coordenada y" << endl;
	cin >> y;
	mostrar();
return 0;
}

void mostrar ()
{
	cout << "El par ordenado es: ";
	cout << "(" << x << "," << y << ")" << endl;
}
