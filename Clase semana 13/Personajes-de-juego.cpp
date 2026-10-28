#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Estructura para los datos del guerrero/personaje
struct Personaje {
    string nom;
    int ptsVida;
    int poderAtaque;
};

// Función para guardar un nuevo personaje
void agregarPersonaje() {
    ofstream archivoSalida("personajes.txt", ios::app);
    
    if (archivoSalida.is_open()) {
        Personaje heroe;
        cout << "\n--- NUEVO REGISTRO ---" << endl;
        cout << "Nombre del personaje: ";
        cin >> ws;
        getline(cin, heroe.nom);
        cout << "Puntos de vida: ";
        cin >> heroe.ptsVida;
        cout << "Poder de ataque: ";
        cin >> heroe.poderAtaque;
        
        // Escribimos los datos en el archivo de texto
        archivoSalida << heroe.nom << "\n" << heroe.ptsVida << "\n" << heroe.poderAtaque << "\n";
        
        archivoSalida.close();
        cout << "¡Listo! Personaje guardado correctamente." << endl;
    } else {
        cout << "Ups, no se pudo abrir el archivo." << endl;
    }
}

// Función para consultar la lista completa de los personajes 
void listarPersonajes() {
    ifstream archivoEntrada("personajes.txt");
    
    if (archivoEntrada.is_open()) {
        string datoLeido;
        cout << "\n=== REGISTROS EN EL ARCHIVO ===" << endl;
        bool existeAlgo = false;
        
        while (getline(archivoEntrada, datoLeido)) {
            existeAlgo = true;
            cout << "Nombre : " << datoLeido << endl;
            if (getline(archivoEntrada, datoLeido)) cout << "Vida   : " << datoLeido << endl;
            if (getline(archivoEntrada, datoLeido)) cout << "Ataque : " << datoLeido << endl;
            cout << "-------------------------------" << endl;
        }
        
        if (!existeAlgo) {
            cout << "Todavia no hay personajes guardados." << endl;
        }
        
        archivoEntrada.close();
    } else {
        cout << "Aun no existe el archivo 'personajes.txt'." << endl;
    }
}

int main() {
    int seleccion;
    
    do {
        cout << "\n============================" << endl;
        cout << "      MENU PRINCIPAL        " << endl;
        cout << "============================" << endl;
        cout << "1. Registrar personaje" << endl;
        cout << "2. Mostrar personajes" << endl;
        cout << "3. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> seleccion;
        
        switch(seleccion) {
            case 1:
                agregarPersonaje();
                break;
            case 2:
                listarPersonajes();
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion incorrecta, prueba de nuevo." << endl;
        }
    } while (seleccion != 3);

    return 0;
}
