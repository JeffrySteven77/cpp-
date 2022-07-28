#include <iostream>

using namespace std;

void Productos (int Opcion)
{
	system ("cls");
	
	switch (Opcion)
	{
		case 1:
			{
				cout << "Bebidas Calientes"<<endl;
				system ("pause");
				break;
			}
			
			case 2:
			{
				cout << "Bebidas Frias"<<endl;
				system ("pause");
				break;
			}
	
			case 3:
			{
				cout << "Reposteria"<<endl;
				system ("pause");
				break;
			}				
	}
}
