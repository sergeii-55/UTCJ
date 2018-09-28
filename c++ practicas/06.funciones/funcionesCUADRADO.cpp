/* Escriba una función llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y despliegue el
 resultado. La función deberá ser capaz de elevar al cuadrado números flotantes.*/

#include<iostream>
#include<stdlib.h>
using namespace std;

//Prototipo de Funciones
void pedirNumero();
void sqr(float x);

float num;

int main(){
	pedirNumero();
	sqr(num);
	
	
	system("pause");
	return 0;
}

void pedirNumero(){
	cout<<"Introduce el numero: ";
	cin>>num;
}
void sqr(float x){
	float sqr = x*x;
	
	cout<<"El cuadrado de "<<x<<" es: "<<sqr<<endl;
}
