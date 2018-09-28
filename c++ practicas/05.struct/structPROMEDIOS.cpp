/* Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos: nota1, nota2, nota3;
 y otro llamada alumno que tendrá los siguientes miembros: nombre, sexo, edad, 
 hacer que la estructura promedio este anidada en la estructura alumno,
 pedir los datos para N alumnos, y calcular cuál de todos tiene el mejor promedio, e imprimir sus datos. */
 
 #include<iostream>
 #include<stdlib.h>
 #include<string.h>
 using namespace std;
 
 struct Promedio{
 	float nota1, nota2, nota3;
 };
 
 struct Alumno{
 	char nombre [20];
 	char sexo [10];
 	int edad;
 	struct Promedio prom;
 	float promF;
 }alum[100];
 
 int main(){
	int n_alum,posM=0, posm=0;
	float promM=0, promm=99999999, promx;
	
	cout<<"Ingresa el numero de alumnos: ";cin>>n_alum;
	
	for(int i=0;i<n_alum;i++){
		fflush(stdin);
		cout<<"\n*******************ALUMNO("<<i+1<<")*******************\n";
		cout<<i+1<<") Introduce el nombre del alumno: ";
		cin.getline(alum[i].nombre,20,'\n');
		cout<<i+1<<") Introduce el sexo del alumno: ";
		cin.getline(alum[i].sexo,10,'\n');
		cout<<i+1<<") Introduce la edad del alumno: ";
		cin>>alum[i].edad;
		fflush(stdin);
		cout<<"\n..:: NOTAS DEL ALUMNO "<<i+1<<" ::.."<<endl;
		cout<<"Nota 1: ";cin>>alum[i].prom.nota1;
		cout<<"Nota 2: ";cin>>alum[i].prom.nota2;
		cout<<"Nota 3: ";cin>>alum[i].prom.nota3;
		
		promx = (alum[i].prom.nota1+alum[i].prom.nota2+alum[i].prom.nota3)/3;
		alum[i].promF=promx;
		
		//mayor promedio
		if(promx > promM){
			promM=promx;
			posM=i;
		}
		//menor promedio
		if(promx < promm){
			promm=promx;
			posm=i;
		}
	}
	
	cout<<"\n.:DATOS DEL ALUMNO CON MAYOR PROMEDIO:.\n";
	cout<<"Nombre: "<<alum[posM].nombre<<endl;
	cout<<"Sexo: "<<alum[posM].sexo<<endl;
	cout<<"Edad: "<<alum[posM].edad<<endl;
	cout<<"Promedio: "<<alum[posM].promF<<endl;
	
	cout<<"\n.:DATOS DEL ALUMNO CON MENOR PROMEDIO:.\n";
	cout<<"Nombre: "<<alum[posm].nombre<<endl;
	cout<<"Sexo: "<<alum[posm].sexo<<endl;
	cout<<"Edad: "<<alum[posm].edad<<endl;
	cout<<"Promedio: "<<alum[posm].promF<<endl;
	
	
	system("pause");
	return 0;
}
