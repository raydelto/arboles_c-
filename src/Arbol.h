/*
 * Arbol.h
 *
 *  Created on: Jul 16, 2017
 *      Author: raydeltohernandez
 */

#ifndef ARBOL_H_
#define ARBOL_H_
#include "Nodo.h"
class Arbol {
public:
	Arbol(Nodo* raiz);
	virtual ~Arbol();
	void recorrer(Nodo* nodo);
private:
	Nodo* _raiz;
};

#endif /* ARBOL_H_ */
