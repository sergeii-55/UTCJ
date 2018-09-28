/* calcular hipotenusa*/

/* La hipotenusa de un triángulo rectángulo es igual a la raiz cuadrada de la suma del cuadrado de los catetos */

#include<iostream>
#include <math.h>
  
using namespace std;

int main(){
	float cata,catb,hip,res;
	
	cout<<"Introduce el cateto A: ";
	cin>>cata;
	cout<<"Introduce el cateto B: ";
	cin>>catb;
	
	res = sqrt((cata+catb)*2);
	
	cout.precision(2);
	cout<<"\nLa hipotenusa es de: "<<res<<endl;
		
	return 0;
}
