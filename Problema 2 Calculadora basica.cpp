#include <iostream> // Biblioteca de entrada y salida de datos.
using namespace std; // Permite utilizar cout y cin sin prefijos.

// Declaracion de funciones
float sumar(float num1, float num2) {
    return num1 + num2;
}

float restar(float num1, float num2) {
    return num1 - num2;
}

float multiplicacion(float num1, float num2) {
    return num1 * num2;
}

float division(float num1, float num2) {
    return num1 / num2;
}

int main() { // Inicio obligatorio.

    // Declaracion de variables como float
    float num1, num2;

    // Pidiendo datos al usuario 
    cout << "Podrias ingresar un numero mayor a (0 y menor a 100): " << endl; 
    cin >> num1;

    cout << "Ahora ingresa un segundo numero mayor a (0 y menor a 100): " << endl; 
    cin >> num2;

    // Proceso de calculo de la calculadora basica
    if (num1 > 0 && num1 < 100 && num2 > 0 && num2 < 100) {
        cout << "Suma: " << sumar(num1, num2) << endl;
        cout << "Resta: " << restar(num1, num2) << endl;
        cout << "Multiplicacion: " << multiplicacion(num1, num2) << endl;
        cout << "Division: " << division(num1, num2) << endl;
    } else {
        cout << "\nError: Ambos numeros deben ser mayores a 0 y menores a 100." << endl;
    }

    return 0; // Finalizacion del programa.
}
