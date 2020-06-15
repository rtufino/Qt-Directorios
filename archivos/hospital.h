/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 09-04-2020
 * 
 * Definición de la clase Hospital
 */

#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <string>
#include "paciente.h"

using namespace std;

class Hospital{
	private:
		string nombre;
		Paciente pacientes[10];		// vector de OBJETOS
		int pacientesIngresados;
	public:
		Hospital();
		Hospital(string);
		void ingresarPaciente();
		void listarpacientes();
		void darDeAlta();
		void listarPacientesInfectados();
		void listarPacientesDadosAlta();
		
		int getPacientesIngresados();
};

#endif
