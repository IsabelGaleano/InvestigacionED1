#ifndef NODOLCDE_H
#define NODOLCDE_H

class NodoLCDE {
private:
	int info;
	NodoLCDE* sig, *prev;
public:
	NodoLCDE();
	int getInfo();
	void setInfo(int x);
	
	NodoLCDE* getSig();
	void setSig(NodoLCDE* sig);

	NodoLCDE* getPrev();
	void setPrev(NodoLCDE* prev);

};
#endif