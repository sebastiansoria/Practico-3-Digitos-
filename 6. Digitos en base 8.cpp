//6.Dado un n�mero entero en base 8, comprobar si alguno de sus d�gitos no corresponden a su base.  
//Ej. El n�mero 2762823, el d�gito 8 no corresponde a la base 
#include<iostream>
#include"conio.h"
using namespace std;

int Funcion1(int);

int main()
{
	int n;
	cout<<"Introduzca el numero entero para comprobar si alguno de sus digitos no corresponde a la base 8: ";
	cin>>n;
	Funcion1(n);
}

int Funcion1(int n)
{
	int resto=1;
	while(n!=0)	
	{
		resto= n%10;
		n=n/10;
		if(resto>7)
		{
			cout<<"El digito "<<resto<<" no corresponde a la base 8"<<endl;
		}
	}
}
