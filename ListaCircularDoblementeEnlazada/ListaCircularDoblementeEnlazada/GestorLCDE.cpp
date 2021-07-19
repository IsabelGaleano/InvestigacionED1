#include <iostream>
#include <string>
#include<conio.h>
#include<stdlib.h> // funciona new y delete
#include<iomanip>
using namespace std;


#include "GestorLCDE.h"

GestorLCDE::GestorLCDE() {}

void GestorLCDE::insertFront(int _val) {
	this->lista->insertFront(_val);
}

void GestorLCDE::insertEnd(int _val) {
	this->lista->insertEnd(_val);
}

string GestorLCDE::mostrar() {
	return this->lista->mostrar();
}

void GestorLCDE::deleteItem(int x) {
	return this->lista->deleteItem(x);
}

void GestorLCDE::deleteList() {
	this->lista->deleteList();
}

bool GestorLCDE::searchItem(int x) {
	return this->lista->searchItem(x);
}

bool GestorLCDE::vacia() {
	return this->lista->vacia();
}