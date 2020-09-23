#pragma once

#include <iostream>
#include <fstream>

#define SIZE_OF_MAP 10

class SeaBattleGame
{
public:
	int** OurMAP, **EnemyMAP;
	SeaBattleGame();
	void insert_ship();
	void shot();
	void print_maps();
	void start_table();

};

