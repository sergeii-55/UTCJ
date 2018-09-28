/* Hacer un programa para agregar n�meros enteros a una pila,
hasta que el usuario lo decida, despu�s mostrar todos los n�meros
 introducidos en la pila. */

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//prototipo de funcion
void agregarPila(Nodo *&,int);
void sacarPila(Nodo *&,int &);

int main(){
	Nodo *pila = NULL;
	int dato;
	char rpt;
	
	do{
		cout<<"Introduzca un numero: ";
		cin>>dato;
		agregarPila(pila,dato);
		
		cout<<"\nDesea agregar otro dato (s/n): ";
		cin>>rpt;
	
	}while((rpt=='S')||(rpt=='s'));
	
	cout<<"Mostrando los elementos: ";
	while(pila!=NULL){ //mientras no sea el final de la pila, sacara elementos
		sacarPila(pila,dato);
		if(pila != NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";
			cout<<"\n";
		}
	}
	
	system("pause");
	return 0;
}

void agregarPila(Nodo *&pila,int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	cout<<"\tEl elemento "<<n<<" ha sido agregado a Pila";
}
void sacarPila(Nodo *&pila,int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}





