#include<iostream>
#include <conio2.h>
using namespace std;

class nave {
public: 
	int x, 	y, 	combustible;

nave(int _x, int _y, int _combustible) {
	x = _x;
	y = _y;
	combustible = _combustible;
}

void mover(char _tecla) { 
	if (combustible > 0) { // si aún tiene combustible
		if (_tecla == 77) { // derecha
			x++;
		}
		if (_tecla == 75) { // izquierda
			x--;
		}
		if (_tecla == 80) { //abajo
			y++;
		}
		if (_tecla == 72) { // arriba
			y--;
		}
		combustible--;
	}
}

void mostrar() {
	gotoxy(x, y);
	cout << "X";
}
void mostrarCombustible() {
	gotoxy(30, 1);
	cout << "Combustible: " << combustible;
}
};

int main(int argc, char * argv[]) {
	nave patriot(40, 12, 50); // instancia en x=40, y=12 y 50 de combustible
	char tecla;
	do {
		clrscr(); // borrar pantalla
		patriot.mostrar(); // dibujar en pantalla
		patriot.mostrarCombustible(); //mostrar cuanto combustible queda
		tecla = getch(); //campturar teclado
		patriot.mover(tecla); //cambiar x e y para dibujar la nave
	} while (tecla != 27);
}

