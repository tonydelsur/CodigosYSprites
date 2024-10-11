#include<iostream>
using namespace std;

class proyectil {
public: int velocidad;

proyectil(int _velocidad) {
	velocidad = _velocidad;
}
int desplazamiento(int _tiempo) {
	int distancia;
	distancia = velocidad * _tiempo;
	return distancia;
}
};

int main(int argc, char * argv[]) {
	proyectil bala(60);
	int distanciaRecorrida;
	distanciaRecorrida = bala.desplazamiento(15);
	cout << "El proyectil recorre: " << distanciaRecorrida << " metros a " << bala.velocidad << " m/s" << endl;
	
	return 0;
	
}

