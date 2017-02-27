#include <iostream>
#include <cmath>

using namespace std;

float potencia(float x,int n);

int main()
{
	float base,resul;
	int expo;
	cout << "Ingrese la Base de la Potencia:" ;
	cin >> base;
	cout << endl;
	cout << "Ingrese el Exponente de la Potencia: ";
	cin >> expo;
	resul=potencia(base,expo);
	cout << "El resultado es "<< resul << endl;
return 0;
}

float potencia(float x,int n)
{ 
  float valor;
  if(n==0)
	  return 1;
  else
    return potencia(x,n-1)*x;
}
