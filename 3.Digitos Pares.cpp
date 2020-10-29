//3.	Hacer un programa para contar los dígitos pares que tiene un número N.  Ej. Si N= 5678312,  este tiene 3 dígitos pares (6, 8, 2).
#include<iostream>
#include<conio.h>
using namespace std;

void kaka(int,int);

int main()
{
	int N,b=1;
	cout<<"Ingrese el numero"<<endl;
	cin>>N;
	cout<<"Los digitos pares son: "<<endl;
	kaka(N,b);

	getch();
	
}

void kaka(int N,int b)
{
		while(N!=0)
	{
	b=N%10;
	N=N/10;
		if((b%2==0)&&(b!=0))	
		{
		cout<<b<<endl;
		}
	} 
	
}
