/*
 * Nodo.h
 *
 *  Created on: Jul 16, 2017
 *      Author: raydeltohernandez
 */

#ifndef NODO_H_
#define NODO_H_
#include <cstdlib>
#include <string>

class Nodo {
public:
	Nodo(std::string nombre);
	virtual ~Nodo();
	void agregarHijo(Nodo* hijo);
	Nodo* getPrimer() { return _primer; }
	std::string getNombre()  { return _nombre; }
	void setNombre(std::string nombre) {_nombre = nombre; }
	Nodo* getSiguiente() { return _siguiente;	}
	int getProfundidad() { return _profundidad;	}

private:
	Nodo* _siguiente;
	Nodo* _ultimo;
	Nodo* _primer;
	std::string _nombre;
	int _profundidad;
};

#endif /* NODO_H_ */


