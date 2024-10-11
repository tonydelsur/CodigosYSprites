/* 
1. Clase base Entidad y clase derivada Jugador
	Crea una clase base Entidad con atributos x e y para la posición. 
	La clase Jugador hereda de Entidad y puede moverse por la pantalla con las teclas de dirección. 
	Usa conio2 para mostrar el movimiento.
	
	Conceptos utilizados:
	
	Definición de clase base y clase derivada
	Atributos de clase (x, y)
	Métodos para mover el objeto
	Instanciación de objeto
*/

#include<iostream>
#include <conio2.h>
using namespace std;

class Entidad {
protected:   
	int x, y; //posicion a heredar
	
public:
	Entidad(int _x, int _y){ //constructor
		x = _x;
		y = _y;
	}
	
	//método que muestra el objeto, no lo anima
	void mostrarObjeto(){ 
		gotoxy(x,y); // ubica el cursor en la posicion x e y
		cout<<"X"; // muestra objeto como una X
	}
};

// clase derivada Jugador
class Jugador : public Entidad {
public:
	/*
	el constructor hereda el constructor de la clase padre
	El dato de ingreso al constructor se pasa a la clase padre
	directamente
	*/
	Jugador(int _x, int _y) : Entidad(_x, _y){}
	
	// método de movimiento de acuerdo a las teclas
	//en este caso, el bucle está incluido en el método
	void mover(){
		char tecla; //declaramos la variable tecla
		do { 	//comenzamos el bucle mientras no se presiones escape (27)
			clrscr(); //borrar pantalla
			mostrarObjeto(); //mostrar el objeto en la nueva posición
			
			tecla = getch(); //capturar la tecla presionada (esperar)
			
			switch(tecla){
			case 72: //flecha arriba
				if(y>1) {
					y--;
				}
				break;
			case 80: //flecha abajo
				if(y<25){
					y++;
				}
				break;
			case 75: //flecha izquierda
				if(x>1){
					x--;
				}
				break;
			case 77: //flecha derecha
				if(x<80){
					x++;
				}
				break;
			}
		} while(tecla != 27);
	}
};

int main (int argc, char *argv[]) {
	Jugador j1(40,10); //creamos objeto j1
	
	j1.mover(); // inciar el metodo de movimiento
	
	return 0;
}

