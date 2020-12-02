
// Daniel Vazquez Reyes A01746072
#include "Medicamento.h"
#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#pragma once
class Inventario
{
private:
	int id;
	int cantidad;
	Medicamento medicamento;
public:
	Inventario() {}
	int getId() { return id; }
	int getCantidad() { return cantidad; }
	Medicamento getMedicamento() { return medicamento; }

	void setId(int vid) { id = vid; }
	void setNombre(int vcantidad) { cantidad = vcantidad; }
	void setMedicamento(Medicamento vmedicamento) { medicamento = vmedicamento; }

	void agregar(vector<Inventario>&, vector<Medicamento>);
	int getInventario(vector<Inventario> arregloInventarios, int id);
	void buscar(vector<Inventario>);
	void listar(vector<Inventario>);
};

