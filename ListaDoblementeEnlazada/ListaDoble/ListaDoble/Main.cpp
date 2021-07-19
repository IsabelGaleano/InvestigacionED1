


#include <string>
#include "Lista.h"
#include <string>
#include <iostream>
using namespace std;


void imprimirMenu() {
    cout << "\n----Menu del programa----\n";
    cout << "\n 1: Agregar a la lista \n";
    cout << "\n 2: Mostrar lista \n";
    cout << "\n 3: Eliminar despues \n";
    cout << "\n 4: Verificar si la lista es vacia \n";
    cout << "\n 5: Longitud de la lista \n";
    cout << "\n 6: Buscar un elemento \n";
    cout << "\n 7: Eliminar Lista \n";
    cout << "\n 8: Eliminar elemento \n";
    cout << "\n 9: Salir del programa \n";

}

int leerOpcion() {
    int opcion;
    cout << "Selecciona una opcion: "; cin >> opcion;
    return opcion;

}


bool ejecutarOpcion(int opcion, Lista* lista) {
    bool salir = false;
    int numero;
    string info;
    switch (opcion) {
    case 1:
        cout << "***Agregar al inicio***\n";
        cout << "Ingrese un numero: "; cin >> numero;
        lista->insertar(numero);
        break;
    case 2:
        cout << "***Mostrar lista***\n";
        lista->mostrar();
        break;
    case 3:
        cout << "***Eliminar despues***\n";
        cout << "Ingrese la posicion del numero que desea eliminar: "; cin >> numero;
        lista->eliminar(numero);
        cout << "Elemento eliminado" << endl;
        break;

    case 9:
        salir = true;

    default:
        cout << "Fin del programa";
        break;
    }

    return salir;
}


int main()
{
    Lista* lista = new Lista();
    bool salir = false;
    do
    {
        imprimirMenu();
        int opcion = leerOpcion();
        salir = ejecutarOpcion(opcion, lista);

    } while (!salir);

    return 0;
}