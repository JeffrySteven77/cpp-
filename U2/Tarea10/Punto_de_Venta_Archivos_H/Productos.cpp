#include <iostream>
#include "Factura.h"
using namespace std;


void productos(int opcion)
{	system ("cls");
	int opcionProducto = 0;
	
	switch (opcion)
	{
		case 1:
			{
				cout<<"BEBIDAS CALIENTES"<<endl;
				cout<<" "<<endl;
				cout<<"1. Capuccino"<<endl;
				cout<<"2. Expresso"<<endl;
				cout<<"3. Latte"<<endl;
				cout<<endl;
				
				cout<<"\nIngrese su Opcion:  ";
				
				cin>>opcionProducto;
				switch(opcionProducto)
				{
				
					case 1:
					{
						agregarProducto(". Capuccino - Lps 40.00",1,40);	
						break;
					}
					case 2:
					{	
						agregarProducto("1. Expresso - Lps 30.00",1,30);	
						break;
					}
					case 3:
						agregarProducto ("1. Latte - Lps 36.00",1,36);
						break;
					default:
					{
						cout<<"\nOpcion no valida";
						break;
						return;
					}
					break;
				}
				cout<<"\nPRODUCTO AGREGADO"<<endl;
				system("pause");
				break;
			}
		case 2:
			{
				cout<<"BEBIDAS FRIAS"<<endl;
				cout<<"1. Mochaccino"<<endl;
				cout<<"2. Granita de frutas"<<endl;
				cout<<"3. latte frio"<<endl;
				
				cout<<"\nIngrese su Opcion:  ";
				cin>>opcionProducto;
				switch(opcionProducto)
				{
				
					case 1:
					{
						agregarProducto("1. Mochaccino - Lps 60.00",1,60);	
						break;
					}
					case 2:
					{	
						agregarProducto("1. Granita de frutas - Lps 42.00 ",1,42);	
						break;
					}
					case 3:
					{
						agregarProducto("1. latte frio - Lps 49.00",1,49);
						break;
					}
					default:
					{
						cout<<"Opcion no valida";
						return ;
						break;
					}
					cout<<"\nPRODUCTO AGREGADO"<<endl;
					system("pause");
					break;
				}
				break;
			}
		case 3:
			{
				cout<<"REPOSTERIA"<<endl;
				cout<<"1. Bizcocho"<<endl;
				cout<<"2. Pecan Pie"<<endl;
				cout<<"3. Mousse de MW"<<endl;
				
				cout<<"\nIngrese su Opcion:  ";
				cin>>opcionProducto;
				switch(opcionProducto)
				{
				
					case 1:
					{
						agregarProducto("1. Bizcocho - Lps 160.00",1,160);	
						break;
					}
					case 2:
					{	
						agregarProducto("1.Pecan Pie - Lps 120.00 ",1,120);	
						break;
					}
					case 3:
					{
						agregarProducto("1. Mousse de MW - Lps 100.00",1,100);
						break;
					}
					default:
					{
						cout<<"Opcion no valida";
						return ;
						break;
					}
					cout<<"\nPRODUCTO AGREGADO"<<endl;
					system("pause");
					break;
				}
				system("pause");
				break;
			}		
	}
}
