/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 26-03-2020
 * 
 * Utilización de Constructores en C++
 */

#include <iostream>

using namespace std;

class MiClase
{
public:
    int miEntero; 
    MiClase()
    {
        miEntero = 5;
        cout << "Constructor de mi clase\n";
    }
};

int main()
{
    MiClase miObjeto;
    cout << miObjeto.miEntero << endl;
    return 0;
}