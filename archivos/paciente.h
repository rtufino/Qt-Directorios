/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 09-04-2020
 * 
 * Definición de la clase "Paciente"
 */

#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
using namespace std;

class Paciente{
	private:
		int id;						// Numero de identificacion del paciente
		string nombre;				// Nombre del paciente
		int edad;					// Edad del paciente
		char genero;				// M = masculino o F = femenino
		float altura;				// Altura en metros
		float masa;					// Masa en kilogramos
		bool alta;					// Si el paciente ha sido (true) dado de alta
		bool positivo;				// Si la prueba de Covid-19 es positiva
		string estaContagiado();	// Retorna Si o No segun la prueba (positivo)
		string obtenerGenero();		// Retorna en palabras el genero
		string estaDadoDeAlta();	// Retorno Si o No según el etributo alta.
		
	public:
		Paciente();					// Constructor por defecto
		Paciente(string, int);		// Constructor
		Paciente(string, int, char, float, float); // Sobrecarga del constructor
		void setPositivo(bool);		// Establecer si la prueba es positiva
		bool getPositivo();			// Obtener si el paciente dio positivo en la prueba
		string getDatos();			// Obtener un string con los datos del paciente
		string obtenerIMC();		// Obtiene el Indice de Masa Corporal (IMC)
		void setAlta(bool);			// Establecetr si un paciente se le ha dado de alta
		bool getAlta();				// Obtiene el valor del atributo alta.
		int getId();				// Obtener el Id
		string getNombre();

		static int totalPacientes;	// Llevar la cuenta de pacientes
};

#endif
