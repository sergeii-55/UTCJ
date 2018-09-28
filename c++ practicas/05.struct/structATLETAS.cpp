/*  Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: 
nombre, país, numero_medallas. 
y devuelva los datos (Nombre, país) del atleta que ha ganado el mayor número de medallas. */

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct atleta{
	char nombre[20];
	char pais[10];
	int medallas;
}atl[100];

int main(){
	int n_atl,posM=0, posm=0, medM=0, medm=99999999;
	
	cout<<"Ingresa el numero de atletas: ";cin>>n_atl;
	cout<<"\n**************************************\n";	
	for(int i=0;i<n_atl;i++){
		fflush(stdin);
		cout<<i+1<<") Introduce el nombre del atleta: ";
		cin.getline(atl[i].nombre,20,'\n');
		cout<<i+1<<") Introduce el pais del atleta: ";
		cin.getline(atl[i].pais,10,'\n');
		cout<<i+1<<") Introduce el numero de medallas: ";
		cin>>atl[i].medallas;
		
		//mayor numero de medallas
		if(atl[i].medallas > medM){
			medM=atl[i].medallas;
			posM=i;
		}
		//menor numero de medallas}
		if(atl[i].medallas < medm){
			medm=atl[i].medallas;
			posm=i;
		}
		cout<<"\n**************************************\n";	
	}
	
	cout<<"\n.:DATOS DEL ATLETA CON MAS MEDALLAS:.\n";
	cout<<"Nombre: "<<atl[posM].nombre<<endl;
	cout<<"Pais: "<<atl[posM].pais<<endl;
	
	cout<<"\n.:DATOS DEL ATLETA CON MENOS MEDALLAS:.\n";
	cout<<"Nombre: "<<atl[posm].nombre<<endl;
	cout<<"Pais: "<<atl[posm].pais<<endl;
	
	
	system("pause");
	return 0;
}
