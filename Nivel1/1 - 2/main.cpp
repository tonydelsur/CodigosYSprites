#include<iostream>
using namespace std;

class Arma {
public: string nombre;
int poder;

void mostrarAtributos() {
	cout << "Nombre: " << nombre << " - Poder: " << poder << endl;
}

};

int main(int argc, char * argv[]) {
	Arma a1;
	a1.nombre = "Espada";
	a1.poder = 45;
	a1.mostrarAtributos();
	
	return 0;
}
