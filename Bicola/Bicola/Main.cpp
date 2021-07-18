// Bicola.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Cola.h"
#include "Bicola.h"
using namespace std;

//Daniel
//FALTA ARREGLAR ERRORES
/*ERRORES:
Cuando quedan dos elementos en la cola, tira error al eliminar por la derecha
Cuando se eliminan todos los elementos por un lado, no se puede volver a añadir nada por ese lado
*/

void menuUI()
{
    cout << "\nIngrese una opción para continuar: " << endl;
    cout << " 1. Insertar(encolar)" << endl;
    //cout << " 1. Insertar derecha (encolar)" << endl;
    //cout << " 3. Eliminar izquierda(desencolar)" << endl;
    cout << " 2. Eliminar(desencolar)" << endl;
    cout << " 3. Mostrar cola" << endl;
    cout << " 4. Salir" << endl;
}

void inicializarBicola(Bicola* bicola)
{
    bicola->nodos = 0;
    bicola->primero = NULL;
    bicola->ultimo = NULL;
};


void eliminarIzq(Bicola* bicola) {
    Nodo* aBorrar;


    // Si la Bicola esta vacía...
    if (bicola->primero == NULL)
    {
        printf("No puede eliminar Nodos de una Bicola vacía.");
    }
    // Si solo hay un Nodo en la Bicola, al liberar la RAM del Nodo se inicializa la Bicola a los valores por defecto:
    else if (bicola->nodos == 1)
    {
        free(bicola);
        inicializarBicola(bicola);
    }
    // En caso contrario se elimina solo el primer Nodo:
    else if (bicola->nodos > 1)
    {
        aBorrar = bicola->primero;

        bicola->primero->getNodo()->setAnterior(NULL);
        bicola->primero = bicola->primero->getNodo();
        free(aBorrar);

        bicola->nodos -= 1;
    }

}

void eliminarDer(Bicola* bicola)
{


    Nodo* aBorrar;


    // Si la Bicola esta vacia...
    if (bicola->primero == NULL)
    {
        printf("No puede eliminar Nodos de una Bicola vacía.");
    }
    // Si solo hay un Nodo en la Bicola, al liberar la RAM del Nodo se inicializa la Bicola a los valores por defecto:
    else if (bicola->nodos == 1)
    {
        free(bicola);
        inicializarBicola(bicola);
    }
    else if (bicola->nodos > 1)
    {
        aBorrar = bicola->ultimo;

        bicola->ultimo->getAnterior()->setNodo(NULL);
        bicola->ultimo = bicola->ultimo->getAnterior();
        free(aBorrar);

        bicola->nodos -= 1;
    };

};


int main()
{
    Cola* cola = new Cola();
    //Bicola* bicola = new Bicola();

    int dato;     // caracter a encolar
    int res;    // caracter que devuelve la funcion pop (desencolar)
    int opc;     // opcion del menu
    int pos;    // posicion de isertar o eliminar (inicio o fin)

    do
    {
        menuUI();  
        cin >> opc;

        switch (opc)
        {
        case 1:
            
            cout << "\nIngrese un numero : ";
            cin >> dato;

            cout << "\n1. Insertar al inicio " << endl;
            cout << "2. Insertar al final  " << endl;
            cin >> pos;

            cola->encolar(dato, pos);

            cout << "\n\tNumero '" << dato << "' encolado...\n\n";
            
            break;


        case 2:
            
            
            cout << "\n1. Eliminar al inicio " << endl;
            cout << "2. Eliminar al final  " << endl;
            cin >> pos;

            res = cola->desencolar(pos);

            cout << "\nNumero '" << res << "' desencolado...\n\n";
            
            break;

        case 3:
            cout << "\nCOLA\n";

            if (cola->getFrente() != NULL)
                cola->muestraCola();
            else
                cout << "\nCola vacia...!" << endl;

            break;

        case 4:
            break;
        }
        
    } while (opc != 4);
}



