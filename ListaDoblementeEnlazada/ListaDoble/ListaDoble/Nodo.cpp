#include "Nodo.h"

Nodo::Nodo() {

}

Nodo::Nodo(int _dato) {
	dato = _dato;
}

void Nodo::setDato(int _dato) {
	dato = _dato;
}

int Nodo::getDato() {
	return dato;
}

void Nodo::setSiguiente(Nodo* _siguiente) {
	siguiente = _siguiente;
}

void Nodo::setAnterior(Nodo* _anterior) {
	this->anterior = _anterior;
}

Nodo* Nodo::getAnterior() {
	return anterior;
}
 

Nodo* Nodo::getSiguiente() {
	return siguiente;
}


