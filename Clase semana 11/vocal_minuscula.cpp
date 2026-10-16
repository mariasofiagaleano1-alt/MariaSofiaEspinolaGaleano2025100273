#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "Podrias introducir caracteres hasta ingresar una vocal minuscula (a, e, i, o, u):\n";
    for (c = ' '; c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'; ) {
        cout << "Ahora ingresa un caracter: ";
        cin >> c;
    }
    cout << "Excelenteee! Ingresaste la vocal minúscula: " << c << endl;
    return 0;
}

