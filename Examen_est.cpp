#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void pedirnum();
void mostrarnum();
int numrecorrido, *recorrido, *ptr;

int main()
{
	pedirnum();
	mostrarnum();
	delete[] recorrido;
	
	getch();
	return 0;
}

void pedirnum()
{
	cout<<"Dame el numero del recorrido: "; cin>>numrecorrido;
	recorrido=new int[numrecorrido];
	
	for(int i=0; i<numrecorrido; i++){
		cout<<"Ingrese numero: "; cin>>recorrido[i];
	}
}
void mostrarnum()
{
	ptr=recorrido;
	cout<<"\nMostarndo numero"<<endl;
	for(int i=0 ; i<numrecorrido; i++)
	{
		cout<<*ptr++<<endl;
	}
}
