#pragma once
#ifndef NODO_H
#define NODO_H
class Nodo
{

public:
	Nodo();
	Nodo(int dato);
	void setDato(int dato);
	int getDato();
	void setSiguiente(Nodo* siguiente);
	Nodo* getSiguiente();
	void setAnterior(Nodo* anterior);
	Nodo* getAnterior();
private:
	int dato;
	Nodo* siguiente;
	Nodo* anterior;
	
};

#endif // NODO_H

