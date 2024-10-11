#include<iostream>
using namespace std;

class Escudo {
public: int defensa;

void mostrarDefensa() {
	cout << "Defensa: " << defensa << endl;
}
};

int main(int argc, char * argv[]) {
	Escudo e1;
	e1.defensa = 100;
	e1.mostrarDefensa();
	return 0;
}
