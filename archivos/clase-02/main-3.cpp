/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 30-03-2020
 * 
 * Ejemplo guarda de inclusion , archivo 3/3
 */
#include <iostream>
#include "empleado-3.h"

using namespace std;

int main(){
    Empleado objEmp01("Juan", 413.25);
    Empleado objEmp02("María", 425.85);

    objEmp01.mostrarDatos();
    objEmp02.mostrarDatos();

    return 0;
}
