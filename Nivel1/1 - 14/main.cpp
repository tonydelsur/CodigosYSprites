#include<iostream>
using namespace std;

class mapa {
public: 
	int ancho, alto;

mapa(int _x, int _y) { //constructor que recibe datos inciales
	ancho = _x;
	alto = _y;
}

void mostrarDimension() {
	cout << "Ancho: " << ancho << "  - Alto: " << alto << endl;
}
};

int main(int argc, char * argv[]) {
	mapa map(10, 15); //creo la instancia con los datos para el constructor
	map.mostrarDimension();
	return 0;
}
