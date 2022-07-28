#include <iostream>

using namespace std;

extern void Productos (int Opcion);

void Menu ()
{
	int Opcion = 0;
	
	while (true)
	{
		system ("cls");
		
		cout << "MENU"<<endl;
		cout << "...." <<endl;
		cout <<endl;
		cout <<endl;
		
		cout << "1 - Bebidas Calientes" <<endl;
		cout << "2 - Bebidas Frias" <<endl;
		cout << "3 - Reposteria" <<endl;
		cout << "0 - Salir" <<endl;
		
		cin >> Opcion;
		
		if (Opcion == 0)
		{
			break;
		}
		
		Productos (Opcion);
	}
}
