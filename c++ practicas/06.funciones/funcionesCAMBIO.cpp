/* Escriba una funci�n nombrada cambio() que tenga un par�metro en n�mero entero y
 seis par�metros de referencia en n�mero entero nombrados
  cien, cincuenta, veinte, diez, cinco y uno, respectivamente. 
  La funci�n tiene que considerar el valor entero transmitido como una cantidad 
  en d�lares y convertir el valor en el n�mero menor de billetes equivalentes. */
  
  #include<iostream>
  #include<stdlib.h>
  using namespace std;
  
  
  void cambio(int,int&,int&,int&,int&,int&,int&);

int main(){
 int cant,cien,cincuenta,veinte,diez,cinco,uno;
 cout<<"Ingrese la cantidad de dinero: ";
 cin>>cant;
 cambio(cant,cien,cincuenta,veinte,diez,cinco,uno);
 cout<<"Cambio: $"<<cant<<endl;
 cout<<"\n"<<" $100    : "<<cien
 	 <<"\n"<<" $50     : "<<cincuenta
	 <<"\n"<<" $20     : "<<veinte
	 <<"\n"<<" $10     : "<<diez
	 <<"\n"<<" $5      : "<<cinco
	 <<"\n"<<" $1      : "<<uno
	 <<"\n";
 system("pause");
 return 0;
}

void cambio(int cantidad,int& cien,int& cincuenta,int& veinte,int& diez,int& cinco,int& uno){
      cien=cantidad/100; cantidad =cantidad-(cien*100);
 cincuenta=cantidad/50;  cantidad =cantidad-(cincuenta*50);
    veinte=cantidad/20;  cantidad-=(veinte*20);
      diez=cantidad/10;  cantidad-=(diez*10);
     cinco=cantidad/5;   cantidad-=(cinco*5);
       uno=cantidad/1;   cantidad-=(uno*1);
}
