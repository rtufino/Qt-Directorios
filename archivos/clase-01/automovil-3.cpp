/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 26-03-2020
 * 
 * Ejemplo de Constructores
 */

#include <iostream>
#include <string>

using namespace std;

class Automovil
{
public:
    string marca;
    string modelo;
    int anio;
    Automovil(string x, string y, int z);
};

Automovil::Automovil(string x, string y, int z)
{
    marca = x;
    modelo = y;
    anio = z;
}

int main()
{

    Automovil objAuto1("Chevrolet", "Cruze", 2014);
    Automovil objAuto2("Mazda", "3", 2009);

    cout << objAuto1.marca << " " << objAuto1.modelo << " " << objAuto1.anio << endl;
    cout << objAuto2.marca << " " << objAuto2.modelo << " " << objAuto2.anio << endl;

    return 0;
}