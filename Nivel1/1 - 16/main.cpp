#include<iostream>
#include <conio2.h>
using namespace std;

class brave {
public: 
	int x, 	y, 	saltoMaximo;

brave() {
	x = 40;
	y = 22;
	saltoMaximo = 4;
}

void mover(char _tecla) {
	if (_tecla == ' ') { //espacio = salto
		for (int salto = 0; salto < saltoMaximo; salto++) {
			y--;
			clrscr();
			gotoxy(x, y);
			cout << "X";
			gotoxy(40, 2);
			cout << "Salto";
		};
		
		for (int salto = saltoMaximo; salto > 0; salto--) {
			y++;
			clrscr();
			gotoxy(x, y);
			cout << "X";
			gotoxy(40, 2);
			cout << "Salto";
		};
	};
	
}

void mostrar() {
	gotoxy(x, y);
	cout << "X";
}
};

int main(int argc, char * argv[]) {
	brave gato; // instancia 
	char tecla;
	
	do {
		clrscr(); // borrar pantalla
		gato.mostrar(); // dibujar en pantalla
		tecla = getch(); //campturar teclado
		gato.mover(tecla); //cambiar x e y para dibujar la nave
	} while (tecla != 27);
}

