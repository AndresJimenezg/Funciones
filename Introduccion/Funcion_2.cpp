/*Ejemplo de funciones de usuario 2
*Jimenez Garcia Andres
*/
#include <iostream>
#include <stdio.h>
using namespace std;
void mayor(int x, int y);
int S1, S2;
int main()
{
	cout<<"--Programa que indica que digito es mayor entre ambos.--\n"<< endl;
	cout<<"Digite el primer numero a comparar: "<< endl;
	cin>> S1;
	cout<<"Digite el segundo numero a comparar: "<< endl;
	cin>> S2;
	mayor(S1,S2);
	return 0;
}

void mayor(int x, int y)
{
if (x>y)
{
	cout<<"El valor del primer digito es mayor "<< endl;
	
	}
	else 
	if (y>x)
	{
		cout<<"El valor del segundo digito es mayor "<< endl;
	}
	else
	cout<<"ERROR ESTO HAZ ACTIVADO LA AUTODESTRUCCION DEL DISPOSITIVO "<< endl;
}


