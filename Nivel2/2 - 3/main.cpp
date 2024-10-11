/*
3. Clase base Obst�culo y clase derivada Trampa y Pared
Define una clase base Obst�culo con atributos de posici�n. 
Crea las clases derivadas Trampa y Pared. 
Trampa inflige da�o al jugador si colisiona con ella, 
mientras que Pared bloquea el paso.

Conceptos utilizados:
- Herencia simple
- M�todos diferenciados entre clases derivadas
- Atributos privados
- Instanciaci�n de m�ltiples objetos
*/

#include<iostream>
using namespace std;

class Obstaculo {
protected:
	int x, y; //coordenadas del objeto
	
public:
	Obstaculo(int _x, int _y){
		x = _x;
		y = _y;		
	};
};

class Trampa : Obstaculo {
public:
	Trampa(int _x, int _y) : Obstaculo(_x, _y){
		
	};
	void caeTrampa(int _x, int _y){
		if((_x == x) && (_y = y)){
			cout<<"El jugador sufre da�o por caer en la trampa"<<endl;
		};
	};
};

class Pared : Obstaculo {
public:
	Pared(int _x, int _y) : Obstaculo(_x, _y){};
	
	void tocaPared(int _x, int _y){
		if((_x == x) && (_y = y)){
			cout<<"La pared impide que el jugador pase"<<endl;
		};
	};
};

int main (int argc, char *argv[]) {
	Pared p1(20,20);
	Trampa t1(20,19);
	//verificamos la coordenada del jugador con la Pared
	p1.tocaPared(20,20);
	//verificamos la corrdenada del jugador con la Trampa
	t1.caeTrampa(20,19);
	
	return 0;
}

