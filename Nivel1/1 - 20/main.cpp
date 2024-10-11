#include<iostream>
#include <conio2.h>
using namespace std;

class jugadorRapido {
public: 
	int x, y, velocidad;

jugadorRapido() { // constructor de la clase
	x = 10;
	y = 10;
	velocidad = 3;
}

void mover(char _tecla) { // recibe el valor de la tecla presionada
	if (_tecla == 75) { // valor de tecla izquierda
		x -= velocidad;
	}
	if (_tecla == 77) { // valor de tecla derecha
		x += velocidad;
	}
	if (_tecla == 72) { // valor de tecla arriba
		y -= velocidad;
	}
	if (_tecla == 80) { // valor de tecla abajo
		y += velocidad;
	}
}
void mostrar() {
	gotoxy(x, y); // colocar el cursor en la posición x e y
	cout << "J"; // mostrar la x en la nueva posición, podría utilizarse cprintf(" ")
}

};

int main(int argc, char * argv[]) {
	jugadorRapido j1; //instanciamos la clase jugadorRapido
	char tecla; // declaramos la variable para leer el teclado
	do {
		clrscr(); //borrar pantalla
		j1.mostrar(); // mostrar la x en la posicion x e y
		tecla = getch(); // captura la tecla presionada
		j1.mover(tecla); //utilizar el método mover para cambiar los datos x e y
		
	} while (tecla != 27); // repetir mientras la tecla no sea 27: escape
	
	return 0;
}

