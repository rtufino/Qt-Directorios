/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 26-03-2020
 * 
 * Creación de una clase con metodos en C++ 
 */

#include <iostream>
using namespace std;

class MiClase
{
public:
    void miMetodo();
};

void MiClase::miMetodo()
{
    cout << "Hola chicos!" << endl;
}

int main()
{
    MiClase myObj;
    myObj.miMetodo();
    return 0;
}
