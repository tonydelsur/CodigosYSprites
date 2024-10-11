#include<iostream>
using namespace std;

class enemigo {
public: int fuerza;

int calcularFuerza() {
	return fuerza * 2;
}
};

int main(int argc, char * argv[]) {
	enemigo e1;
	e1.fuerza = 500;
	cout << "Puede hacer " << e1.calcularFuerza() << " de daño" << endl;
	return 0;
}
