//1.	Dado un número entero N, hacer un programa para sumar los dígitos de cada uno de ellos.   Ej. Si N= 45634,  la suma es 4+5+6+3+4=22
#include<iostream>
#include"conio.h"
using namespace std;
//Prototipo o Declaracion
int Funcion(int);
int main()
{
	int n,s;
	cout<<"Ingresa el numero: ";	
	cin>>n;
//LLamda 
	s=Funcion(n);
//	
	cout<<"La suma es: "<<s;
	getch();
	return 0;
}

int Funcion(int n)
{
	int suma=0;
	while(n!=0)
	{
		int b=n%10;
		n=n/10;
		suma=suma+b;
	}
	return suma;
}
