#include<iostream>
using namespace std;

class portal {
public: 
	bool encendido;

portal() {
	encendido = false;
}

void encender() {
	encendido = true;
	cout << "Portal encendido" << endl;
}
};

int main(int argc, char * argv[]) {
	portal level1;
	level1.encender();
}

