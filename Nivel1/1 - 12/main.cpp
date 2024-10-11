#include<iostream>
using namespace std;

class vidaExtra {
public: int vidas;

void agregarVida() {
	vidas++;
	cout << "Vidas: " << vidas << endl;
}
};

int main(int argc, char * argv[]) {
	vidaExtra vidasGame;
	vidasGame.vidas = 3;
	vidasGame.agregarVida();
	vidasGame.agregarVida();
	vidasGame.agregarVida();
	return 0;
}

