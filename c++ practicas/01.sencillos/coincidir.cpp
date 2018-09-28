/* Indicar si el caracter es una vocal mayuscula, minuscula o no es vocal */

#include<iostream>

using namespace std;

int main(){
	int a,b,c,x;
	
	cout<<"Introduce 3 numeros: "<<endl;
	cin>>a>>b>>c;

	cout<<"Introduce 1 numero a comparar: "<<endl;
	cin>>x;
	
	if(x==a){
		cout<<"Tu numero es igual al primero"<<endl;
	}
	if(x==b){
		cout<<"Tu numero es igual al segundo"<<endl;
	}
	if(x==c){
		cout<<"Tu numero es igual al tercero"<<endl;
	}
	if((x!=a)&&(x!=b)&&(x!=c)){
		cout<<"Tu numero no coincide con ninguno de los 3 numeros "<<endl;
	}

	return 0;
}
