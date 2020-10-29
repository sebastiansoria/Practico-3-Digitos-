//4.	Dado un número entero, comprobar si el número es capicúa, es decir,
// si leídos de la izquierda a la derecha y viceversa dan el mismo valor o número.  Ej. 34543
//2.Dado un número entero N, hacer un programa para invertir el número en otra variable Z.  Ej. Si N= 456721, el número invertido es Z=127654.
#include<iostream>
#include"conio.h"
#include"math.h"
using namespace std;
//Prototipo de funciones 1 y 2
int Funcion(int);
int Comprobante(int,int);
//Programa Principal
int main()
{
	int n;
	cout<<"Digite el numero que quiere comprobar si es capicua:"<<endl;
	cin>>n;
	

//Lamada a funcion 1 y 2
Comprobante(n,Funcion(n));
getch();
return 0;
}
//Definicion de funcion 1
int Funcion(int n)
{
	
	int restoC=1,nC=n,c=0;
	for(int contador=0;restoC!=0;contador++)
	{
		restoC=nC%10;
		nC=nC/10;	
		c=contador;
	}

	
	int resto=1,i=0,poder=0,suma1=0,suma2=0;
	while(resto!=0)
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
//Definicion de funcion 2
int Comprobante(int a,int b)
{
	if(a==b)
	{
		cout<<"El numero es capicua";
	}
	else
		cout<<"El numero no es capicua";
}
