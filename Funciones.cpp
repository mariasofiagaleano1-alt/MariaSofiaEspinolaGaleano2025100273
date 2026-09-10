#include <iostream>

using namespace std;

// Declaración de funciones
float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);

int main() {
    float num1, num2, rsuma, rresta, rmultiplicacion;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Luego el segundo numero: ";
    cin >> num2;

    // Llamada a las funciones
    rsuma = suma(num1, num2);
    rresta = resta(num1, num2);
    rmultiplicacion = multiplicacion(num1, num2);

    cout << "El resultado de la suma es: " << rsuma << endl;
    cout << "El resultado de la resta es: " << rresta << endl;
    cout << "El resultado de la multiplicacion es: " << rmultiplicacion << endl;

    return 0;
}

// Definición de funciones
float suma(float a, float b) {
    return a + b;
}

float resta(float a, float b) {
    return a - b;
}

float multiplicacion(float a, float b) {
    return a * b;
}
