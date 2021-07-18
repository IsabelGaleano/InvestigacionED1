#include "Nodo.h"
Nodo::Nodo() {

}

Nodo::Nodo(int info, Nodo* siguiente) {
	this->info = info;
	this->siguiente = siguiente;
}

int Nodo::getInfo() {
	return info;
}

void Nodo::setInfo(int info) {
	this->info = info;
}

Nodo* Nodo::getSiguiente() {
	return siguiente;
}

void Nodo::setSiguiente(Nodo* siguiente) {
	this->siguiente = siguiente;
}
