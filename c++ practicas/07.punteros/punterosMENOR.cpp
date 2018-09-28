/* Rellenar un arreglo con n números, posteriormente utilizando punteros determinar el menor elemento del vector. */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n=0, menor=99999, *dir;
	int vector[100];
	
	
	cout<<"Introduce el numero de largo para el vector: ";cin>>n;cout<<"\n";
	for(int i=0;i<n;i++){
		cout<<"Introduce el numero "<<i+1<<" : ";cin>>vector[i];
	}
	dir=vector;
	for(int i=0;i<n;i++){
		if(*dir<menor){
			menor = *dir;
		}
		dir++;
	}
	cout<<"El menor es: "<<menor<<endl;
	
	
	
	system("pause");
	return 0;
}
