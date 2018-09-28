#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
 int cont=1, temp, tempSUM=0, tempA=-999, tempB=999;
 
 cout<<"\tPROGRAMA DE ESTADISTICA DE TEMPERATURA"<<endl;
 cout<<"\tse calculara la temperatura media, alta y baja"<<endl;
 cout<<"\n";
 cout<<"\n";
 
 for(int i=0; i<24; i+=4){
 	
cout<<cont<<") Introduce la temperatura actual: ";cin>>temp;
tempSUM = tempSUM + temp;

if(temp>tempA){
	tempA=temp;
}
if(temp<tempB){
	tempB=temp;
}
cont++;
}
int tempAVG = tempSUM / 6;
cout<<"\n";
cout<<"\n";
cout<<"\tLa temperatura media es: "<<tempAVG<<endl;
cout<<"\tLa temperatura mas alta es: "<<tempA<<endl;
cout<<"\tLa temperatura mas baja es: "<<tempB<<endl;
cout<<"\n";
system("pause");
return 0;
}
