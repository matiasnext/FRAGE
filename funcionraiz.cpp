#include <iostream>
#include <math.h>

using namespace std;

void raices(float, float, float, float&, float&);

int main()
{
    float a,b,c,raiz1,raiz2;
    cout << "Dada la ecuacion Ax^2+Bx+C" << endl;
    cout << "Ingresar A, B,C " << endl;
    cin >> a >> b >> c;
    raices(a,b,c,raiz1,raiz2);
    cout << "Las raices son : " << raiz1 << " y " << raiz2 << endl;
  return 0;
}

void raices( float a, float b, float c, float &R1, float&R2)
{
    float discriminante;
    discriminante=sqrt(b*b-4.0*a*c);
    R1=(-b+discriminante)/(2.0*a);
    R2=(-b-discriminante)/(2.0*a);
}
