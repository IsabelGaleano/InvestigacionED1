#include <iostream>
#include <string>
#include<conio.h>
#include<stdlib.h> // funciona new y delete
#include<iomanip>
using namespace std;

#include "ListaCDE.h"

ListaCDE::ListaCDE() {
	setFirst(NULL);
	setLast(NULL);
}

void ListaCDE::insertEnd(int x) {
    if (this->first == NULL)
    {
        NodoLCDE* temp = new NodoLCDE();
        temp->setInfo(x); 
        this->first = temp;
        this->last = temp;
        temp->setPrev(this->last);
        temp->setSig(first);
    }
    else
    {
        NodoLCDE* temp = new NodoLCDE();

        temp->setInfo(x);
        temp->setSig(first);
        this->first->setPrev(temp);
        temp->setPrev(this->last);
        this->last->setSig(temp);
        this->last = temp;
    }
    longitud++;
}

void ListaCDE::insertFront(int x) {
    if (this->first == NULL)
    {
        NodoLCDE* temp = new NodoLCDE();
        temp->setInfo(x);
        this->first = temp;
        this->last = temp;
        temp->setPrev(this->last);
        temp->setSig(first);
    }
    else {
        NodoLCDE* temp = new NodoLCDE();
        temp->setInfo(x);
        temp->setPrev(this->last);
        temp->setSig(this->first);
        this->last->setSig(temp);
        this->first->setPrev(temp);
        this->first = temp;
    }
}

string ListaCDE::mostrar() {
    string result;
    NodoLCDE* first = getFirst();
    NodoLCDE* last = getLast()->getSig();
    while (first != NULL)
    {
        result += to_string(first->getInfo()) + "\n";
        first = first->getSig();

        if (first == last) {
            first = NULL;
        }
    }
    return result;
}

void ListaCDE::deleteItem(int x) {
    NodoLCDE* aux = getFirst();
    while (first != NULL)
    {
        if (aux->getInfo() == x) {
            NodoLCDE* ant = aux->getPrev();
            NodoLCDE* desp = aux->getSig();
            ant->setSig(desp);
            desp->setPrev(ant);
            if (aux == this->first) {
                this->first = desp;
            }
            if (aux == this->last) {
                this->last = ant;
            }
            delete aux;
            break;
        } 
        aux = aux->getSig();
    }
}

void ListaCDE::deleteList() {
    delete this->first;
    this->longitud = 0;
    this->first = NULL;
}

bool ListaCDE::searchItem(int x) {
    bool answer = false;
    NodoLCDE* first = getFirst();
    NodoLCDE* last = getLast()->getSig();
    while (first != NULL)
    {
        if (first->getInfo() == x) {
            answer = true;
        } 
        first = first->getSig();

        if (first == last) {
            first = NULL;
        }
    }
    return answer;
}

bool ListaCDE::vacia() {
    if (getFirst() == NULL) {
        return true;
    }
    return false;
}


NodoLCDE* ListaCDE::getFirst() {
	return this->first;
}

void ListaCDE::setFirst(NodoLCDE* _first) {
	this->first = _first;
}

NodoLCDE* ListaCDE::getLast() {
	return this->last;
}

void ListaCDE::setLast(NodoLCDE* _last) {
	this->last = _last;
}

NodoLCDE* ListaCDE::getSig() {
	return this->sig;
}

void ListaCDE::setSig(NodoLCDE* _sig) {
	this->sig = _sig;
}

NodoLCDE* ListaCDE::getPrev() {
	return this->prev;
}

void ListaCDE::setPrev(NodoLCDE* _prev) {
	this->prev = _prev;
}