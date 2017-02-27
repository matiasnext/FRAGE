#include <iostream>

using namespace std;

int main()
{
    int vec[]={3,5,2,7,3,5,7,10,4,123}, suma=0;
    for (int i=0; i<10; i++)
    {
        suma+=vec[i];
    }
    cout << "La suma de los elementos es: " << suma << endl;
    return 0;
}
