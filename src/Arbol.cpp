/*
 * Arbol.cpp
 *
 *  Created on: Jul 16, 2017
 *      Author: raydeltohernandez
 */

#include "Arbol.h"
#include <iostream>

using namespace std;

Arbol::Arbol(Nodo* raiz) {
	_raiz = raiz;
}

Arbol::~Arbol() {
	// TODO Auto-generated destructor stub
}

void Arbol::recorrer(Nodo* nodo) {
	for(int i = 0 ; i < nodo -> getProfundidad() ; i++){
		cout << "\t";
	}
	cout << nodo -> getNombre() << endl;
	Nodo* i = nodo -> getPrimer();
	while(i != NULL){
		recorrer(i);
		i = i -> getSiguiente();
	}
}
