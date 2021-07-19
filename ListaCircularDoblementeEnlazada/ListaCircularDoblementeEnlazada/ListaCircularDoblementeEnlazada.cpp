#include <iostream>
#include <string>
#include<conio.h>
#include<stdlib.h> // funciona new y delete
#include<iomanip>
using namespace std;

#include "GestorLCDE.h"

GestorLCDE gestor = GestorLCDE::GestorLCDE();

void Menu();
bool Opcion(int _opcion);

int main()
{
	Menu();
}

void Menu() {
	int opcion;
	bool salir = false;
	do {
		cout << "==============================================" << endl;
		cout << "1. Insertar numero al principio." << endl;
		if (!gestor.vacia()) {
			cout << "2. Insertar numero al final." << endl;
			cout << "3. Lista de numeros." << endl;
			cout << "4. Eliminar un numero." << endl;
			cout << "5. Eliminar la lista." << endl;
			cout << "6. Buscar numero en la lista." << endl;
		}
		cout << "7. Salir." << endl;
		cout << "----------------------------------------------" << endl;
		cout << "Ingrese la opción que desea: "; cin >> opcion;
		cout << "==============================================" << endl;
		salir = Opcion(opcion);

	} while (!salir);
}

bool Opcion(int _opcion) {
	bool salir = false;
	int num;
	switch (_opcion)
	{
	case 1:
		cout << "Ingrese el numero: "; cin >> num;
		gestor.insertFront(num);
		break;

	case 2:
		cout << "Ingrese el numero: "; cin >> num;
		gestor.insertEnd(num);
		break;

	case 3:
		cout << "================ LISTA ================" << endl;
		cout << gestor.mostrar();
		cout << "=======================================" << endl;
		break;

	case 4:
		cout << "Ingrese el numero que desea eliminar: "; cin >> num;
		gestor.deleteItem(num);
		break;

	case 5:
		gestor.deleteList();
		cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
		cout << "=-=-=- Lista de numeros borrada -=-=-=" << endl;
		cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;

		break;

	case 6:
		cout << "Ingrese el numero que desea buscar: "; cin >> num;
		if (gestor.searchItem(num)) {
			cout << "El numero " << num << " se encuentra en la lista." << endl;
		}
		else {
			cout << "El numero " << num << " no se encuentra en la lista." << endl;
		}
		break;

	case 7:
		salir = true;
		break;

	default:
		cout << "Opcion incorrecta, vuelva a digitarla." << endl;
		break;
	}
	return salir;
}