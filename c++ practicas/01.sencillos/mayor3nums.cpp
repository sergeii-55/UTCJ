/* Mayor de 3 numeros */

#include<iostream>

using namespace std;

int main(){
	
	int a,b,c;
	
	cout<<"Introduce 3 numeros: "<<endl;
	cin>>a>>b>>c;
	
	if(a==b&&a==c){
		cout<<"\nTodos son iguales";
	}
	if(a>b&&a>c){
		cout<<"\n"<<a<<" Es mayor que todos";
	}
	if(b>c&&b>a){
		cout<<"\n"<<b<<" Es mayor que todos";
	}
	if(c>b&&c>a){
		cout<<"\n"<<c<<" Es mayor que todos";
	}
	if(a==b&&a>c){
		cout<<"\n"<<a<<" Es el mayor y se repite";
	}
	if(a==c&&a>b){
		cout<<"\n"<<a<<" Es el mayor y se repite";
	}
	if(b==c&&b>a){
		cout<<"\n"<<b<<" Es el mayor y se repite";
	}
	return 0;
}
