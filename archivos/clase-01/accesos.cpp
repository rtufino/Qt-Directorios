/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 30-03-2020
 * 
 * Especificadores de accesos C++ 
 * Tomado de: https://www.w3schools.com/cpp/cpp_access_specifiers.asp
 */

#include<iostream>
using namespace std;

class MiClase
{
public:    // Especificador publico
    int x; // Atributo público
private:   // Especificador privado
    int y; // Atributo privado
};

int main()
{
    MiClase miObj;
    miObj.x = 25; // Permitido (public)
    miObj.y = 50; // No permitido (private)
    return 0;
}