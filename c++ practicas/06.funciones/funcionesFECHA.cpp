/* Escriba una funci�n nombrada calc_a�os() que tenga un par�metro entero que represente el n�mero total de d�as desde la fecha 1/1/2000 y 
par�metros de referencia nombrados a�o, mes y d�a. La funci�n es calcular el a�o, mes y d�a actual para el n�mero dado de d�as que se le transmitan.
 Usando las referencias, la funci�n deber� alterar en forma directa los argumentos respectivos en la funci�n que llama. Para este problema suponga
  que cada a�o tiene 365 d�as y cada mes tiene 30 d�as. */
  
#include<iostream>
#include<stdlib.h>
using namespace std;

void calc_anos(int&,int&,int&);

int main(){
	int ano,mes,dia;
	cout<<"Ingresa el a�o [yyyy]: ";cin>>ano; 
	cout<<"Ingresa el mes [mm]: ";cin>>mes; 
	cout<<"Ingresa el dia [dd]: ";cin>>dia; 
	
	calc_anos(ano,mes,dia);
	cout<<"\n";

system("pause");
return 0;
}

void calc_anos(int&aa,int&mm,int&dd){
	int calc, calaa, calmm, caldd;
	 calaa = aa - 2000; calaa = calaa * 12; calaa = calaa * 30;
	 calmm = mm - 1; calmm = calmm * 30;
	 caldd = dd - 1;
	 
	 calc = calaa + calmm + caldd;
	cout<<"\nNumero total de dias trascurridos desde 2000/01/01: "<<calc;
}
