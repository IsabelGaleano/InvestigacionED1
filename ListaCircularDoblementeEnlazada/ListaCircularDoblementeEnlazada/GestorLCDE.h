#ifndef GESTOR_H
#define GESTOR_H

#include <iostream>
using namespace std;

#include "ListaCDE.h"
#include "NodoLCDE.h"

class GestorLCDE {
private:
	ListaCDE* lista = new ListaCDE();
public:
	GestorLCDE();
	void insertFront(int);
	void insertEnd(int);
	string mostrar();
	void deleteItem(int);
	void deleteList();
	bool searchItem(int);
	bool vacia();

};

#endif
