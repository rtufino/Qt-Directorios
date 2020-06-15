/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 30-03-2020
 * 
 * Ejemplo de reutilizacion, archivo 1/2
 */

#include <iostream>
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