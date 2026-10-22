#include <iostream>
#include <string>
using namespace std;
// Definimos la estructura para los personajes
struct Personaje {
    string nombre;
    int fuerza;
};
int main() {
    // Creamos y asignamos valores a los personajes usando la estructura
    Personaje p1 = {"Sofia", 95};
    Personaje p2 = {"Alejo", 80};

    cout << " BATALLA DE ATRIBUTOS DE PERSONAJES " << endl;
    
    // Mostramos los datos accediendo a los atributos con un punto (.)
    cout << "Personaje 1: " << p1.nombre << " - Puntos de fuerza: " << p1.fuerza << endl;
    cout << "Personaje 2: " << p2.nombre << " - Puntos de fuerza: " << p2.fuerza << endl;
    cout << "-----------------------------------------" << endl;

    // Comparamos los puntos de fuerza para determinar al ganador
    if (p1.fuerza > p2.fuerza) {
        cout << "¡El personaje mas fuerte es " << p1.nombre << "!" << endl;
    } 
    else if (p2.fuerza > p1.fuerza) {
        cout << "¡El personaje mas fuerte es " << p2.nombre << "!" << endl;
    } 
    else {
        cout << "¡ES UN EMPATE! Ambos tienen la misma fuerza." << endl;
    }

    return 0;
}
