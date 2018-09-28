/* comparar cadenas minusculas, pasasndolas a mayusculas */

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char frase1[]="esdrUJUla";
	char frase2[]="eSdRujuLA";
	
	//poniendolas en mayusculas
	strupr(frase1);strupr(frase2);
	
	//inicial la comparacion
	if(strcmp(frase1,frase2)==0){
			cout<<"Son iguales!"<<endl;		
	}else{
		cout<<"No son iguales!"<<endl;
	}

system("pause");
return 0;
}
