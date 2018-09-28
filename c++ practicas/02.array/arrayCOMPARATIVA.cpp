/* definir vector y comparar si la suma de los elementos coincide con uno de los elementos */

#include<iostream>
#include<stdlib.h>
using namespace std;
//array de 5, valores de 20,2,1,2,25 para true
int main(){
 int numero[999],n,suma,a=1,mayor=0,total=0,nuevo=0;
 cout<<"Ingrese cuantos valores tendra el vectorial: "<<endl;cin>>n;
 for(int i=0;i<n;i++){
  cout<<"Ingrese valor numero "<<a<<": "<<endl;
  cin>>numero[i];
  a++;
  if (numero[i]>mayor){
   mayor=numero[i];
  }
  total=total+numero[i];
 }
 nuevo=total-mayor;
 if (mayor==nuevo){
  cout<<"Si, la suma de todos los vectores menos "<<mayor<<" es iggual a "<<mayor<<"."<<endl;
 }
 else{
  cout<<"No, la suma de los vectores no es iggual a ninggun numero"<<endl;
 }
 
 system("pause");
 return 0;
}
