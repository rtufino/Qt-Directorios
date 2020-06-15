/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 30-03-2020
 * 
 * Ejemplo de separar interfaz de implementación, archivo 2/3
 */

#include <iostream>
#include "empleado-2.h"

Empleado::Empleado(string n, double s): nombre(n){
    salario = s;
}

void Empleado::setSalario(double valor){
    salario = valor;
}

double Empleado::getSalario(){
    return salario;
}

string Empleado::getNombre(){
    return nombre;
}

void Empleado::mostrarDatos(){
    cout << "Empleado: " << nombre << ", salario: " << salario << endl;
}