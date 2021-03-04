/*Ejemplo de funciones de usuario 3
*Jimenez Garcia Andres
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int mayor(int a, int b);
int c, P1, P2, P3;
int main()
{
	cout<<"--Comparacion de digitos--"<< endl;
	cout<<"Digite el primer numero a comparar"<< endl;
	cin>> P1;
	cout<<"Digite el segundo numero a comparar"<< endl;
	cin>> P2;
	cout<<"Digite el tercer numero a comparar"<< endl;
	cin>> P3;
	int max= mayor(mayor(P1,P2),P3);
	cout<<"El numero mayor es : "<<max<< endl;
	
}

int mayor(int a, int b)
{

if(a>b)
{
	return a;
}
else
{
	return b;
}

}
