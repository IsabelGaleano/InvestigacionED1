#pragma once
#include "Nodo.h"
class ListaCircularSimple
{
private:
	Nodo* actual;
	Nodo* pNodo;
public:
	ListaCircularSimple();
	~ListaCircularSimple();
	Nodo* getActual();
	void setActual(Nodo* actual);
	/*Nodo* getUltimo();
	void setUltimo(Nodo* ultimo);*/
	void insertarNodo(int v);
	void desplegarLista();
	void borrar(int v);
	void siguiente();
	/*bool Actual() { return actual != NULL; }
	int ValorActual() { return actual->valor; }*/
};

