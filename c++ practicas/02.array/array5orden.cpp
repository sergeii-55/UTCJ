/* leer vector de 5 numeros, copiarlos a otro vector multiplicandolos por 2 y mostrar este ultimo */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[5];
	int n;
	
	for(int i=0; i<5; i++){
	cout<<"Ingrese numero "<<i+1<<" -> : "; cin>>n;
	numeros[i] = n*2;
	}
	
	for(int i=0; i<5; i++){
	cout<<"\nposicion "<<i<<" -> "<<numeros[i];
	}

	cout<<"\n";
	system("pause");
	return 0;
}
