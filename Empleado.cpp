//Sofía Solis Arenas A01746209
// Daniel Vazquez Reyes A01746072
#include "Empleado.h"
#include <iostream>
#include <vector>
#include <string>

int generarId(vector<Empleado> arregloEmpleados) {
	int index = arregloEmpleados.size() - 1;
	if (index >= 0) {
		return arregloEmpleados[index].getId() + 1;
	}
	return 1;
}

Empleado Empleado::getEmpleado(vector<Empleado> arregloEmpleados, int id) {
	for (int i = 0; i < arregloEmpleados.size(); i++) {
		if (arregloEmpleados[i].getId() == id) {
			return arregloEmpleados[i];
		}
	}
	return Empleado();
}


void Empleado::agregar(vector<Empleado>& arregloEmpleados) {
	system("cls");
	int i = getchar();

	cout << "AGREGANDO EMPLEADO" << endl;
	Empleado empleado = Empleado();

	empleado.setId(generarId(arregloEmpleados));
	cout << "Nombre: ";
	getline(cin, empleado.nombre);
	cout << "Apellido: ";
	getline(cin, empleado.apellido);

	arregloEmpleados.push_back(empleado);
	cout << endl << "Mensaje: Empleado Agregado" << endl << endl;
}

void Empleado::buscar(vector<Empleado> arregloEmpleados) {
	system("cls");
	cout << "BUSCANDO EMPLEADO" << endl;
	int id;
	cout << " Numero empleado: ";
	cin >> id;
	Empleado empleado = getEmpleado(arregloEmpleados, id);
	if (empleado.id > 0) {
		cout << endl << "Empleado num: " << empleado.id
    << endl << "Nombre: " << empleado.nombre 
			<< endl << "Apellido: " << empleado.apellido ;
	}
	else {
		cout << endl << "Mensaje: El Empleado no existe" << endl << endl;
	}
}

void Empleado::listar(vector<Empleado> arregloEmpleados) {
	system("cls");
	cout << "LISTA DE EMPLEADOS" << endl;
	cout << "NUM\tNombre\tApellido" << endl;
	for (int i = 0; i < arregloEmpleados.size(); i++) {
		cout << arregloEmpleados[i].id << "\t" << arregloEmpleados[i].nombre << "\t" << arregloEmpleados[i].apellido << endl;
	}
}
