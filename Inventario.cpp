
// Daniel Vazquez Reyes A01746072
#include "Inventario.h"
#include <iostream>
#include <vector>
#include <string>

int generarId(vector<Inventario> arregloInventarios) {
	int index = arregloInventarios.size() - 1;
	if (index >= 0) {
		return arregloInventarios[index].getId() + 1;
	}
	return 1;
}

int Inventario::getInventario(vector<Inventario> arregloInventarios, int id) {
	for (int i = 0; i < arregloInventarios.size(); i++) {
		if (arregloInventarios[i].getMedicamento().getId() == id) {
			return i;
		}
	}
	return -1;
}


void Inventario::agregar(vector<Inventario>& arregloInventarios, vector<Medicamento> arregloMedicamentos) {
	system("cls");

	cout << "AGREGANDO INVENTARIO" << endl;
	Inventario inventario = Inventario();
	Medicamento medicamento = Medicamento();
	int idMedicamento;

	inventario.id = generarId(arregloInventarios);
	cout << "Num Medicamento: ";
	cin >> idMedicamento;
	inventario.medicamento = medicamento.getMedicamento(arregloMedicamentos, idMedicamento);
	if (inventario.medicamento.getId() > 0) {
		cout << "Cantidad: ";
		cin >> inventario.cantidad;

		int index = getInventario(arregloInventarios, idMedicamento);
		if (index < 0) {
			arregloInventarios.push_back(inventario);
		}
		else {
			arregloInventarios[index] = inventario;
		}
		
		cout << endl << "Mensaje: Inventario Agregado" << endl << endl;
	}
	else {
		cout << endl << "Mensaje: El Medicamento no existe" << endl << endl;
	}
	

	
}

void Inventario::buscar(vector<Inventario> arregloInventarios) {
	system("cls");
	cout << "BUSCANDO INVENTARIO DE MEDICAMENTO" << endl;
	int idMedicamento;
	cout << "Num Medicamento: ";
	cin >> idMedicamento;
	int index = getInventario(arregloInventarios, idMedicamento);
	if (index >= 0) {
		Inventario inventario = arregloInventarios[index];
		cout << endl << "Inventario num: " << inventario.id
			<< endl << "Medicamento: " << inventario.medicamento.getNombre()
			<< endl << "Cantidad: " << inventario.cantidad;
	}
	else {
		cout << endl << "Mensaje: El Medicamento no existe en el Inventario" << endl << endl;
	}
}

void Inventario::listar(vector<Inventario> arregloInventarios) {
	system("cls");
	cout << "LISTA DEL INVENTARIO DE MEDICAMENTOS" << endl;
	cout << "Num\tMedicamento\tCantidad" << endl;
	for (int i = 0; i < arregloInventarios.size(); i++) {
		cout << arregloInventarios[i].id << "\t"
			<< arregloInventarios[i].medicamento.getNombre() << "\t"
			<< arregloInventarios[i].cantidad << "\t"
			<< endl;
	}
}

