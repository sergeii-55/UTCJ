/*Pedir una cadena de caracteres (string) al usuario,
e indicar cuantas veces aparece la vocal a,e,i,o,u; en la cadena de caracteres.
NOTA: Usar punteros.*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

//Prototipo de Función
void pedirFrase();
void contarVocales(char *);

char frase[50];
int A=0, E=0, I=0, O=0, U=0;

int main(){
	pedirFrase();
	contarVocales(frase);
	
	system("pause");
	return 0;
}

void pedirFrase(){
	cout<<"Introduzca un frase: ";
	cin.getline(frase,50,'\n');
	
	//Pasar la frase a mayuscula
	strupr(frase); 
}

void contarVocales(char *nombre){

	while(*nombre){ //mientras nombre no sea nulo '\0'
		switch(*nombre){
			case 'A': A++; break;
			case 'E': E++; break;
			case 'I': I++; break;
			case 'O': O++; break;
			case 'U': U++; break;
		}
		nombre++;
	}
	cout<<"El numero de 'A' son: "<<A<<endl;
	cout<<"El numero de 'E' son: "<<E<<endl;
	cout<<"El numero de 'I' son: "<<I<<endl;
	cout<<"El numero de 'O' son: "<<O<<endl;
	cout<<"El numero de 'U' son: "<<U<<endl;
}

