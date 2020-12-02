//Sofía Solis Arenas A01746209

#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#pragma once

using namespace std;

class TipoMedicamento
{
private:
	int id;
	string tipo;
public: 
	TipoMedicamento() {}
	int getId() { return id; }
	string getTipo() { return tipo; }

	void setId(int vid) { id = vid; }
	void setTipo(string vtipo) { tipo = vtipo; }

	void agregar(vector<TipoMedicamento>&);
	TipoMedicamento buscar(vector<TipoMedicamento>, int);
	void listar(vector<TipoMedicamento>);
};