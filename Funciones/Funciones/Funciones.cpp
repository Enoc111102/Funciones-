#include <string>
#include <iostream>
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"

using namespace std;
//Declaramos prototipos de funciones.
void menu();
int suma();
int resta();
int multi();
int div();
void pausa();

int main()
{
	menu();
	return 0;
}
//Creamos funciones
void menu()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear();
		cout << RED "Calculadora con funciones" << endl;
		cout << "---------------------------" << endl;
		cout << "\t 1.-Sumar" << endl;
		cout << "\t 2.-Restar" << endl;
		cout << "\t 3.-Multiplicar" << endl;
		cout << "\t 4.-Dividir" << endl;
		cout << "\t 5.-Salir" << endl;
		cout << "Elije una Opcion: " << endl;
		cin >> tecla;

		switch(tecla)
		{
		   case '1':
				system("cls");
				suma();
				break;
		   case '2':
				system("cls");
				resta();
				break;
		   case '3':
				system("cls");
				multi();
				break;
		   case '4':
				system("cls");
				div();
				break;
		   case '5':
			   
			   bandera = true;
			   break;

		   default:
			   system("cls");
			   cout << "Opcion no valida" << endl;
			   pausa();
			   break;
		}
	} while (bandera != true);

}
void pausa()
{
	cout << endl << "Pulsa la tecla Enter para continuar";
		getwchar();
		getwchar();
}
int suma()
{
	int a, b, suma;
	cout << GREEN "Suma" << endl;
	cout << "Primer valor: ";
	cin >> a;
	cout << "Segundo valor: ";
	cin >> b;
	suma = a + b;

	cout << "La suma es: " << suma;
	pausa();
	return 0;
}
int resta()
{
	int a, b, resta;
	cout << GREEN "Resta" << endl;
	cout << "Primer valor: ";
	cin >> a;
	cout << "Segundo valor: ";
	cin >> b;
	resta = a - b;

	cout << "La resta es: " << resta;
	pausa();
	return 0;
}
int multi()
{
	int a, b, multi;
	cout << GREEN "Multiplicacion" << endl;
	cout << "Primer valor: ";
	cin >> a;
	cout << "Segundo valor: ";
	cin >> b;
	multi = a * b;

	cout << "La multiplicacion es: " << multi;
	pausa();
	return 0;
}
int div()
{
	int a, b, div;
	cout << GREEN "Division" << endl;
	cout << "Primer valor: ";
	cin >> a;
	cout << "Segundo valor: ";
	cin >> b;
	div = a / b;

	cout << "La divicion es: " << div;
	pausa();
	return 0;
}