/* Hacer una funci�n para almacenar N n�meros en un arreglo din�mico,
posteriormente en otra funci�n buscar un n�mero en particular. 
NOTA: Puedes utilizar cualquier m�todo de b�squeda(Secuencial o Binaria) */

#include<iostream>
#include<stdlib.h>

void pedir();
void buscar();
using namespace std;

int nElementos, *elemento;

int main(){
	pedir();
	buscar();
	delete[] elemento;
	
	system("pause");
	return 0;
}

void pedir(){
	cout<<"Introduce el numero de elementos del vector: ";
	cin>>nElementos;
	
	elemento= new int[nElementos];
	
	for(int i=0;i<nElementos;i++){
		cout<<"Numero "<<i+1<<": ";
		cin>>*(elemento+i);
	}
}
void buscar(){//busqueda por metodo secuencial
	int i=0, dato=5;
	char band='F';
	int s=0;
	
	while((band=='F')&&(i<nElementos)){
			if(*(elemento+i)==dato){
				band='V';
				s++;
			}
		i++;
		s++;
	}
	
	if (band=='F'){
		cout<<"Numero no encontrado "<<endl;
	}
	else if(band =='V'){
		cout<<"Numero encontrado en la posicion numero "<<s-1<< endl;
	}
}
	

