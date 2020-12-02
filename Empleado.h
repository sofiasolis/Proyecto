//Sofía Solis Arenas A01746209
// Daniel Vazquez Reyes A01746072
#pragma once
#include <iostream>
#include <string>
#include <string.h>
#include <vector>


using namespace std;
class Empleado
{
private:
	int id;
	string nombre;
	string apellido;
public:	
	Empleado() {}
	int getId() { return id; }
	string getNombre() { return nombre; }
	string getApellido() { return apellido; }

	void setId(int vid) { id = vid; }
	void setNombre(string vnombre) { nombre = vnombre; }
	void setApellido(string vapellido) { apellido = vapellido; }

	void agregar(vector<Empleado>&);
	Empleado getEmpleado(vector<Empleado>, int);
	void buscar(vector<Empleado> );
	void listar(vector<Empleado> );
};

