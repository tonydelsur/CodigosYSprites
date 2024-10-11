#include<iostream>
using namespace std;

class enemigoVolador{
public:
	int altitud;
	
	enemigoVolador(int _altitud){
		altitud = _altitud;
	}
		
		void mostrarAltitud(){
			cout<<"Altitud: "<<altitud<<endl;
		}
				
};

int main (int argc, char *argv[]) {
	enemigoVolador enemigo1(300);
	enemigo1.mostrarAltitud();
	return 0;
}

