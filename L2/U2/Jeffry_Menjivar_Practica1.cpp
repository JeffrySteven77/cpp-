/*
Proposito: Utilizar clases para identificar un cuadrado y un rectangulo
con sus lados
Autor: Jeffry Stiven Menjivar Lopez
Fecha: 13 / marzo / 2024
Hora: 19:30
*/

#include <iostream>
#include <cmath>

using namespace std;

class Cuadrilatero {
private:
double LadoA = 0;
double LadoB = 0;
double LadoC = 0;
double LadoD = 0;

public:
Cuadrilatero(double Lado_A,double Lado_B,double Lado_C,double Lado_D){
LadoA= Lado_A,LadoB = Lado_B;
LadoC= Lado_C, LadoD= Lado_D;
}

void TipoCuadrado() {


cout<<" INGRESE LOS LADOS DEL CUADRILATERO ";
cout<< endl;
cout <<"LADO A: ";
cin >> LadoA;
cout <<"LADO B: ";
cin >> LadoB;
cout <<"LADO C: "; 
cin >> LadoC;
cout <<"LADO D: "; 
cin >> LadoD;

double Perimetro = 0;

if(LadoA == LadoB && LadoB == LadoC && LadoA==LadoD)
{
cout<<"SE FORMA UN CUADRADO SUS LADOS TIENEN EL MISMO VALOR"<<endl;
 Perimetro = pow (LadoA, 2) ;
 cout<<" Y SU PERIMETRO ES "<<Perimetro;
}

else if (LadoA == LadoC && LadoB == LadoD )
{
cout<<"SE FORMA UN RECTANGULO DOS DE SUS LADOS SON MAYORES";
}
else {
cout<<"NO FORMA UN CUADRADO NI UN RECTANGULO";
}

}


};

int main(){
	char continuar;

do{
	
 Cuadrilatero Cd1(0,0,0,0);
 Cd1.TipoCuadrado();
 
 cout<<endl<<"Desea continuar? ";
 cin >>continuar;

 
 
}while (continuar == 'S' || continuar =='s');


return 0;
}
