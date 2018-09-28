#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int x,y,res=1;
	
	 cout<<"\t x a la y "<<endl;
	 cout<<"\n";
	 cout<<"Introduce el valor de x: ";cin>>x;
	 cout<<"Introduce el valor de y: ";cin>>y;
     
	for (int i=y; i>=1; i--){
	res= res*x;
	}
	 cout<<"\nEl valor de x es: "<<res<<endl;
	
	system("pause");
	return 0;
}
