/* contar valores antes de meter 0 */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int con=0,num;
	
	cout<<"Ingresa 0 para salir\n"<<endl;
	do{
		cout<<"Ingresa un numero: ";cin>>num;
		con++;
	}while(num!=0);
	cout<<"\nNumeros ingresados: "<<con<<"\n"<<endl;
	system("pause");
	return 0;
}
