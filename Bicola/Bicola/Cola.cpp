#include "Cola.h"
#include <iostream>
using namespace std;


Cola::Cola(void) {
	longitud = 0;
	frente = nullptr;
	final = nullptr;
}

bool Cola::vacia() {
	if (frente == nullptr and final == nullptr)
	{
		return true;
	}

	return false;
}
Nodo* Cola::getFrente() {
	return frente;
}

int Cola::getLongitud(void) {
	return longitud;
}

void Cola::pushElem(int e) {
	Nodo* nuevo = new Nodo();
	nuevo->setInfo(e);
	if (this->vacia())
	{
		frente = nuevo;
		final = nuevo;
	}
	else
	{
		final->setNodo(nuevo);
		final = nuevo;
	}

	longitud++;
}

bool Cola::eliminarElem(void) {
	Nodo* aux;
	if (!(this->vacia()))
	{
		aux = this->frente;
		this->frente = this->frente->getNodo();
		delete(aux);
		return true;
		longitud--;
	}
}

void Cola::mostrar() {
	Nodo* aux = frente;

	while (aux->getNodo() != nullptr) {
		cout << aux->getInfo() << "\t";
		aux = aux->getNodo();
	}
}


void Cola::encolar(int info, int pos) {
	Nodo* aux = new Nodo();
	aux->setInfo(info);

	if (pos == 1)
	{
		if (frente == NULL)
		{
			aux->setNodo(frente);
			frente = aux;
			final = aux;
		}
		else
		{
			aux->setNodo(frente);
			frente = aux;
		}
	}
	else
	{
		if (final == NULL)
		{
			aux->setNodo(final);
			frente = aux;
			final = aux;
		}
		else
		{
			aux->setNodo(final->getNodo());
			(final)->setNodo(aux);
		}
	}
}




int Cola::desencolar(int pos) {
	int res;
	Nodo* aux = frente;

	if (pos == 1)
	{
		res = (frente)->getInfo();
		frente = aux->getNodo();
		delete(aux);
	}
	else
	{
		res = (final)->getInfo();

		while (aux->getNodo() != final)
			aux = aux->getNodo();

		aux->setNodo(final->getNodo());
		delete(final);
		final = aux;
	}

	return res;
}

void Cola::muestraCola()
{
	Nodo* aux = frente;

	while (aux != NULL)
	{
		cout << "   " << aux->getInfo();
		aux = aux->getNodo();
	}
}