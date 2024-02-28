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
        double Datos [3][3];
        double PromFila [3][1];
        double PromCol [1][3];
        double SumaFila = 0;
        int SumaCol = 0;

        int fila = 0, columna = 0;

        //El siguiente for nos pedira los datos que ocupara la matriz por fila

        for (fila = 0; fila < 3; fila++)
        {
    
        cout<<endl;
        cout<<"Tabla para ingresar los datos de la fila "<< fila +1; //"fila+1 muestra el # de fila en el que se ingresan los datos"
        cout << endl;


         for (columna = 0; columna < 3; columna++)
        {
        cout<<endl;
        cout <<"ingrese los datos ";

        //aqui los datos seran ingresados por el usuario
        cin >> Datos[fila][columna];

        }
        SumaFila += fila;
        SumaCol += columna;
        }
        //PROMEDIO FILAS
        PromFila [fila][1] = SumaFila/fila;
        PromCol [1][columna] = SumaCol/columna;

        
        cout <<"CUADRO DE DATOS INGRESADOS"<<endl;
        //aqui se creara el cuadro bidimencional
        for (fila = 0; fila < 3; fila++)  //cuando aumente una fila tambien lo hara la colunma
        {
            for (columna  = 0; columna < 3; columna++)
            {
                cout << setw(10) << Datos[fila][columna]; 
            }
            
               cout <<endl<<endl; 
            
            
        }
        cout<<"El promedio de las filas y columnas es de "<<endl;
        for (fila = 0; fila < 3; fila++)
        {
             cout<< setw(10)<<PromFila[fila][1];
            for (columna = 0; columna < 3; columna++)
            {
                cout<<setw(10)<< PromCol[1][columna];
            }
            
        }
        


    }
return 0;    
}