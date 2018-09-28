/* Numero positivo o negativo */

#include<iostream>

using namespace std;

int main(){
	
	int num;
	cout<<"Introduce un numero: "<<endl;
	cin>>num;
	
	if(num==0){
		cout<<"\n\nEste numero es el cero (0)"<<endl;	
	}
	else if(num>=1){
	cout<<"\n\nEste numero es positivo (+)"<<endl;	
	}
	else{
	cout<<"\n\nEste numero es negativo (-)"<<endl;		
	}
	return 0;
}
