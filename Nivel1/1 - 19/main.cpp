#include<iostream>
#include <conio2.h>
using namespace std;

using namespace std;

class meteorito {
public: int x,
	y;

meteorito() {
	x = 40;
	y = 3;
}

void caida() {
	for (int i = 3; i < 25; i++) {
		y = i;
		gotoxy(x, y);
		clrscr();
		cout << "O";
	}
	y = 3;
}

};

int main(int argc, char * argv[]) {
	meteorito asteroid;
	gotoxy(asteroid.x, asteroid.y);
	cout << "O";
	char tecla;
	tecla = getch();
	if (tecla = 80) {
		asteroid.caida();
	}
	
}
