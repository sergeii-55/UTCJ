/* capturar nombre en mayusculas y darle salida a minusculas solo si empieza con cierta letra */

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char nombre[10];
	cout<<"\nIntroduce tu nombre en mayusculas: "<<endl;
	cin.getline(nombre,10,'\n');
	
		if (nombre[0]=='S'){
			strlwr(nombre);
			cout<<"El nombre "<<nombre<<" SI empieza con S"<<endl;
		}else{
			cout<<"El nombre "<<nombre<<" NO empieza con S"<<endl;
		}
	system("\n\npause");
return 0;
}
