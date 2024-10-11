#include<iostream>
using namespace std;

class nivel {
public: int level;

mostrarNivel() {
	cout << "Bienvenid@ al nivel: " << level << endl;
}
};

int main(int argc, char * argv[]) {
	nivel niv;
	niv.level = 2;
	niv.mostrarNivel();
	return 0;
}
