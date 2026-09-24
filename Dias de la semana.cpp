// Realizar un programa en c++ que solicite al usuario los dias de la semana e imprimir su equivalente.
#include <iostream> // Biblioteca de entrada y salida de datos.
using namespace std; // permite usar el cin y cout sin prefijos.

    int main (){ //inicio obligatorio.
	int dias; // declaracion de variables.
	int opcion; // Declaracion de variable.
	cout << "Podrias ingresar un numero del 1 al 7:"; // Pidiendo datos al usuario.
	cin >> dias;
	// Proceso switch
	switch (dias) {
		case 1: cout<< "El dia es Lunes" << endl; break;
		case 2: cout<< "El dia es Martes" << endl; break;
		case 3: cout<< "El dia es Miercoles" << endl; break;
		case 4: cout<< "El dia es Jueves" << endl; break;
		case 5: cout<< "El dia es Viernes" << endl; break;
		case 6: cout<< "El dia es Sabado" << endl; break;
		case 7: cout<< "El dia es Domingo" << endl; break;
		default: cout<< "El numero que ingresaste no es valido, solo debe ser del 1 al 7,intentalo de nuevo." << endl; break;
	}
	
	return 0; //Finalizacion del programa.
}
