/* Pedir cadena de caracteres y sumar la longitud */

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char frase[50];
	int largo;
	
	cout<<"Introduce un enunciado: "<<endl;
	cin.getline(frase,50,'\n');
	largo = strlen(frase);
	if (largo>10){
			cout<<"\nEl largo de la frase es: "<<largo<<"\n\nY tu frase fue: "<<frase<<endl;
	}else{ 
	 cout<<"frase muy corta :-( (debia pasar los 10 caracteres)"<<endl;
	}
	
	
	system("pause");
	return 0;
}
