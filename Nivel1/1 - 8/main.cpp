#include<iostream>
using namespace std;

class vehiculo {
public: int velocidad;

void incrementaVelocidad() {
	velocidad++;
	cout << "Nueva velocidad: " << velocidad << endl;
}
};

int main(int argc, char * argv[]) {
	vehiculo autito;
	autito.velocidad = 100;
	autito.incrementaVelocidad();
	autito.incrementaVelocidad();
	autito.incrementaVelocidad();
	autito.incrementaVelocidad();
	
	return 0;
}
