#include <iostream>
#include <iomanip>
#include <string>
#include"SeaBattleGame.h"

using namespace std;

int main() {
	SeaBattleGame OurGame;
	OurGame.start_table();
	OurGame.print_maps();
	
	for (int i = 0; i < 10; i++) {
		OurGame.insert_ship();
		OurGame.print_maps();

	}

	return 0;
}