/*3.- Realice un programa que permita dar como salida la población de dos países (a y b), teniendo en cuenta para tal propósito lo siguiente:
a) En el Primer Año el País “a” tiene menos población que el país “b”
b) Las Tazas de crecimiento de los países “a” y “b” son de 6% y 3% anuales respectivamente.
c) Se debe dar como salidas las poblaciones desde el segundo año hasta que la población de “a” exceda a la población de “b”, 
además la cantidad de años que transcurrieron para que esto sucediera*/
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
