#include <iostream>

using namespace std;

int sumar(int, int);
int restar(int, int);
int operar(int , int, int(*)(int, int));

int main()
{
	int x, y, z, opc;
	cout << "ingresar 2 valores" << endl;
	cin >> x >>y;
	cout << "Que desea hace: " <<endl;
	cout << "1)Sumarlos" <<endl;
	cout << "2)Restarlos" <<endl;
	cin>>opc;
	if(opc==1)
        z=operar(x,y,sumar);
    else
        z=operar(x,y,restar);
    cout << z << endl;
}

int sumar (int a, int b)
{
    return a+b;
}

int restar(int a, int b)
{
    return a-b;
}

int operar(int a, int b, int(*operacion)(int, int))
{
    return(*operacion)(a,b);
}
