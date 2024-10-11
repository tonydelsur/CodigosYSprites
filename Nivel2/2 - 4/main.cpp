/*
4. Clase base Vehículo y clase derivada Auto y Avion
Crea una clase base Vehículo con atributos de velocidad. 
Define las clases derivadas Auto y Avion. 
El Auto se mueve en el suelo y el Avion puede volar. 
Usa conio2 para simular el movimiento.

Conceptos utilizados:
- Herencia (clase base y derivadas)
- Métodos para mover objetos en pantalla
- Instanciación de diferentes objetos
*/

#include<iostream>
#include <conio2.h>
using namespace std;

class Vehiculo {
protected:
	int velocidad, x, y, sentido;
	char forma;
	
public:
	Vehiculo(int _x, int _y, int _v, char _forma){
		x = _x;
		y = _y;
		velocidad = _v; // velocidad de movimiento
		forma = _forma; // caracter que representa al objeto en pantalla
		sentido = 1; // para calcular el sentido de movimiento
	}
	
	void dibujar(){
		gotoxy(x,y);
		cout<<forma;
	}
};

class Auto : public Vehiculo {
public:
	Auto(int _x, int _y, int _v, char _forma) : Vehiculo(_x, _y, _v, _forma){}
	
	void mover(){
		// calcula la nueva posición de acuerdo al sentido y la velocidad
		x = x + (sentido*velocidad);
		if(x>80){
			x = 79;
			sentido = -1;
		}
		if(x<0){
			x = 1;
			sentido = 1;
		}
		dibujar();
	}
};

class Avion : public Vehiculo {
public:
	Avion(int _x, int _y, int _v, char _forma) : Vehiculo(_x, _y, _v, _forma){}
	
	void mover(){
		// calcula la nueva posición de acuerdo al sentido y la velocidad
		x = x + (sentido*velocidad); 
		if(x>80){
			x = 79;
			sentido = -1;
		}
		if(x<0){
			x = 1;
			sentido = 1;
		}
		dibujar();
	}
};

int main (int argc, char *argv[]) {
	Avion avion1(5,2,2,'-');
	Auto auto1(5,19,1,'x');
	do {
		clrscr();
		avion1.mover();
		auto1.mover();
	} while(true);
	return 0;
}

