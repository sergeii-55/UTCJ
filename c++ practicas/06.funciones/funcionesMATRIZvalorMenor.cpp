/* Realice una función que dada una matriz y un número de
 fila de la matriz devuelva el menor de los elementos
  almacenados en dicha fila. */

#include<iostream>
#include<stdlib.h>
using namespace std;
//EL PRIMER VALOR DE LA MATRIZ NO LO REQUIERE, PERO EL SEGUNDO ES OBLIGATORIO
void matrizValorMinimo(int m[][5],int,int);

 int main(){
 	const int NFIL = 3;
 	const int NCOL = 5;
 	int RENGLON;
 	int m[NFIL][NCOL]={{5,2,3,4,1},{10,7,8,9,6},{15,12,13,14,11}};
 	cout<<"Introuce el renglon [ 0 / 1 / 2 ]: ";cin>>RENGLON;
 	cout<<"\n";
 	matrizValorMinimo(m,RENGLON,NCOL);
 	
 	
 	system("pause");
	return 0;
 }
 void matrizValorMinimo(int m[][5],int renglon,int ncol){
 	int valm=99;
 for(int i=0;i<ncol;i++){
 	if(m[renglon][i] < valm  ){
 		valm = m[renglon][i];
	 }
 }
 cout<<"El valor menor del renglon "<<renglon<<" es: "<<valm<<endl;
 }
