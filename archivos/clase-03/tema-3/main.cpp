/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 02-04-2020
 * 
 * Ejemplo de miembros static, archivo 3/3
 */

#include <iostream>
#include "caja.h"

using namespace std;

// Inicializar el miembro estático de Caja.
int Caja::numeroCajas = 0;

int main()
{
    Caja caja1(10, 5, 5);
    Caja caja2(10, 5, 10);

    cout << "Total de cajas creadas: " << Caja::numeroCajas << endl;

    if (Caja::comparar(caja1, caja2)){
        cout << "La caja 1 es más grande que la caja 2" << endl;
    }else{
        cout << "La caja 2 es más grande que la caja 1" << endl;
    }

    return 0;
}