/* expresion matematica a mas b entre c mas d*/

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d,res;
	
	cout<<"Introduce la calificacion final del primer alumno : ";
	cin>>a;
	cout<<"\nIntroduce la calificacion final del segundo alumno : ";
	cin>>b;	
	cout<<"\nIntroduce la calificacion final del tercer alumno : ";
	cin>>c;	
	cout<<"\nIntroduce la calificacion final del cuarto alumno : ";
	cin>>d;	
	
	res = (a+b+c+d)/4;
	cout.precision(2);
	cout<<"\nEl promedio es de: "<<res<<endl;
		
	return 0;
}
