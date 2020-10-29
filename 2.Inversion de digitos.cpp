//2.Dado un número entero N, hacer un programa para invertir el número en otra variable Z.  Ej. Si N= 456721, el número invertido es Z=127654.
#include<iostream>
#include"conio.h"
#include"math.h"
using namespace std;
//Prototipo de funcion
int Funcion(int);
//Programa Principal
int main()
{
	int n;
	cout<<"Digite el numero que desea invertir:"<<endl;
	cin>>n;
	cout<<"El numero invertido es: ";
//Llamada a funcion	
cout<<Funcion(n);
getch();
return 0;
}
//Definicion de funcion
int Funcion(int n)
{
	
	int restoC=1,nC=n,c=0;
	for(int contador=1;nC!=0;contador++)
	{
		restoC=nC%10;
		nC=nC/10;	
		c=contador;
	}

	
	int resto=1,i=0,poder=0,suma1=0,suma2=0;
	while(n!=0)
	{
		i=i+1;
		resto=n%10;
		//cout<<resto<<"r"<<endl;
		n=n/10;
		
		poder= pow(10,c-i);
		suma1= resto*poder;
		//cout<<suma1<<"s"<<endl;
		suma2= suma2 +suma1;
	}
	
	return suma2;
}

