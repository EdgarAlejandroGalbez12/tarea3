/*1.- Leer un numero y mostrar el factorial del numero, mismo que se describe con el s�mbolo n! ejemplo:
5! y se obtiene multiplicando todos los n�meros de el 1 al numero = 1 *2 *3 *4 *5 = 120. No probar con n�meros mayores a 19*/
#include <iostream>
using namespace std;
int main ()
{
	long long int numero, suma=1;
	do
	{
		cout << "ingrese un numero del 0 al 19 \n";
		cin >> numero;
	}while(numero<0 || numero>=20);
	
	if(numero<=1)
	cout << "factorial de " << numero << " es igual a 1 \n";
	else
	{
		for(int i=2; i<=numero;i++)
		{
			suma*=i;
		}
		cout << "factorial de "<< numero << " es igual a " << suma << endl;
	}
	return 0;
}
