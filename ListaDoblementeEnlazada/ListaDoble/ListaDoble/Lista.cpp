#include "Lista.h"
#include <iostream>
using namespace std;
Lista::Lista() {
	cabeza = nullptr;
}

bool Lista::esVacia() {
	if (cabeza == nullptr)
	{
		return true;
	}

	return false;
}

void Lista::insertar(int num) {
	
	Nodo* nuevoNodo = new Nodo(num);

	if (cabeza == nullptr)
	{
		cabeza = nuevoNodo;
	} 
	else
	{
		nuevoNodo->setSiguiente(cabeza);
		cabeza->setAnterior(nuevoNodo);
		cabeza = nuevoNodo;
		size++;
	}
}

void Lista::mostrar() {
	Nodo* aux = this->cabeza;
	if (cabeza == nullptr)
	{
		cout << "La lista esta vacia" << endl;
	}
	else
	{
		while (aux->getSiguiente() != nullptr)
		{
			cout << aux->getDato() << endl;
			aux = aux->getSiguiente();
		}
	}
}

void Lista::eliminar(int pos) {
	if (pos <= size)
	{
		Nodo* aux;
		if (pos == 1)
		{
			aux = cabeza;
			cabeza = cabeza->getSiguiente();
			if (cabeza != nullptr)
			{
				cabeza->setAnterior(nullptr);
			}
		}
		else
		{
			Nodo* aux2;
			aux2 = cabeza;
			for (int i = 1; i <= pos - 2; i++)
			{
				aux2 = aux2->getSiguiente();
			}
			Nodo* aux3 = aux2->getSiguiente();
			aux = aux3;
			aux2->setSiguiente(aux3->getSiguiente());
			Nodo* siguiente = aux2->getSiguiente();
			if (siguiente != NULL)
			{
				siguiente->setAnterior(aux2);
			}


		}

		delete aux;
	}
}