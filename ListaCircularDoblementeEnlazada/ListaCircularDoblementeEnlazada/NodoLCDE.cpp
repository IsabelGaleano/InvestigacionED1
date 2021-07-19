#include <iostream>
#include <string>
#include<conio.h>
#include<stdlib.h> // funciona new y delete
#include<iomanip>
using namespace std;

#include "NodoLCDE.h"

NodoLCDE::NodoLCDE() {
	setInfo(0);
	setSig(NULL);
	setPrev(NULL);
}

int NodoLCDE::getInfo(void) {
	return info;
}

void NodoLCDE::setInfo(int x) {
	info = x;
}

NodoLCDE* NodoLCDE::getSig() {
	return this->sig;
}

void NodoLCDE::setSig(NodoLCDE* _sig) {
	this->sig = _sig;
}

NodoLCDE* NodoLCDE::getPrev() {
	return this->prev;
}

void NodoLCDE::setPrev(NodoLCDE* _prev) {
	this->prev = _prev;
}