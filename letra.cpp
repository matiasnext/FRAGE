#include <iostream>

using namespace std;

int main()
{
    char l;
    cout << "INGRESE UNA LETRA: ";
    cin >> l;
    if ((l>64&&l<91)||(l>96&&l<123))
    {
        if(l=='a'||l=='A'||l=='e'||l=='E'||l=='i'||l=='I'||l=='o'||l=='O'||l=='u'||l=='U')
            cout << "LA LETRA " << l << " ES UNA VOCAL." << endl;
        else
            cout << "LA LETRA " << l << " ES UNA CONSONANTE." << endl;
    }
    else
        cout << "ERROR: EL CARACTER INGRESADO NO ES UNA LETRA." << endl;
return 0;
}
