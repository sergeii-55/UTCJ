/* pedir 1 precio y mostrar el resultado de dicho numero mas el i.v.a.*/

#include<iostream>

using namespace std;

int main(){
	float precio=0, iva, res;
	
	cout<<"\nIntroduce el precio a evaluar: ";
	cin>>precio;
	
	iva = .16 * precio;
	cout<<"\nEl iva del articulo es de: "<<iva<<endl;
	res = 1.16 * precio;
	cout<<"\nEl total del articulo es de: "<<res<<endl;
	
	
	
	return 0;
}
