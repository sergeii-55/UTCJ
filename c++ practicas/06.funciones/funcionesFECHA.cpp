/* Escriba una función nombrada calc_años() que tenga un parámetro entero que represente el número total de días desde la fecha 1/1/2000 y 
parámetros de referencia nombrados año, mes y día. La función es calcular el año, mes y día actual para el número dado de días que se le transmitan.
 Usando las referencias, la función deberá alterar en forma directa los argumentos respectivos en la función que llama. Para este problema suponga
  que cada año tiene 365 días y cada mes tiene 30 días. */
  
#include<iostream>
#include<stdlib.h>
using namespace std;

void calc_anos(int&,int&,int&);

int main(){
	int ano,mes,dia;
	cout<<"Ingresa el año [yyyy]: ";cin>>ano; 
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
