/* llenar 2 matrices de 3x3 y multiplicarlas por un valor capturado  */
   
   #include<iostream>
   #include<stdlib.h>
   #include<time.h>
   
   using namespace std;
   
   int main(){
   	int mat1[3][3];
   	int mat2[3][3];
   	int mul, opc;
   	
   	
	   //llenando las matrices
   	for(int i=0;i<3;i++){
   		for(int j=0;j<3;j++){
   			int dato1=rand() % 19 + 9;
   			int dato2=rand() % 19 + 9;
			mat1[i][j]=dato1;
			mat2[i][j]=dato2;
		   }
	   }
	    cout<<"\n";
	   //mostrando matriz 1
	   cout<<"\tMATRIZ 1"<<endl;
   	for(int i=0;i<3;i++){
   		cout<<"\t";
   		for(int j=0;j<3;j++)	{
   			cout<<mat1[i][j]<<" ";
		   }
		   cout<<"\n";
	   }
	   cout<<"\n";
	   cout<<"\tMATRIZ 2"<<endl;
   	for(int i=0;i<3;i++){
   		cout<<"\t";
   		for(int j=0;j<3;j++)	{
   			cout<<mat2[i][j]<<" ";
		   }
		   cout<<"\n";
	   }
	   cout<<"\n";
	   
	   cout<<"\tQue matriz quieres multiplicar [1/2]? "<<endl;cout<<"\t\t";cin>>opc;
	   cout<<"\tPor cuanto la quieres multiplicar? "<<endl;cout<<"\t\t";cin>>mul;
	   cout<<"\n";
	   cout<<"\n";
	   
	   
	   cout<<"\tMULTIPLICANDO POR "<<mul<<endl;
	   if (opc==1){
	   for(int i=0;i<3;i++){
   		cout<<"\t";
   		for(int j=0;j<3;j++)	{
   			int x = (mat1[i][j]) * mul;
   			cout<<x<<" ";
		   }
		   cout<<"\n";
	   }
	   	   }else{
	   	   	for(int i=0;i<3;i++){
   		cout<<"\t";
   		for(int j=0;j<3;j++)	{
   			int x = mul * (mat2[i][j]);
   			cout<<x<<" ";
		   }
		   cout<<"\n";
	   }
			  }
   	
	   
	   
	   cout<<"\n";
	system("pause");
   	return 0;
   }
