#pragma once
class Nodo
{
private:
	int info;
	Nodo* siguiente;
	
public:
	Nodo();
	Nodo(int v, Nodo* sig = nullptr);
	int getInfo();
	void setInfo(int x);
	Nodo* getSiguiente();
	void setSiguiente(Nodo* siguiente);
};

