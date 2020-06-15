/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 30-03-2020
 * 
 * Encapsulamiento 
 */

#include<iostream>
using namespace std;

class MiClase
{
public:   
    int x;
    int getY();
    void setY(int valor);
private:
    int y;
};

int MiClase::getY(){
    return y;
}

void MiClase::setY(int valor){
    y = valor;
}

int main()
{
    MiClase miObj;
    miObj.x = 25; 
    miObj.setY(50);
    cout << miObj.getY() << endl;
    return 0;
}