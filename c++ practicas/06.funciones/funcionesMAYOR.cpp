/*Escriba una plantilla de función llamada maximo() que devuelva el valor máximo de tres argumentos que se transmitan a la función cuando sea llamada.
 Suponga que los tres argumentos serán del mismo tipo de datos.*/
 
 #include<iostream>
 #include<stdlib.h>
 using namespace std;
 
 template <class TIPOD>
 void maximo(TIPOD num1, TIPOD num2, TIPOD num3);
 
 int main(){
 	int a=64,b=55,c=9;
 	maximo(a,b,c);
 	
 	system("pause");
 	return 0;
 }
 
 template <class TIPOD>
 void maximo(TIPOD num1, TIPOD num2, TIPOD num3){
 	if(num1>num2&&num1>num3){
 		cout<<"El mayor es a: "<<num1<<endl;
	 }
  	if(num2>num1&&num2>num3){
	cout<<"El mayor es b: "<<num2<<endl;
	 }
	if(num3>num1&&num3>num2){
	cout<<"El mayor es c: "<<num3<<endl;
	 }
 }
