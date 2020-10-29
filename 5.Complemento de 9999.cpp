//5.Hallar el complemento a 9999 de un número entero N.  Ej. 4567, su complemento es 5432.
#include<iostream>
#include"conio.h"
#include"math.h"
using namespace std;
int Funcion1(int);

int main()
{
int n;	
cout<<"Digite el numero para el que desea hallar el complemento a 9999: ";
cin>>n;
cout<<Funcion1(n);		
}

int Funcion1(int n)
{
	if(n<9999)
	{
		int complemento;
		for(int i=1; n<9999;i++)
		{
		n = n + pow(1,i);
		//cout<<n;
		complemento= i;
		}
	}
	else
	{
	
		int complemento;
		for(int i=-1; n>9999;i=i-1)
		{
		n = n - pow(1,i);
		//cout<<n;
		complemento= i;
	}
return complemento;
	}
}
