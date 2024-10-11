#include<iostream>
#include <conio2.h>
using namespace std;

class obstaculo {
public: int x,
	y;

obstaculo() { // constructor de la clase
	x = 10;
	y = 10;
}

void mover(char _tecla) { // recibe el valor de la tecla presionada
	if (_tecla == 75) { // valor de tecla izquierda
		x--;
	}
	if (_tecla == 77) { // valor de tecla derecha
		x++;
	}
	if (_tecla == 72) { // valor de tecla arriba
		y--;
	}
	if (_tecla == 80) { // valor de tecla abajo
		y++;
	}
}
void mostrar() {
	gotoxy(x, y); // colocar el cursor en la posición x e y
	cout << "x"; // mostrar la x en la nueva posición, podría utilizarse cprintf(" ")
}

};

int main(int argc, char * argv[]) {
	obstaculo o1; //instanciamos la clase obstaculo
	char tecla; // declaramos la variable para leer el teclado
	do {
		clrscr(); //borrar pantalla
		o1.mostrar(); // mostrar la x en la posicion x e y
		tecla = getch(); // captura la tecla presionada
		o1.mover(tecla); //utilizar el método mover para cambiar los datos x e y
		
	} while (tecla != 27); // repetir mientras la tecla no sea 27: escape
	
	return 0;
}
