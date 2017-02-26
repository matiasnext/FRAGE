#include <iostream>

using namespace std;

void verificar(int a);

int main()
{
	int numero;
	cout << "Ingresaar un numero" << endl;
	cin >> numero;
	verificar(numero);
return 0;
}

void verificar(int a)
{
	if (a%2==0)
		cout << "El numero ingresado es par" << endl;
	else 
		cout << "El numero es impar" << endl;
}
