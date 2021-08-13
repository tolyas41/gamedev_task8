#include "FileLoader.h"
#include <fstream>

void FileLoader::Load(const Matrix& obj) {
	std::ifstream in_file;
	in_file.open("array.txt");
	for (int i = 0; i < obj.rows; i++) {
		for (int j = 0; j < obj.columns; j++) {
			in_file >> obj.data[i][j];
		}
	}
	in_file.close();
}
