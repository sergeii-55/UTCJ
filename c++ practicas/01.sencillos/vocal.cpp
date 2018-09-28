/* Indicar si el caracter es una vocal mayuscula, minuscula o no es vocal */

#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"Introduce un caracter: "<<endl;
	cin>>letra;

switch(letra){
	
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u': cout<<" Tu caracter es una vocal minuscula";break;
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U': cout<<" Tu caracter es una vocal mayuscula";break;
	default: cout<<" Tu caracter no es vocal";break;
}

	return 0;
}
