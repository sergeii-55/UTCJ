/* introducir 2 cadenas de caracteres, compararlas si son iguales y si no, mostrar cual esta alfabeticamente despues de cual */

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char palabra1[10];
	char palabra2[10];
	
	cout<<"Introduce la primera palabra: "<<endl;
	cin.getline(palabra1,10,'\n');
	cout<<"Introduce la segunda palabra: "<<endl;
	cin.getline(palabra2,10,'\n');
	
	if(strcmp(palabra1,palabra2)==0){
			cout<<"SON IGUALES!!!"<<endl;		
	}else{
		if (strcmp(palabra1,palabra2)<1){
		 	cout<<palabra1<<" va primero en el abecedario. y despues "<<palabra2<<endl;
		}else{
			cout<<palabra2<<" va primero en el abecedario. y despues "<<palabra1<<endl;
		}
	}
	
	
	system("pause");
	return 0;
}
