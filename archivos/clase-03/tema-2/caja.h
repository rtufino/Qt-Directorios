/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 02-04-2020
 * 
 * Ejemplo de uso del apuntador this, archivo 1/3
 */

#ifndef CAJA_H
#define CAJA_H

class Caja{
    private:
        double largo;
        double ancho;
        double alto;
    public:        
        Caja(double, double, double);
        double volumen();
        void mostrar();
        void setLargo(double);
        void setAncho(double);
        void setAlto(double);
        bool comparar(Caja &);
};

#endif