#include <iostream>
using namespace std;

// Prototipo de la función (declaracion)
int sumar(int, int);

// Funcion principal
int main(){
	int num1, num2, sum;
	cout << "Ingrese dos números para sumar: ";
	cin >> num1 >> num2;

	// LLamar a la función
	sum = sumar(num1, num2);
	cout << "Suma = " << sum;
	return 0;
}

// Cuerpo de la función
int sumar(int a, int b){
        int suma;
        suma = a + b;
        return suma;
}
