/* definir vector y mostrar los elementos en orden inverso */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[]={555,4,5,4,6,9,12,45,66};
	
	for(int i=8; i>=0; i--){
	cout<<"posicion "<<i<<" -> "<<numeros[i]<<endl;
	}
	
	system("pause");
	return 0;
}
