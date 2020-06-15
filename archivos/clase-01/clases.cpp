/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 26-03-2020
 * 
 * Creación de una clase en C++ 
 */

#include <iostream>
#include <string>

using namespace std;

class MiClase {
    public:
        int numeroEntero;
        float numeroDecimal;
        string cadenaCaracteres;

};

int main () {
    MiClase miObjeto;

    miObjeto.numeroEntero = 5;
    miObjeto.numeroDecimal = 74.5;
    miObjeto.cadenaCaracteres = "Hola!";

    cout << miObjeto.numeroEntero << '\n';
    cout << miObjeto.cadenaCaracteres << '\n';
    cout << miObjeto.numeroDecimal << endl;

    return 0;
}