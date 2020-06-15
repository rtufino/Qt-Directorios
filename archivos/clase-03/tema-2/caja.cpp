/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 02-04-2020
 * 
 * Ejemplo de uso del apuntador this, archivo 2/3
 */

#include <iostream>
#include "caja.h"

using namespace std;

Caja::Caja(double largo, double alto, double ancho){
    // Utiliza el apuntador this para hacer referencia a los atributos de la clase
    this->largo = largo;
    this->alto = alto;
    this->ancho = ancho;
}

double Caja::volumen(){
    return largo * alto * ancho;
}

void Caja::mostrar(){
    cout << "Caja: " << largo << " x " << alto << " x " << ancho << endl;
}

void Caja::setAlto(double alto){
    this->alto = alto;
}

void Caja::setAncho(double ancho){
    this->ancho = ancho;
}

void Caja::setLargo(double largo){
    this->largo = largo;
}

bool Caja::comparar(Caja &caja){
    // Utiliza el apuntador this para hacer referencia a si mismo
    return this->volumen() > caja.volumen();
}