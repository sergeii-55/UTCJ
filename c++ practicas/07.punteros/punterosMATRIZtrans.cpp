/* Realice un programa que lea una matriz dinámica de NxM y cree su matriz traspuesta. 
Nota: La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original. */

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

//Prototipo de Función
void pedirDatos();
void mostrarMatriz(int **,int);

int **punt_matriz, nFil, nCol;

int main(){
	pedirDatos();
	mostrarMatriz(punt_matriz,nFil);

}

void pedirDatos(){
	cout<<"Ingrese el tamaño de fila y columna de la matriz: ";
	cin>>nFil;
	nCol=nFil;
	
	//reservando memoria 
	punt_matriz = new int*[nFil]; //reservando para filas
	for(int i;i<nFil;i++){
		punt_matriz[i] = new int[nCol];
	}
	cout<<"\nIngrese los elementos: \n";
	for(int i=0;i<nFil;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Ingrese el numero para la posicion ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(punt_matriz+i)+j); 
		}
	}
}
void mostrarMatriz(int **punt_matriz,int nFil){
	cout<<"\nLa matriz original es: \n";
	for(int i=0;i<nFil;i++){
		for(int j=0;j<nCol;j++){
			cout<<*(*(punt_matriz+i)+j)<<" ";
		}
		cout<<"\n";
	}
	cout<<"\nLa matriz transpuesta es: \n";
	for(int i=0;i<nFil;i++){
		for(int j=0;j<nCol;j++){
			cout<<*(*(punt_matriz+j)+i)<<" ";
		}
		cout<<"\n";
	}
}
