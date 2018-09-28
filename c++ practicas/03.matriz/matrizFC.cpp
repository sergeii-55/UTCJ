/* pedir al usuario no de filas y columnas para matriz,
   rellenar con numeros aleatorios y
   mostrar el resultado  */
   
   #include<iostream>
   #include<stdlib.h>
   #include<time.h>
   
   using namespace std;
   
   int main(){
   	int filas, columnas, conta=1;
   	int matriz[100][100];
   	
   	cout<<"Introduce el numero de filas: ";cin>>filas;
   	cout<<"Introduce el numero de columnas: ";cin>>columnas;
   	cout<<"\n";
   	
	   //llenando matriz
   	for(int i=0;i<filas;i++){
   		for(int j=0;j<columnas;j++)	{
   			int dato=rand() % 89 + 10;
			matriz[i][j]=dato;
		   }
	   }
	   
	   //mostrando matriz
   	for(int i=0;i<filas;i++){
   		for(int j=0;j<columnas;j++)	{
   			if(conta<10){
			   cout<<" "<<conta<<".- "<<matriz[i][j]<<" | ";
   			conta++;
			   }else{
   			cout<<conta<<".- "<<matriz[i][j]<<" | ";
   			conta++;}
		   }
		   cout<<"\n";
	   }
	   
	   cout<<"\n";
	system("pause");
   	return 0;
   }
