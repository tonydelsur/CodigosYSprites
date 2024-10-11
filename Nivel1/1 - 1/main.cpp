#include<iostream>
using namespace std;

class personaje {
public: string nombre;
int salud;

void mostrar() {
	cout << "Nombre: " << nombre << " - Salud: " << salud << endl;
}
};

int main(int argc, char * argv[]) {
	personaje p1;
	p1.nombre = "Héroe";
	p1.salud = 100;
	p1.mostrar();
	return 0;
}
