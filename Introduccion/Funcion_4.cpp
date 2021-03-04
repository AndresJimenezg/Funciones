/*Ejemplo de funciones de usuario 4
*Jimenez Garcia Andres
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int funcion(int x);
int N1, i , r=1;
int main()
{
	cout<<"--FACTORIAL DE UN NUMERO--"<< endl;
	cout<<"Ingrese el numero que desee: "<< endl;
	cin>>N1;
	int f=funcion(N1);
	cout<<"El factorial de "<<N1<<" es "<<f<< endl;
	return 0;
}
int funcion(int x)
{
	for
	(i=1; i<=x; i++)
	{
		r *=i;
	}
	return r;
}
