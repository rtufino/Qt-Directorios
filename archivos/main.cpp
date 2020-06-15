/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 09-04-2020
 * 
 * Función principal para probar el código
 */

#include <iostream>
#include "paciente.h"
#include "hospital.h"

using namespace std;

// Inicializar la variable estatica
int Paciente::totalPacientes = 0;

int main()
{
	// Creando un paciente
	// Paciente p("Gorgolito Perez", 58, 'M', 1.68, 78);
	// Imprimir datos del paciente
	// cout << p.getDatos();

	cout << "= = SISTEMA DE REGISTRO DE PACIENTES = =" << endl;
	cout << "Autor: Rodrigo Tufiño\n" << endl;

	string nombre;
	cout << "Ingrese el nombre del hospital: ";
	getline(cin >> ws, nombre);
	// Crear un hospital
	Hospital hcam (nombre);

	// menu
	int opc = 0;
	do{
		cout << "\n- - MENU PRINCIPAL - -" << endl;
		cout << "1. Ingresar un paciente" << endl;
		cout << "2. Listar todos los paciente" << endl;
		cout << "8. Salir" << endl;
		cout << "Ingrese su opcion: ";
		cin >> opc;
		switch(opc){
			case 1:
				hcam.ingresarPaciente();
				break;
			case 2:
				hcam.listarpacientes();
				break;
			default:
				cout << "Opción no válida!" << endl;
		}
	}while(opc != 8);

	cout << "Gracias por utilizar este programa..." << endl;

	/*
	hcam.ingresarPaciente();		// Ingresar un paciente
	hcam.ingresarPaciente();		// Ingresar otro paciente
	hcam.ingresarPaciente();		// Ingresar otro paciente
	hcam.listarpacientes();			// Listar los pacientes

	hcam.darDeAlta();
	hcam.darDeAlta();

	hcam.listarpacientes();

	hcam.listarPacientesInfectados();

	hcam.listarPacientesDadosAlta();

	// Imprimir el total de pacientes
	cout << "Total pacientes: " << Paciente::totalPacientes << endl;
	*/
	return 0;
}
