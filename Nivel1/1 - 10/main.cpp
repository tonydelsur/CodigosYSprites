#include<iostream>
using namespace std;

class moneda {
public: 
	int valor;

moneda(int _valor) {
	valor = _valor;
}
void mostrar() {
	cout << "Moneda con valor de: " << valor << endl;
}

};

int main(int argc, char * argv[]) {
	moneda premio(20);
	premio.mostrar();
	return 0;
}
