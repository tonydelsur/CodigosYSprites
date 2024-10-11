/*
2. Clase base Personaje y clase derivada Guerrero y Mago
Implementa una clase base Personaje con atributos de salud y fuerza. 
Crea dos clases derivadas: Guerrero, que tiene un método para atacar, y Mago, 
que tiene un método para lanzar hechizos.

En la versión extendida agrego:
- Mostrar estado
- Atacar devuelve el valor de ataque
- Recibir daño con el valor de ataque
*/

#include<iostream>
using namespace std;

class Personaje{
protected:	
	int salud, fuerza;
	
public:
	Personaje(int _salud,int _fuerza){
		salud = _salud;
		fuerza = _fuerza;
	};
	
	void mostrarEstado(){
		cout<<"Salud : "<<salud<<" - Fuerza: "<<fuerza<<endl;
	}
	
	void recibirDanio(int _fuerza){
		salud = salud - _fuerza;
		mostrarEstado();
	}
};

class Guerrero : public Personaje {
public:
	Guerrero(int _salud, int _fuerza) : Personaje(_salud, _fuerza) {};
	
	int atacar(){
		cout<<"Guerrero ataca con: "<<fuerza<<" de fuerza"<<endl;
		return fuerza;
	};
};

class Mago : public Personaje {
	
public:
	Mago(int _salud, int _fuerza) : Personaje(_salud, _fuerza) {};
	
	int lanzarHechizo(){
		cout<<"El mago lanza hechizo de: "<<fuerza<<" de fuerza"<<endl;
		return fuerza;
	};
		
};

int main (int argc, char *argv[]) {
	Guerrero g1(500,200);
	Mago m1(1000,80);
	
	//mostrar estados iniciales
	cout<<"Guerrero: "<<endl;
	g1.mostrarEstado();
	cout<<"Mago:"<<endl;
	m1.mostrarEstado();
	int ataque;
	//ataque de guerrero
	ataque = g1.atacar();
	m1.recibirDanio(ataque); //mago recibe daño
	//ataque de mago
	ataque= m1.lanzarHechizo(); //guerrero recibe daño
	g1.recibirDanio(ataque);

	return 0;
}

