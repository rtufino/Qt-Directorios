/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 02-04-2020
 * 
 * Ejemplo de punteros a objeto, archivo 3/3
 */

#include <iostream>
#include "caja.h"

using namespace std;

int main(){
    Caja caja1(10.5, 10, 10);
    caja1.mostrar();
    cout << "Volumen: " << caja1.volumen() << endl;

    // Referencia
    Caja &refCaja1 = caja1;
    refCaja1.setLargo(5.6);
    refCaja1.mostrar();
    cout << "Volumen: " << refCaja1.volumen() << endl;

    // Puntero
    Caja *ptrCaja1 = &caja1;
    ptrCaja1->setAncho(4.89);
    ptrCaja1->mostrar();
    cout << "Volumen: " << ptrCaja1->volumen() << endl;

    // Muestra nuevamente caja1
    caja1.mostrar();
    cout << "Volumen: " << caja1.volumen() << endl;

    return 0;
}