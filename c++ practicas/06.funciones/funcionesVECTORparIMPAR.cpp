/* Realiza una función que tome como parámetros un vector
 de enteros y su tamaño e imprima un vector
 con los elementos impares del vector recibido. */
  
#include<iostream>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void separarImpar(int vec[],int);
void mostrarVector(int vec[],int);

 int vec[100],tam;
 int vecI[100],tamI=0;
 
 int main(){
 	pedirDatos();
 	separarImpar(vec,tam);
 	mostrarVector(vec,tam);
 	
 	system("pause");
	return 0;
 }
 
 void pedirDatos(){
 	cout<<"Introduce el largo del vector: ";
 	cin>>tam;
 	
 	for(int i=0;i<tam;i++){
 		cout<<i+1<<". Introduce el numero: ";
 		cin>>vec[i];
	 }
 }
 void separarImpar(int vec[],int tam){
 	int j=0;
	 for(int i=0;i<tam;i++){
 		if (vec[i]%2!= 0){
 			//es par
 			vecI[j] = vec[i];
 			j++;
 			tamI++;
		 }
 		
	 }
 }
 void mostrarVector(int vec[],int tam){
 	cout<<"\n";
	 for(int i=0; i<tamI;i++){
 		cout<<i+1<<". valor impar: "<<vecI[i]<<endl;
	 }
 }
 
