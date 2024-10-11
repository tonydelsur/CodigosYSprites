#include<iostream>
using namespace std;

class energia {
public: int cantidad;

energia() {
	cantidad = 10;
}

void consumir() {
	if (cantidad > 0) {
		cantidad--;
		cout << "Energia: " << cantidad << endl;
	}
}
};

int main(int argc, char * argv[]) {
	energia power;
	power.consumir();
	power.consumir();
	power.consumir();
}

