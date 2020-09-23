#include "SeaBattleGame.h"

SeaBattleGame::SeaBattleGame()
{
	std::ifstream InMapStream;
	std::ofstream OutMapStream;
	this->OurMAP = new int* [SIZE_OF_MAP];
	this->EnemyMAP = new int* [SIZE_OF_MAP];

	for (int i = 0; i < SIZE_OF_MAP; i++) {
		this->OurMAP[i] = new int[SIZE_OF_MAP];
		this->EnemyMAP[i] = new int[SIZE_OF_MAP];
	}
	InMapStream.open("MapEnemy.txt", std::ios::binary);

	for (size_t i = 0; i < SIZE_OF_MAP; i++)
	{
		for (size_t j = 0; j < SIZE_OF_MAP; j++)
		{
			this->OurMAP[i][j] = 0;
			InMapStream >> this->EnemyMAP[i][j];
		}
	}
	InMapStream.close();
}

void SeaBattleGame::insert_ship()
{
	int TYPE_SHIP = 0 ;
	std::cout << "Введите тип корабля\n";
	std::cout << "1 - Одноклеточный\n";
	std::cout << "2 - Двухклеточный\n";
	std::cout << "3 - Трёхклеточный\n";
	std::cout << "4 - Четырёхклеточный\n";

	while (true)
	{
		std::cin >> TYPE_SHIP;
		if (TYPE_SHIP >= 1 && TYPE_SHIP <= 4) break;
		else std::cout << "Ошибка\n";
	}
	switch (TYPE_SHIP)
	{
	case 1: {
		int xPos, yPos;
		std::cout << "Введите координаты X-строку (1<x<10) и Y-столб (1<y<10)\n";
		while (true)
		{
			std::cin >> xPos >> yPos;

			if (xPos>= 1 && yPos >= 1 && xPos <= 10 && yPos <= 10) break;
			else std::cout << "Ошибка\n";
		}
		this->OurMAP[xPos - 1][yPos - 1] = 1;

		break;
	}
	case 2:
	{
		int xPos, yPos;
		for (int i = 0; i < 2; ++i) {
			std::cout << "Введите координаты X-строку (1<x<10) и Y-столб (1<y<10)\n";
			while (true)
			{
				std::cin >> xPos >> yPos;

				if (xPos >= 1 && yPos >= 1 && xPos <= 10 && yPos <= 10) break;
				else std::cout << "Ошибка\n";
			}
			this->OurMAP[xPos - 1][yPos - 1] = 1;

		}
		break;
	}
	case 3:
	{
		int xPos, yPos;
		for (int i = 0; i < 3; ++i) {
			std::cout << "Введите координаты X-строку (1<x<10) и Y-столб (1<y<10)\n";
			while (true)
			{
				std::cin >> xPos >> yPos;

				if (xPos >= 1 && yPos >= 1 && xPos <= 10 && yPos <= 10) break;
				else std::cout << "Ошибка\n";
			}
			this->OurMAP[xPos - 1][yPos - 1] = 1;

		}
		break;
	}
		
	case 4:
	{
		int xPos, yPos;
		for (int i = 0; i < 4; ++i) {
			std::cout << "Введите координаты X-строку (1<x<10) и Y-столб (1<y<10)\n";
			while (true)
			{
				std::cin >> xPos >> yPos;

				if (xPos >= 1 && yPos >= 1 && xPos <= 10 && yPos <= 10) break;
				else std::cout << "Ошибка\n";
			}
			this->OurMAP[xPos - 1][yPos - 1] = 1;

		}
		break;
	}
	}
}

void SeaBattleGame::print_maps()
{
	std::cout << "-------------------------OUR MAP-------------------------\n";
	for (int i = 0; i < SIZE_OF_MAP; ++i) {
		for (int j = 0; j < SIZE_OF_MAP; ++j) {
			std::cout << this->OurMAP[i][j] << " ";
		}
		std::cout << "               ";
		for (int j = 0; j < SIZE_OF_MAP; ++j) {
			std::cout << this->EnemyMAP[i][j] << " ";
		}
		std::cout << '\n';
	}
	std::cout << "   \n";
}

void SeaBattleGame::start_table()
{
	setlocale(LC_ALL, "Rus");
	std::cout << "Добро пожаловать!\n";
	std::cout << "Это реализация двух механик морского боя\n";
	std::cout << "1. Поставить на своё поле Корабль (одно- , дву- , трёх- , четырёх- клеточные)\n";
	std::cout << "2. Выстрелить по полю противника \n";
	std::cout << "И так начинаем. \n";
	
}
