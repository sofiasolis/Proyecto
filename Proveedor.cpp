//Sofía Solis Arenas A01746209
// Daniel Vazquez Reyes A01746072
#include "Proveedor.h"
#include <iostream>
#include <vector>
#include <string>

int generarId(vector<Proveedor> arregloProveedors) {
	int index = arregloProveedors.size() - 1;
	if (index >= 0) {
		return arregloProveedors[index].getId() + 1;
	}
	return 1;
}

Proveedor Proveedor::buscar(vector<Proveedor> arregloProveedors, int id) {
	for (int i = 0; i < arregloProveedors.size(); i++) {
		if (arregloProveedors[i].getId() == id) {
			return arregloProveedors[i];
		}
	}
	return Proveedor();
}


void Proveedor::agregar(vector<Proveedor>& arregloProveedors) {
	system("cls");
	int i = getchar();

	cout << "AGREGANDO PROVEEDOR" << endl;
	Proveedor proveedor = Proveedor();

	proveedor.id = generarId(arregloProveedors);
	cout << "Nombre: ";
	getline(cin, proveedor.nombre);
	cout << "Telefono: ";
	getline(cin, proveedor.telefono);
	arregloProveedors.push_back(proveedor);
	cout << endl << "Mensaje: Proveedor Agregado" << endl << endl;
}

void Proveedor::listar(vector<Proveedor> arregloProveedors) {
	system("cls");
	cout << "LISTA DE PROVEEDORES" << endl;
	cout << "Num\tNombre\t\tTelefono" << endl;
	for (int i = 0; i < arregloProveedors.size(); i++) {
		cout << arregloProveedors[i].id << "\t"
			<< arregloProveedors[i].nombre << "\t"
			<< arregloProveedors[i].telefono << "\t"
			<< endl;
	}
}


