#include "ConsoleLoader.h"
#include <iostream>

void ConsoleLoader::Load(const Matrix& obj) {
	std::cout << "Enter the data " << obj.columns * obj.rows << " times\n";
	for (int i = 0; i < obj.rows; i++) {
		for (int j = 0; j < obj.columns; j++) {
			std::cin >> obj.data[i][j];
		}
	}
}
