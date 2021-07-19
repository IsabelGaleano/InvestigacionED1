#ifndef COLA_H
#define COLA_H
#include "Nodo.h"
class Cola
{
public:
	Cola(void);
	int getLongitud(void);
	//void setFrente(Nodo* frente);
	Nodo* getFrente();
	//void setFinal(Nodo* final);
	//Nodo* getFinal();
	void pushElem(int e);
	bool eliminarElem(void);
	void mostrar();
	bool vacia();

	//BICOLA
	
	void encolar(int info, int pos);
	int desencolar(int pos);
	void muestraCola();

private:
	int longitud;
	Nodo* frente;
	Nodo* final;
};

#endif
