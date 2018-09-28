/* pedir 2 numero y mostrar suma, mult, rest, division de lso mismos*/

#include<iostream>

using namespace std;

int main(){
	int num1, num2;
	int sum, res, mul, div;
	
	cout<<"Introduce el primer numero: "<<endl;
	cin>>num1;
	cout<<"Introduce el segundo numero: "<<endl;
	cin>>num2;
	
	sum=num1+num2;
	cout<<"La suma de los numeros es: "<<sum<<endl;
	res=num1-num2;
	cout<<"La resta de los numeros es: "<<res<<endl;
	mul=num1*num2;
	cout<<"La multiplicacion de los numeros es: "<<mul<<endl;
	div=num1/num2;
	cout<<"La division de los numeros es: "<<div<<endl;			
	
	return 0;
}
