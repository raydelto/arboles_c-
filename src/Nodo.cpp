/*
 * Nodo.cpp
 *
 *  Created on: Jul 16, 2017
 *      Author: raydeltohernandez
 */

#include "Nodo.h"

Nodo::Nodo(std::string nombre) {
	_siguiente = NULL;
	_primer = NULL;
	_ultimo = NULL;
	_nombre = nombre;
	_profundidad = 0;
}

Nodo::~Nodo() {

}

void Nodo::agregarHijo(Nodo* hijo) {
	hijo -> _profundidad = _profundidad + 1;
	if(_ultimo == NULL){ // Si la lista está vacía
		_primer = hijo;
		_ultimo = hijo;
	}else{ // Si la lista no está vacía
		_ultimo -> _siguiente = hijo;
		_ultimo = hijo;
	}
}
