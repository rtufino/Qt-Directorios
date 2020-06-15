/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 30-03-2020
 * 
 * Ejemplo guarda de inclusion , archivo 1/3
 */
#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
using namespace std;

class Empleado
{

private:
    double salario;
    string nombre;

public:
    Empleado(string, double);
    void setSalario(double);
    double getSalario();
    string getNombre();
    void mostrarDatos();
};

#endif