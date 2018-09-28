/* menu opcional para numero */

#include<iostream>

using namespace std;

int main(){
	int num,opc,res;
	
	
	cout<<"\t\nIngresa Un numero: "<<endl;
	cin>>num;
	cout<<"\t\tMENU DE OPCION PARA UN NUMERO"<<endl;
	cout<<"\t1)  Elevar al cubo "<<endl;
	cout<<"\t2)  Verificar si es par o impar "<<endl;
	cout<<"\t3)  Salir "<<endl;

	cout<<"\tIngresa la opcion del menu: ";
	cin>>opc;
	
	switch(opc){
		case 1:
			res = num * num * num;
			cout<<"\t\tEl resultado es: "<<res<<endl;break;
		case 2:
			if(num%2==0){
				cout<<"\t\tEl numero es par: "<<endl;
			}else{
				cout<<"\t\tEl numero es impar: "<<endl;
			}break;
		case 3:break;
	}

	
	return 0;
}
