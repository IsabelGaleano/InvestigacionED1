#pragma once
#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include <string>
class Lista
{
public:
	Lista();
	void setCabeza(Nodo* cabeza);
	Nodo* getCabeza();
	bool esVacia();
	void insertar(int x);
	void mostrar();
	void eliminar(int x);
	int size = 0;
private:
	Nodo* cabeza;

};

#endif // LISTA_H
