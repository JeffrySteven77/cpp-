/* 
     Proposito: Calcular el promedio de filas y columnas

     Autor: Jeffry Stiven Menjivar Lopez
     Fecha: 19 de febrero 2024
     Hora: 11:26
*/ 

#include <iostream>
#include <cmath>
#include<iomanip>

using namespace std;

void Arreglo();
void promedioFila();
void promedioColumna();

int main()
{
    cout.precision(12);
    system("cls");

    void Arreglo();
    {
        int Datos [3][3];

        int fila = 0, columna = 0;
        char Opciion;

        do
        {
           for (fila = 0; fila < 3; fila++)
        {
    
        cout<<endl;
        cout<<" Ingresar los datos de la fila "<< fila ;

         for (columna = 0; columna < 3; columna++)
        {
        cout<< " y columna "<<columna ;
        cin >> Datos[fila][columna];
        }
        }
        
        for (fila = 0; fila < 3; fila++)
        {
            for (columna  = 0; columna < 3; columna++)
            {
                cout << setw(10) << Datos[fila][columna]; 
            }
            
               cout <<endl; 
        }
        
        cout<< endl<<" Desea comenzar otra vez? ";
        cout<<endl<<"SI = S";
        cout<<endl<<"No = Otra letra;"<<endl;
        cin >> Opciion;

        } while (Opciion == 'S' or Opciion=='s');
        


    }
return 0;    
}