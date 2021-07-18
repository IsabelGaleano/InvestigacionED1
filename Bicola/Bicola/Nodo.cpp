#include "Nodo.h"
#include <iostream>

Nodo::Nodo() {
	nodo = nullptr;
}


int Nodo::getInfo() { return info; }

void Nodo::setInfo(int pinfo) { info = pinfo; }

Nodo* Nodo::getNodo() { return nodo; }

void Nodo::setNodo(Nodo* n) { nodo = n; }

Nodo* Nodo::getAnterior() { return nodo; }

void Nodo::setAnterior(Nodo* n) { nodo = n; }

void Nodo::eliminarTodo() {
	if (nodo)
	{
		nodo->eliminarTodo();
		delete this;
	}
}