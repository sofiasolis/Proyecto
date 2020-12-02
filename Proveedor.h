//Sofía Solis Arenas A01746209
// Daniel Vazquez Reyes A01746072
#include <iostream>
#include <vector>
#include <string>
#pragma once

using namespace std;
class Proveedor
{
private:
	int id;
	string nombre;
	string telefono;
public:
	Proveedor() {}
	int getId() { return id; }
	string getNombre() { return nombre; }
	string getTelefono() { return telefono; }

	void setId(int vid) { id = vid; }
	void setNombre(string vnombre) { nombre = vnombre; }
	void setTelefono(string vapellido) { telefono = vapellido; }

	void agregar(vector<Proveedor>&);
	Proveedor buscar(vector<Proveedor>, int);
	void listar(vector<Proveedor>);
};
