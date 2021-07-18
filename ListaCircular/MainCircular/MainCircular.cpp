// MainCircular.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "ListaCircularSimple.h"
#include "Nodo.h"
#include <iostream>
using namespace std;


void imprimirMenu() {
    cout << "\n----Menu del programa----\n";
    cout << "\n 1: Agregar a la lista \n";
    cout << "\n 2: Mostrar lista \n";
    cout << "\n 3: Eliminar despues \n";
    cout << "\n -1: Salir del programa \n";

}

int leerOpcion() {
    int opcion;
    cout << "\nSelecciona una opcion: "; cin >> opcion;
    return opcion;

}

bool ejecutarOpcion(int opcion, ListaCircularSimple* lista) {
    bool salir = false;
    int elDato = 0;
    string info;
    switch (opcion) {
    case 1:
        cout << "\nPor favor ingrese un numero" << endl;
        cin >> elDato;
        lista->insertarNodo(elDato);
        cout << "Numero agregado a la lista" << endl;

        break;
    case 2:
        cout << "***Mostrar lista***\n";
        lista->desplegarLista();
        break;
    case 3:
        cout << "***Eliminar***\n";
        cout << "\nIngrese la posicion del numero que desea eliminar: "; 
        cin >> elDato;
        lista->borrar(elDato);
        cout << "Elemento eliminado" << endl;
        break;

    case -1:
        salir = true;

    default:
        cout << "Fin del programa";
        break;
    }

    return salir;
}

int main()
{
    ListaCircularSimple* lista = new ListaCircularSimple();
    bool salir = false;
    do
    {
        imprimirMenu();
        int opcion = leerOpcion();
        salir = ejecutarOpcion(opcion, lista);

    } while (!salir);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
