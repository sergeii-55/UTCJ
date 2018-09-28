/* definir vector y calcular la multiplicaciond e sus elementos */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[]={1,4,5,6,5,3,6,8,9,1};
	int multi=1;
	
	for(int i=0; i<10; i++){
	multi *= numeros[i];
	}
	
	cout<<"la multiplicacion de todos los numeros es: "<<multi<<endl;
	
	system("pause");
	return 0;
}
