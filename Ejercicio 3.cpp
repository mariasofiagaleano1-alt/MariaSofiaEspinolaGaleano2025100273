#include <cstdlib>
#include <iostream>
using namespace std;
int main () { 
const int centinela = -1;
float nota, contador = 0, suma= 0;
cout << "Introduzca el siguiente numero -1 centinela:";
cin>> nota;
while (nota != centinela){
	contador++;
	suma += nota;
	cout << "Intoduzca la siguiente nota: -1 centinela:" ;
	cin >> nota;
}// Fin de While 
if (contador > 0)
cout << "media= "<< suma/ contador << endl;
else 
cout << "no hay notas";
system ("PAUSE");
return EXIT_SUCCESS;
	return 0;
}
