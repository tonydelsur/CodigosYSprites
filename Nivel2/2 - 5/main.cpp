/*
5. Clase base Poder y clase derivada Escudo y Velocidad
Define una clase base Poder con un atributo de duración. 
Crea las clases derivadas Escudo, que protege al jugador, 
y Velocidad, que incrementa el movimiento 
del jugador por un tiempo limitado.

Conceptos utilizados:
- Definición de clases derivadas con atributos comunes
- Métodos para aplicar el poder al jugador
- Atributos encapsulados
*/

#include<iostream>
#include <conio2.h>
#include <ctime>
using namespace std;

class Poder {
protected:
	int duracion;
	
public:
	Poder(int _duracion){
		duracion = _duracion;
	}	
};

class Escudo : public Poder {
private:
	int proteccion;
public:
	Escudo(int _duracion, int _proteccion) : Poder(_duracion){
		proteccion = _proteccion;
	}
	
	
	
};
int main (int argc, char *argv[]) {
	
	return 0;
}

