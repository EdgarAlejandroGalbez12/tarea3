/* Leer un numero base y una potencia y mediante ciclos obtener el resultado de elevar el numero base a la potencia indicada. 
Ejemplo base=3, potencia = 4, el resultado es 3^4, es decir = 3 x 3 x 3 x 3=81*/
#include <iostream>
using namespace std;
int main ()
{
	int numero, potencia, suma=1;
	cout << "introduce un numero \n";
	cin >> numero;
	cout << "introduce la potencia que quieres elevar al numero \n";
	cin >> potencia;
	for(int i=1;i<=potencia;i++)
	{
		suma*=numero;
	}		
	cout << "el numero " << numero << " elevado a " << potencia <<" es igual a " << suma;
	return 0;
}
