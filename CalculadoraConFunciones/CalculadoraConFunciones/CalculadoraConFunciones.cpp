#include <string>	
#include <iostream>
using namespace std;


int suma()
{

}
int resta()
{

}
int multi()
{

}
int division()
{

}
void pausa()
{
	cout << "Presiona ENTER para continuar...\n";
	getwchar();
	getwchar();
}
void menu()
{
	bool Salida = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear;
		cout << "=========================\n";
		cout << "Calculadora con Funciones\n";
		cout << "=========================\n";
		cout << endl;
		cout << "Opciones:\n";
		cout << endl;
		cout << "\t1.- Sumar\n";
		cout << "\t2.- Restar\n";
		cout << "\t3.- Multiplicar\n";
		cout << "\t4.- Dividir\n";
		cout << "\t5.- Salir\n";
		cout << endl;
		cout << "Elige una opcion: \n";
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			suma();
			break;
		case '2':
			system("cls");
			resta;
			break;
		case '3':
			system("cls");
			multi();
			break;
		case '4':
			system("cls");
			division();
			break;
		case '5':
			system("cls");
			Salida = true;
			break;
		default:
			system("cls");
			cout << "Opcion no valida\n";
			pausa();
			break;
		}
	} while (Salida != true);

}
int main()
{
	menu();
	return 0;
}
