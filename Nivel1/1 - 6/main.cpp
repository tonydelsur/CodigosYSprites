#include<iostream>
using namespace std;

class poder {
public: int duracion;

void reducirDuracion() {
	duracion--;
}
};

int main(int argc, char * argv[]) {
	poder p1;
	p1.duracion = 20;
	p1.reducirDuracion();
	cout << "Duracion: " << p1.duracion << endl;
	p1.reducirDuracion();
	cout << "Duracion: " << p1.duracion << endl;
	p1.reducirDuracion();
	cout << "Duracion: " << p1.duracion << endl;
	return 0;
}
