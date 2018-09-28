/* Realice una función que tome como parámetros un vector y su tamaño y diga si el vector está ordenado crecientemente. 
Sugerencia: compruebe que para todas las posiciones del vector, salvo para la 0, el elemento del vector es mayor o igual
 que el elemento que le precede en el vector. */
 
#include<iostream>
#include<stdlib.h>
using namespace std;

void orden(int vec[],int);

int main(){
	const int TAM=5;
	int vec[TAM]={-8,4,5,6,8};
	
	orden(vec,TAM);
	
	system("pause");
	return 0;
}
void orden(int vec[],int tam){
	int band=1;
	for(int i=1;i<tam;i++){
		if(vec[i]>vec[i-1]){
			band = 0;
		}else{band=1;break;
		}
	}
	
if(band==0){cout<<"SI esta arreglado ascendente\n";
}else{cout<<"NO esta arreglado ascendente\n";}
 
}
