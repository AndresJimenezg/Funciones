/*Ejemplo de funciones de usuario 1
*Jimenez Garcia Andres
*/

#include <iostream>
#include <stdio.h>
//#include <stdlib.h>
using namespace std;
void arearectangulo(int a, int b);
int c;
int N1;
int N2;
int main()
{
	cout<<"Programa para calcular el perimetro de un rectangulo\n"<< endl;
	cout<<"Ingresa el valor del lado menor: "<< endl; 
	cin>> N1;
	cout<<"Ingresa el valor del lado mayor: "<< endl;
	cin>> N2;
	arearectangulo(N1,N2);
	return 0;
	
}
void arearectangulo(int a, int b)
{
	c=(2*a+2*b);
	cout<<"El resultado del perimetro del rectangulo es : "<<c<< endl;
	
}
