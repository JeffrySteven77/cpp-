#include <iostream>

using namespace std;

extern int Sumar (int N1, int N2);

int main (int argc, char const* argv[])
{
	system ("cls");
	
	cout << Sumar (2, 5);
	cout << endl;
	
	return 0;
}


