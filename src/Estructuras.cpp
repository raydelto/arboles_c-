//============================================================================
// Name        : Estructuras.cpp
// Author      : Raydelto
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Arbol.h"
using namespace std;

int main() {
	Nodo* presidente = new Nodo("Presidente");
	Nodo* vp1 = new Nodo("vp1");
	Nodo* vp2 = new Nodo("vp2");
	Nodo* director1 = new Nodo("director1");
	Nodo* director2 = new Nodo("director2");
	presidente -> agregarHijo(vp1);
	presidente -> agregarHijo(vp2);
	vp1 -> agregarHijo(director1);
	vp2 -> agregarHijo(director2);
	Arbol* arbol = new Arbol(presidente);
	arbol -> recorrer(presidente);
	return 0;
}
