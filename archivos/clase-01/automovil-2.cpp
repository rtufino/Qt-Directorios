/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 26-03-2020
 * 
 * Ejemplo de métodos
 */

#include <iostream>
#include <string>

using namespace std;

class Automovil {
    public:
        string marca;
        string modelo;
        int anio;
        int velocidadMaxima(int velocidad){
            return velocidad;
        }
};

int main(){

    int velocidad1, velocidad2;

    Automovil objAuto1;
    objAuto1.marca = "Chevrolet";
    objAuto1.modelo = "Cruze";
    objAuto1.anio = 2014;
    velocidad1 = objAuto1.velocidadMaxima(220);

    Automovil objAuto2;
    objAuto2.marca = "Mazda";
    objAuto2.modelo = "3";
    objAuto2.anio = 2009;
    velocidad2 = objAuto2.velocidadMaxima(240);

    cout << objAuto1.marca << " " << objAuto1.modelo << " " << objAuto1.anio << " " << velocidad1 << endl;
    cout << objAuto2.marca << " " << objAuto2.modelo << " " << objAuto2.anio << " " << velocidad2 << endl;
}