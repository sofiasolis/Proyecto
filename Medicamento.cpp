//Sofía Solis Arenas A01746209
// Daniel Vazquez Reyes A01746072
#include "Medicamento.h"
#include <iostream>
#include <vector>
#include <string>

int generarId(vector<Medicamento> arregloMedicamentos) {
	int index = arregloMedicamentos.size() - 1;
	if (index >= 0) {
		return arregloMedicamentos[index].getId() + 1;
	}
	return 1;
}

Medicamento Medicamento::getMedicamento(vector<Medicamento> arregloMedicamentos, int id) {
	for (int i = 0; i < arregloMedicamentos.size(); i++) {
		if (arregloMedicamentos[i].getId() == id) {
			return arregloMedicamentos[i];
		}
	}
	return Medicamento();
}


void Medicamento::agregar(vector<Medicamento>& arregloMedicamentos, vector<TipoMedicamento> arregloTipoMedicamentos, vector<Proveedor> arregloProveedores) {
	system("cls");
	int i = getchar();

	cout << "AGREGANDO MEDICAMENTO" << endl;
	Medicamento medicamento = Medicamento();
	TipoMedicamento tipoMedicamento = TipoMedicamento();
	Proveedor proveedor = Proveedor();

	int idTipoMedicamento, idProveedor;

	medicamento.setId(generarId(arregloMedicamentos));
	cout << "Nombre: ";
	getline(cin, medicamento.nombre);
	cout << "Num del tipo  Medicamento: ";
	cin >> idTipoMedicamento;
	medicamento.tipo = tipoMedicamento.buscar(arregloTipoMedicamentos, idTipoMedicamento);
	if (medicamento.tipo.getId() > 0) {
		cout << "Num del Proveedor: ";
		cin >> idProveedor;
		medicamento.proveedor = proveedor.buscar(arregloProveedores, idProveedor);
		if (medicamento.proveedor.getId() > 0) {
			cout << "Precio: ";
			cin >> medicamento.precio;
			cout << "Receta (Si o No): ";
			cin >> medicamento.receta;
			if (medicamento.receta.compare("Si") == 0 || medicamento.receta.compare("si") == 0 || medicamento.receta.compare("SI") == 0) {
				medicamento.receta = "Si";
			}
			else if (medicamento.receta.compare("No") == 0 || medicamento.receta.compare("no") == 0 || medicamento.receta.compare("NO") == 0) {
				medicamento.receta = "No";
			}
			else {
				medicamento.receta = "No";
				cout << endl << "Mensaje:Registrando el Medicamento sin receta" << endl << endl;
			}

			arregloMedicamentos.push_back(medicamento);
			cout << endl << "Mensaje: Medicamento Agregado" << endl << endl;
		}
		else {
			cout << endl << "Mensaje: El Proveedor no existe" << endl << endl;
		}		
	}
	else {
		cout << endl << "Mensaje: El Tipo de Medicamento no existe" << endl << endl;
	}
	
	
}

void Medicamento::buscar(vector<Medicamento> arregloMedicamentos) {
	system("cls");
	cout << "BUSCANDO MEDICAMENTO" << endl;
	int id;
	cout << "Num Medicamento: ";
	cin >> id;
	Medicamento medicamento = getMedicamento(arregloMedicamentos, id);
	if (medicamento.id > 0) {
		cout << endl << "Medicamento num: " << medicamento.id
			<< endl << "Nombre: " << medicamento.nombre
			<< endl << "Tipo: " << medicamento.tipo.getTipo()
			<< endl << "Precio: " << medicamento.precio
			<< endl << "Receta?: " << medicamento.receta;
	}
	else {
		cout << endl << "Mensaje: El Medicamento no existe" << endl << endl;
	}
}

void Medicamento::listar(vector<Medicamento> arregloMedicamentos) {
	system("cls");
	cout << "LISTA DE MEDICAMENTOS" << endl;
	cout << "Num\tNombre\tTipo\tPrecio\tReceta?" << endl;
	for (int i = 0; i < arregloMedicamentos.size(); i++) {
		cout << arregloMedicamentos[i].id << "\t" 
			<< arregloMedicamentos[i].nombre << "\t" 
			<< arregloMedicamentos[i].tipo.getTipo() << "\t"
			<< arregloMedicamentos[i].precio << "\t"
			<< arregloMedicamentos[i].receta << "\t"
			<< endl;
	}
}
