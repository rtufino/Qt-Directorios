/**
 * Programación Orientada a Objetos
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 26-03-2020
 * 
 * Ejemplo completo de la Clase 01
 */
 
 #include <iostream>
 #include <string>
 using namespace std;
 
 // Definicion de la clase Automovil
 class Automovil {
 	public:
 		string marca;
 		string modelo;
 		int anio;
 		bool encendido;
 		int velocidadMaxima(int velocidad);
 		void encender();
 		Automovil(string ma, string mo, int a){
 			marca = ma;
 			modelo = mo;
 			anio = a;
 			encendido = false;
		 }
 };
 
 int Automovil::velocidadMaxima(int velocidad){
 	return velocidad;
 }
 
 void Automovil::encender(){
 	encendido = true;
 }
 
 int main (){
 	// Crear variables para la velocidad
 	int v1, v2;
 	// Instancia 1 de la clase Automovil
 	Automovil objAuto1("Chevrolet", "Cruze", 2014);
 	//objAuto1.marca = "Chevrolet";
 	//objAuto1.modelo = "Cruze";
 	//objAuto1.anio = 2014;
 	objAuto1.encender();
 	v1 = objAuto1.velocidadMaxima(220);
 	// Instancia 2 de la clase Automovil
 	Automovil objAuto2 ("Renault", "Sandero", 2012);
 	//objAuto2.marca = "Mazda";
 	//objAuto2.modelo = "3";
 	//objAuto2.anio = 2009;
 	v2 = objAuto2.velocidadMaxima(200);
 	// Imprimiendo los atributos
 	cout << objAuto1.marca << " " << objAuto1.modelo << " " << objAuto1.anio << " " << v1 << " " << objAuto1.encendido << endl;
 	cout << objAuto2.marca << " " << objAuto2.modelo << " " << objAuto2.anio << " " << v2 << " " << objAuto2.encendido <<endl;
 	
 	return 0;
 }
