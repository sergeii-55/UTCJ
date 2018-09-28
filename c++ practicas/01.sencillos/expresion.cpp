/* expresion matematica a mas b entre c mas d*/

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d,res;
	
	cout<<"Introduce el valor de a : ";
	cin>>a;
	cout<<"\nIntroduce el valor de b : ";
	cin>>b;	
	cout<<"\nIntroduce el valor de c : ";
	cin>>c;	
	cout<<"\nIntroduce el valor de d : ";
	cin>>d;	
	
	res = (a+b)/(c+d);
	cout.precision(2);
	cout<<"\nEl resultado de la ecuacion es de: "<<res<<endl;
		
	return 0;
}
