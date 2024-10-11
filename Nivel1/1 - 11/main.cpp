#include<iostream>
#include <ctime>
using namespace std;

class reloj {
public: time_t inicio; // tipo de dato de tiempoque cuenta los segundos
// desde el 1 de enero de 1970 a las 00:00:00 UTC

reloj() {
	inicio = time(0); // captura el tiempo actual en segundos
}

void mostrarTiempoTrasncurrido() {
	time_t ahora = time(0); // captura el tiempo actual
	cout << " Tiempo transcurrido: " << ahora - inicio << " segundos" << endl;
	
}

};

int main(int argc, char * argv[]) {
	reloj cronometro;
	cronometro.mostrarTiempoTrasncurrido();
	return 0;
}
