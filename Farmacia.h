//Sofía Solis Arenas A01746209
// Daniel Vazquez Reyes A01746072

#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include "TipoMedicamento.h"
#include "Proveedor.h"
#pragma once

using namespace std;

class Medicamento
{
private:
	int id;
	string nombre;	
	float precio;
	string receta;
	TipoMedicamento tipo;
	Proveedor proveedor;

public:
	Medicamento() {}
	int getId() { return id; }
	string getNombre() { return nombre; }	
	float getPrecio() { return precio; }
	string getReceta() { return receta; }
	TipoMedicamento getTipo() { return tipo; }
	Proveedor getProveedor() { return proveedor; }

	void setId(int vid) { id = vid; }
	void setNombre(string vnombre) { nombre = vnombre; }
	void setPrecio(float vprecio) { precio = vprecio; }
	void setReceta(string vreceta) { receta = vreceta; }
	void setTipo(TipoMedicamento vtipoMedicamento) { tipo = vtipoMedicamento; }
	void setProveedor(Proveedor vproveedor) { proveedor = vproveedor; }

	void agregar(vector<Medicamento>&, vector<TipoMedicamento> , vector<Proveedor> );
	Medicamento getMedicamento(vector<Medicamento> arregloMedicamentos, int id);
	void buscar(vector<Medicamento>);
	void listar(vector<Medicamento>);
};
