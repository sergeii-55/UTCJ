/*Determinar si un n�mero es primo o no; con punteros y adem�s indicar en que posici�n de memoria se guardo el n�mero.*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int num, *dir_num, cont=0;
	
	cout<<"Ingresa un numero: ";cin>>num;
	
	//guardamos la posicion de la memoria del num
	dir_num = &num;

	for(int i=1;i<*dir_num;i++){
		if(*dir_num%i == 0){
			cont++;
		}
	}
	
	if(cont>2){
		cout<<"El numero "<<*dir_num<<" NO es primo"<<endl;
	}
	else{
		cout<<"El numero "<<*dir_num<<" ES PRIMO"<<endl;
		cout<<"Direccion: "<<dir_num<<endl; //Mostramos su direccion en memoria
	}
	
	
	system("pause");
	return 0;
}
