/*3.- Realice un programa que permita dar como salida la poblaci�n de dos pa�ses (a y b), teniendo en cuenta para tal prop�sito lo siguiente:
a) En el Primer A�o el Pa�s �a� tiene menos poblaci�n que el pa�s �b�
b) Las Tazas de crecimiento de los pa�ses �a� y �b� son de 6% y 3% anuales respectivamente.
c) Se debe dar como salidas las poblaciones desde el segundo a�o hasta que la poblaci�n de �a� exceda a la poblaci�n de �b�, 
adem�s la cantidad de a�os que transcurrieron para que esto sucediera*/
#include <iostream>
using namespace std;
int main ()
{
	int conta=2;
	float pobla1=12300, pobla2=23400;
	cout << "la poblacion de pais A es de 12300 \n";
		
	cout << "la poblacion de pais B de 23400 \n";
	do
	{
		pobla1+=(12300*0.06);
		pobla2+=(23400*0.03);
		conta++;
	}while(pobla2>pobla1);
		cout << "para que la poblacion del pais A superara a la poblacion del pais B pasaron "<< conta << " anos \n";
	return 0;
}
