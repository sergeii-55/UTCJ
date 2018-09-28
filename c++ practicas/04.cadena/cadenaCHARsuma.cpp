/* pedir 2 cadenas de caracteres, convertirlas a integer, sumarlas y dar el resultado */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	char num1[5];
	cout<<"\nIntroduce un numero entero: "<<endl;
	cin.getline(num1,10,'\n');
	char num2[5];
	cout<<"\nIntroduce otro numero entero: "<<endl;
	cin.getline(num2,10,'\n');
	
	int numero1 = atoi(num1);
	int numero2 = atoi(num2);
	
	int res= numero1 + numero2;
	cout<<"El resultado de la suma es: "<<res<<endl;
	
	system("\n\npause");
return 0;
}
