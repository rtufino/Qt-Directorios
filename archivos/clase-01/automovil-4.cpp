/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 26-03-2020
 * 
 * Ejemplo de Encapsulamiento
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
    void setVelocidadMaxima(int v);
    int getVelocidadMaxima();
private:
    int velocidadMaxima;
    
};

Automovil::Automovil(string x, string y, int z)
{
    marca = x;
    modelo = y;
    anio = z;
    velocidadMaxima = 0;
}

void Automovil::setVelocidadMaxima(int v){
    velocidadMaxima = v;
}

int Automovil::getVelocidadMaxima(){
    return velocidadMaxima;
}

int main()
{

    Automovil objAuto1("Chevrolet", "Cruze", 2014);
    objAuto1.setVelocidadMaxima(220);
    Automovil objAuto2("Mazda", "3", 2009);
    objAuto2.setVelocidadMaxima(240);
    cout << objAuto1.marca << " " << objAuto1.modelo << " " << objAuto1.anio << " " << objAuto1.getVelocidadMaxima() << endl;
    cout << objAuto2.marca << " " << objAuto2.modelo << " " << objAuto2.anio << " " << objAuto2.getVelocidadMaxima() <<endl;

    return 0;
}