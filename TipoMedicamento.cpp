//Sofía Solis Arenas A01746209

#include "TipoMedicamento.h"
#include <iostream>
#include <vector>
#include <string>

int generarId(vector<TipoMedicamento> arregloTipoMedicamentos) {
	int index = arregloTipoMedicamentos.size() - 1;
	if (index >= 0) {
		return arregloTipoMedicamentos[index].getId() + 1;
	}
	return 1;
}

TipoMedicamento TipoMedicamento::buscar(vector<TipoMedicamento> arregloTipoMedicamentos, int id) {
	for (int i = 0; i < arregloTipoMedicamentos.size(); i++) {
		if (arregloTipoMedicamentos[i].getId() == id) {
			return arregloTipoMedicamentos[i];
		}
	}
	return TipoMedicamento();
}


void TipoMedicamento::agregar(vector<TipoMedicamento>& arregloTipoMedicamentos) {
	system("cls");
	int i;

	cout << "AGREGANDO TIPO MEDICAMENTOS" << endl;
	TipoMedicamento tipoMedicamento = TipoMedicamento();

	tipoMedicamento.id = generarId(arregloTipoMedicamentos);
	cout << "Tipo: ";
	i = getchar();
	getline(cin, tipoMedicamento.tipo);
	arregloTipoMedicamentos.push_back(tipoMedicamento);
	cout << endl << "Mensaje: Tipo de Medicamento Agregado" << endl << endl;
}

void TipoMedicamento::listar(vector<TipoMedicamento> arregloTipoMedicamentos) {
	system("cls");
	cout << "LISTA DE TIPOS DE MEDICAMENTOSS" << endl;
	cout << "Num\tTipo" << endl;
	for (int i = 0; i < arregloTipoMedicamentos.size(); i++) {
		cout << arregloTipoMedicamentos[i].id << "\t"
			<< arregloTipoMedicamentos[i].tipo << "\t"
			<< endl;
	}
}


