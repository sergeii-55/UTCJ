/* Hacer un programa en C++, utilizando Pilas que contenga el siguiente menu: 

1. Insertar un caracter a la pila
2. Mostrar todos los elementos de la pila
3. Salir */

#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

struct Nodo{
	char dato;
	Nodo *sig;
};

//prototipo de funcion
void menu();
void agregarPila(Nodo *&,char);
void sacarPila(Nodo *&,char &);

int main(){
	Nodo *pila = NULL;
	char d;
	char res;
	
	do{
		menu();
		cin>>res;
		
		if(res!='1'&&res!='2'&&res!='3'){
		cout<<"\tOpcion incorrecta!!! \n";
		cout<<"\tPresiona enter";
		getch();
		
		}
		if(res=='1'){//insertar caracter
			system("cls");
			cout<<"Introduzca el caracter a guardar: ";
			cin>>d;
			agregarPila(pila,d);
			menu();
		}
		else if(res=='2'){//mostrando lo que exista een la pila
			system("cls");
			cout<<"Mostrando los elementos.\n";
			while(pila!=NULL){ //mientras no sea el final de la pila, sacara elementos
			sacarPila(pila,d);
			if(pila != NULL){
				cout<<"\t"<<d<<"\n";
			}
			else{
			cout<<"\t"<<d<<".";
			cout<<"\n";
			cout<<"\tPresiona enter para regresar al menu principal";
		getch();
		}
		}	
		}
	
	}

 	while(res!='3');
	
	system("pause");
	return 0;
}
void menu(){
	system("cls");
		cout<<"\n****************************************\n";
		cout<<"*           MENU DE PILAS              *\n";
		cout<<"*                                      *\n";
		cout<<"*     1) Insertar caracter             *\n";
		cout<<"*     2) Mostrar caracteres            *\n";
		cout<<"*     3) salir                         *\n";
		cout<<"*                                      *\n";
		cout<<"****************************************\n";
		cout<<"\tElige opcion: ";
}
void agregarPila(Nodo *&pila,char d){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = d;
	nuevo_nodo->sig = pila;
	pila = nuevo_nodo;
	cout<<"\tEl elemento >> "<<d<<" << ha sido agregado a Pila\n";
	cout<<"\tPresiona enter para regresar al menu principal";
	getch();
}
void sacarPila(Nodo *&pila,char &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->sig;
	delete aux;
}














