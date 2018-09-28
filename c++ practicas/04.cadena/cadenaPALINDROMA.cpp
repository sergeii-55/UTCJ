/* comparar si una palabra o frase es polindroma */

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char frase[30];
	char fraseREV[30];

	cout<<"P A L I N D R O M A S"<<endl;
	cout<<"\nIntroduce palabra o frase a comparar: "<<endl;
	cin.getline(frase,30,'\n');
	
	//copiando el contenido de una cadena a otra
	strcpy(fraseREV,frase);
	//revertiendo una de las cadenas
	strrev(fraseREV);
	//poniendolas en mayusculas
	strupr(frase);strupr(fraseREV);
	
	//inicial la comparacion
	if(strcmp(frase,fraseREV)==0){
			cout<<"ES PALIDROMA!!!"<<endl;		
	}else{
		cout<<"NO ES PALIDROMAS!!!"<<endl;
	}

system("pause");
return 0;
}
