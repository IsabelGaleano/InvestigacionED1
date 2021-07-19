#ifndef LISTA_H
#define LISTA_H

#include <iostream>
using namespace std;

#include "NodoLCDE.h"

class ListaCDE {
private:
	NodoLCDE* first, *last, * sig, * prev;
public:
	ListaCDE();
	void insertFront(int);
	void insertEnd(int);
	string mostrar();
	void deleteItem(int);
	void deleteList();
	bool searchItem(int);
	bool vacia();

	NodoLCDE* getFirst();
	void setFirst(NodoLCDE* first);

	NodoLCDE* getLast();
	void setLast(NodoLCDE* last);

	NodoLCDE* getSig();
	void setSig(NodoLCDE* sig);

	NodoLCDE* getPrev();
	void setPrev(NodoLCDE* prev);



	int longitud;
};

#endif
