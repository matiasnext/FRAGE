#include <iostream>

using namespace std;

void multiplica_divide(int, int);

int main()
{
	int num1,num2;
	cout << "ingresaar un numero" << endl;
	cin >> num1;
	cout << "ingresar otro numero:" << endl;
	cin >> num2;
    multiplica_divide(num1,num2);
return 0;
}

void multiplica_divide(int a, int b)
{
	if(a%b==0)
        cout << "La multiplicacion es: " << a*b;
	else
		cout << "La division es: " << (float)a/b;
return;
}
