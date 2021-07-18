#include "Bicola.h"
#include <iostream>
using namespace std;


Bicola::Bicola(void) {
	nodos = 0;
	primero = NULL;
	ultimo = NULL;
}



void Bicola::insertarIzq(int dato) {
	Nodo* temp = new Nodo();
	temp->setInfo(dato);
	// Si la Bicola no tiene Nodos se inserta sin mas
	if (primero == NULL)
	{
		primero = temp; 
		ultimo = temp;
	}
	else
	{
		temp->setAnterior(NULL);

		temp->setNodo(primero);
		primero = temp;

	}
	nodos += 1;

}

void Bicola::insertarDer(int info) {
	Nodo* aux = new Nodo();
	aux->setInfo(info);
	if (ultimo == NULL)
	{
		aux->setNodo(ultimo);
		primero = aux;
		ultimo = aux;
	}
	else
	{
		aux->setAnterior(ultimo);
		aux->setNodo(NULL);
		ultimo->setNodo(aux);
		(ultimo)->setNodo(aux);
	}
}


// Libera la memoria RAM usada por la Bicola:
void Bicola::borrarBicola()
{
	/*
	Precondición:
	Se recibe un doble puntero de tipo struct BICOLA a una Bicola.
	Poscondición:
	Se libera la RAM usada por los Nodos contenidos en la Bicola.
	*/


	Nodo* actual, * siguiente;
	actual = primero;

	while (actual != NULL)
	{
		siguiente = actual->getNodo();
		free(actual);
		actual = siguiente;
	};
};
