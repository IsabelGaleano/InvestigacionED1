#pragma once
#include "Nodo.h"
class Bicola
{
private:
	
public:
	int nodos;
	Nodo* primero;
	Nodo* ultimo;

	Bicola(void);

	void insertarIzq(int info);
	void insertarDer(int info);
	void eliminarIzq(int info);
	void eliminarDer(int info);
	void borrarBicola();
};

