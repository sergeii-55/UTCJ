/* Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier n�mero introducido por el usuario.
Por ejemplo, si se introduce el n�mero 256.879, deber�a desplegarse el n�mero 0.879*/

#include<iostream>
#include<stdlib.h>

using namespace std;

//Prototipo de Funciones
void pedirNumero();
void frac(float x);

//variable global
float num;
int entero;
double decimal;


int main(){
	pedirNumero();
	system("cls");
	frac(num);
	
	
	system("pause");
	return 0;
}

void pedirNumero(){
	cout<<"Introduce el numero: ";
	cin>>num;
}

void frac(float x){
	entero = num/1;
	decimal = num - entero;
	cout<<"La parte decimal es: "<<decimal<<endl;
}
