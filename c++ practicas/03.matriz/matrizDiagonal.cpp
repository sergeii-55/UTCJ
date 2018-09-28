/* crear matriz de 3x3 y mostrar diagonal principal */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int matriz[3][3]={1,2,3,
					  4,5,6,
					  7,8,9};		  
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++)	{	
		if (j==0&&i==0||j==1&&i==1||j==2&&i==2){	
			cout<<matriz[i][j];}else{	cout<<"=";	}
		}
		cout<<"\n";
	}
	system("pause");
	return 0;
}
