/* hacer una estructura llamada alumno, en la cual se tendran los siguientes campos:
nombre, edad, promedio
pedir datos para 3 alumnos,
comprobar cual de los 3 tiene mejor promedio,
imprimir los datos de dicho alumno*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct alumno{
	char nombre[30];
	int edad;
	float promedio;
}al1,al2,al3;

int main(){
	//capturar datos para el alumno 1
	fflush(stdin);
	cout<<"ALUMNO 1"<<endl;
	cout<<"Introduce el nombre: ";cin.getline(al1.nombre,30,'\n');
	cout<<"Introduce la edad: ";cin>>al1.edad;
	cout<<"Introduce el promedio: ";cin>>al1.promedio;cout<<"\n";
	
	//capturar datos para el alumno 2
	fflush(stdin);
	cout<<"ALUMNO 2"<<endl;
	cout<<"Introduce el nombre: ";cin.getline(al2.nombre,30,'\n');
	cout<<"Introduce la edad: ";cin>>al2.edad;
	cout<<"Introduce el promedio: ";cin>>al2.promedio;cout<<"\n";
	
	//capturar datos para el alumno 3
	fflush(stdin);
	cout<<"ALUMNO 3"<<endl;
	cout<<"Introduce el nombre: ";cin.getline(al3.nombre,30,'\n');
	cout<<"Introduce la edad: ";cin>>al3.edad;
	cout<<"Introduce el promedio: ";cin>>al3.promedio;cout<<"\n";
	
if(al1.promedio>al2.promedio&&al1.promedio>al3.promedio){
		cout<<"ALUMNO 1 es el mejor promedio"<<endl;
		cout<<"Nombre: "<<al1.nombre<<endl;
		cout<<"Edad: "<<al1.edad<<endl;
		cout<<"Promedio: "<<al1.promedio<<endl;
}
if(al2.promedio>al1.promedio&&al2.promedio>al3.promedio){
		cout<<"ALUMNO 2 es el mejor promedio"<<endl;	
		cout<<"Nombre: "<<al2.nombre<<endl;
		cout<<"Edad: "<<al2.edad<<endl;
		cout<<"Promedio: "<<al2.promedio<<endl;
}
if(al3.promedio>al1.promedio&&al3.promedio>al2.promedio){
		cout<<"ALUMNO 3 es el mejor promedio"<<endl;	
		cout<<"Nombre: "<<al3.nombre<<endl;
		cout<<"Edad: "<<al3.edad<<endl;
		cout<<"Promedio: "<<al3.promedio<<endl;
}
	
	system("pause");
	return 0;
}
