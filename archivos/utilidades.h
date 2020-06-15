/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 09-04-2020
 * 
 * Funciones de uilidad varias
 */

#ifndef UTILIDADES_H
#define UTILIDADES_H

#include <sstream>

using namespace std;

/**
 * Transforma un número decimal a string con precición
 * 
 * @param a_value Número decimal a transformar
 * @param n Número de cifras decimales. Por defecto 6
 * @return String del número decimal.
 */
template <typename T>
string to_string_con_precision(const T a_value, const int n = 6)
{
    ostringstream out;
    out.precision(n);
    out << fixed << a_value;
    return out.str();
}

/**
 * Transforma un dato booleano a string
 * 
 * @param valor Valor bool a transformar
 * @return String que Si o No
 */
string bool_to_string(bool valor)
{
    return valor ? "Si" : "No";
}

#endif