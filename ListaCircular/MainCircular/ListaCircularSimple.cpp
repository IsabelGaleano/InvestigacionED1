#include "ListaCircularSimple.h"
#include "Nodo.h"
#include <iostream>
using namespace std;

ListaCircularSimple::ListaCircularSimple() {
}

ListaCircularSimple::~ListaCircularSimple() {
	//pNodo;

	// Mientras la lista tenga más de un nodo
	while (actual->getSiguiente() != actual) {
		// Borrar el nodo siguiente al apuntado por lista
		pNodo = actual->getSiguiente();
		actual->setSiguiente(pNodo->getSiguiente());
		delete pNodo;
	}
	// Y borrar el último nodo
	delete actual;
	actual = NULL;
}

Nodo* ListaCircularSimple::getActual() {
	return actual;
}

void ListaCircularSimple::setActual(Nodo* actual) {
	this->actual = actual;
}

void ListaCircularSimple::insertarNodo(int v) {
	Nodo* nuevo = new Nodo(v);
	// Si la lista está vacía, la lista será el nuevo nodo
   // Si no lo está, insertamos el nuevo nodo a continuación del apuntado
   // por lista
	if (actual == nullptr) {
		actual = nuevo;
	}
	else
		nuevo->setSiguiente(actual->getSiguiente());
	// En cualquier caso, cerramos la lista circular
	actual->setSiguiente(nuevo);
}

void ListaCircularSimple::desplegarLista() {
	Nodo* elNodo = new Nodo();
	elNodo = getActual();

	do {
		cout << elNodo->getInfo() << "-> ";
		elNodo = elNodo->getSiguiente();
	} while (elNodo != getActual());

	cout << endl;
}

void ListaCircularSimple::siguiente() {
	if (actual) {
		actual = actual->getSiguiente();
	}
}

void ListaCircularSimple::borrar(int v) {
	Nodo* unNodo = new Nodo();
	unNodo = getActual();

	// Hacer que lista apunte al nodo anterior al de valor v
	do {
		if (actual->getSiguiente()->getInfo() != v) actual = actual->getSiguiente();
	} while (actual->getSiguiente()->getInfo() != v && actual != unNodo);
	// Si existe un nodo con el valor v:
	if (actual->getSiguiente()->getInfo() == v) {
		// Y si la lista sólo tiene un nodo
		if (actual == actual->getSiguiente()) {
			// Borrar toda la lista
			delete actual;
			actual = NULL;
		}
		else {
			// Si la lista tiene más de un nodo, borrar el nodo  de valor v
			unNodo = actual->getSiguiente();
			actual->setSiguiente(unNodo->getSiguiente());
			delete unNodo;
		}
	}
}