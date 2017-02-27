 
#include <iostream>
#include <cmath>

using namespace std;

void verificar(float numero);

int main()
{
	for(int a=0;a<=12;a++)
	{
	  float num;
	  cout << "ingresaar un numero" << endl;
	  cin >> num;
	  cout << "el entero mas proximo es: " << endl;
	  verificar(num);
	}
return 0;
}
  
void verificar(float numero)
{
	float parte_Entera;
	float parte_Decimal;
	parte_Entera=(int)numero;
	parte_Decimal=numero-parte_Entera;
	if (numero>=0)
	{
	   if(parte_Decimal>=0.5)
        cout<<parte_Entera+1<<endl;
	   else
		    cout<<parte_Entera<<endl;
	}
	else
  {
		 parte_Decimal=(numero-parte_Entera)*-1;
		 if(parte_Decimal>=0.5)
		    cout << parte_Entera-1 << endl;
	   else
        cout<<parte_Entera<<endl;
	}
	
}
