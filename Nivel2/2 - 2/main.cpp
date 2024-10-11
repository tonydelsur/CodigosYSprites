/*
2. Clase base Personaje y clase derivada Guerrero y Mago
Implementa una clase base Personaje con atributos de salud y fuerza. 
Crea dos clases derivadas: Guerrero, que tiene un método para atacar, y Mago, 
que tiene un método para lanzar hechizos.

Conceptos utilizados:

Herencia múltiple (dos clases derivadas de una base)
Atributos de clase (salud, fuerza)
Métodos específicos por clase derivada
Encapsulamiento (métodos privados)
*/

#include<iostream>
using namespace std;

class Personaje{
protected:	
	int salud, fuerza;
	
	Personaje(int _salud,int _fuerza){
		salud = _salud;
		fuerza = _fuerza;
	};
};

class Guerrero : Personaje {
public:
	Guerrero(int _salud, int _fuerza) : Personaje(_salud, _fuerza) {};
	
	void atacar(){
		cout<<"Ataque de: "<<fuerza<<endl;
	};
};

class Mago : Personaje {
	
public:
	Mago(int _salud, int _fuerza) : Personaje(_salud, _fuerza) {};
	
	void lanzarHechizo(){
		cout<<"Hechizo de: "<<fuerza<<endl;
	};
	
};
	
int main (int argc, char *argv[]) {
	Guerrero g1(50,200);
	Mago m1(1000,80);
	g1.atacar();
	m1.lanzarHechizo();
	return 0;
}

