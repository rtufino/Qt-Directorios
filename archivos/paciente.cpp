/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 09-04-2020
 * 
 * Implementación de la clase "Paciente"
 */

#include "paciente.h"
#include "utilidades.h"

using namespace std;


Paciente::Paciente(){
	this->nombre = "";
	this->edad = 0;
	this->positivo = false;
	this->genero = ' ';
	this->altura = 0;
	this->masa = 0;
	this->alta = false;
}


Paciente::Paciente(string nombre, int edad){
	this->nombre = nombre;
	this->edad = edad;
	this->positivo = false;
	// Ingrementa el total de pacientes "creados"
	Paciente::totalPacientes++;
	// Asignar un numero al paciente
	this->id = Paciente::totalPacientes;
	this->genero = ' ';
	this->altura = 0;
	this->masa = 0;
	this->alta = false;
}

Paciente::Paciente(string nombre, int edad, char genero, float altura, float masa){
	this->nombre = nombre;
	this->edad = edad;
	this->positivo = false;
	Paciente::totalPacientes++;
	this->id = Paciente::totalPacientes;
	this->genero = genero;
	this->altura = altura;
	this->masa = masa;
	this->alta = false;
}

void Paciente::setPositivo(bool valor){
	this->positivo = valor;
}

bool Paciente::getPositivo(){
	return this->positivo;
}

string Paciente::estaContagiado(){
	return bool_to_string(this->positivo);
}

string Paciente::estaDadoDeAlta(){
	return bool_to_string(this->alta);
}

string Paciente::obtenerGenero(){
	if (this->genero == 'M'){
		return "Masculino";
	}else{
		return "Femenino";
	}
	// return this->genero == 'M' ? "Masculino" : "Femenino";
}

string Paciente::obtenerIMC(){
	float imc = this->masa / (this->altura * this->altura);
	string respuesta = "(" + to_string_con_precision(imc) + ")"; 
	if (imc <= 18.5){
		respuesta = "Anemia " + respuesta;
	}else if (imc <= 24.9){
		respuesta = "Normal " + respuesta;
	}else if (imc <= 29.9){
		respuesta = "Sobrepeso " + respuesta;
	}else{
		respuesta = "Obesidad " + respuesta;
	}
	return respuesta;
}

string Paciente::getDatos(){
	return "ID: " + to_string(this->id) + "\n" +
			"Nombre: " + this->nombre + "\n" +
			"Edad: " + to_string(this->edad) + "\n" +
			"Genero: " + this->obtenerGenero() + "\n" +
			"Altura: " + to_string_con_precision(this->altura,2) + " m\n" +
			"Masa: " + to_string_con_precision(this->masa,2) + " kg\n" +
			"IMC: " + this->obtenerIMC() + "\n" +
			"Esta dado de alta: " + this->estaDadoDeAlta() + "\n" +
			"Tiene Covid-19: " + this->estaContagiado() + "\n\n";
}

void Paciente::setAlta(bool valor){
	this->alta = valor;
}

bool Paciente::getAlta(){
	return this->alta;
}

int Paciente::getId(){
	return this->id;
}

string Paciente::getNombre(){
	return this->nombre;
}