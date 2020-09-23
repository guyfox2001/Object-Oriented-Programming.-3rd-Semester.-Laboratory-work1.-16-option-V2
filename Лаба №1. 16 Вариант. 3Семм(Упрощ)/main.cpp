#include <iostream>
#include <iomanip>
#include <string>
#include"SeaBattleGame.h"

using namespace std;

int main() {
	SeaBattleGame OurGame;
	OurGame.start_table();
	OurGame.print_maps();
	int CountShips, CountShoots;
	//���������� ��������
	cout << "������� �������� ��������? (<10)\n";
	cin >> CountShips;
	for (int i = 0; i < CountShips; i++) {
		OurGame.insert_ship();
		OurGame.print_maps();
	}
	//�������� �� ����������
	cout << "������� ������� ���������? (<10)\n";
	cin >> CountShoots;
	for (int i = 0; i < CountShoots; i++) {
		OurGame.shot();
		OurGame.print_maps();
	}
	

	return 0;
}