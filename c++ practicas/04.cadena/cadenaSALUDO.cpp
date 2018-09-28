/* crear cadena "Hola que tal", crear cadena pidiendo nombre de usuario, concatenar las 2 */

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char cad1[]="Hola que tal ";
	char nombre[15];

	cout<<"Introduce tu nombre: "<<endl;
	cin.getline(nombre,15,'\n');
	
	cout<<cad1<<nombre<<endl;
	

system("pause");
return 0;
}
