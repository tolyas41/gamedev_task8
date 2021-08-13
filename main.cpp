#include "Matrix.h"
#include "ConsoleLoader.h"
#include "FileLoader.h"
#include "QuickSort.h"
#include "UsualSort.h"
#include <vector>
#include <iostream>
#include "Container.h"


int main() {


	Matrix obj0(5, 3, 3);
	Matrix obj1(1, 2, 2);
	Matrix obj2(2, 4, 4);
	Matrix obj3(3, 3, 3);
	Matrix obj4(4, 3, 3);
	Matrix obj5(5, 3, 3);

	Container mat1;

	mat1.PushBack(obj0);
	mat1.PushBack(obj1);
	mat1.PushBack(obj2);
	mat1.PushBack(Matrix(33, 2, 2));

	mat1.EmplaceBack(2, 3, 2);

	//mat1.PrintMatrices();
	//mat1.PopBack();
	//mat1.PopBack();
	//mat1.PrintMatrices();

	FileLoader file_load;
	//ConsoleLoader console_load;
	mat1.AddMatrix(file_load, obj0);
	//mat1.DeleteMatrix(6);

	mat1.SortMatrices();

	for (Container::Iterator it = mat1.begin();
		it != mat1.end(); it.GoNext())
	{
		it->print_array();
	}



	//mat1.AddMatrix(file_load, obj0);
	//mat1.AddMatrix(file_load, obj0);
	//mat1.AddMatrix(file_load, obj0);
	//mat1.AddMatrix(console_load, obj1);

	//mat1[1] = obj5;
	//mat1[2] = obj4;
	//mat1[3] = obj1;


	//mat1.DeleteMatrix(4);
	//mat1.PrintMatrices();






	//UsualSort usual_sorter;
	//mat1.SortMatrices(usual_sorter);
	//mat1.PrintMatrices();

	//mat1.GetFirst().print_array();







	//Matrix matrix_from_file(0, 3, 3);
	//FileLoader file_load;
	//file_load.Load(matrix_from_file);
	//matrix_from_file.print_array();

	//Matrix matrix_from_console(0, 2, 2);
	//ConsoleLoader console_load;
	//console_load.Load(matrix_from_console);
	//matrix_from_console.print_array();


	//std::vector<Matrix> Matrices_usual;
	//Matrix obj0(0, 3, 3);
	//Matrix obj1(1, 3, 3);
	//Matrix obj2(2, 3, 3);
	//Matrix obj3(3, 3, 3);
	//Matrix obj4(4, 3, 3);
	//Matrix obj5(5, 3, 3);
	//Matrices_usual.push_back(obj0);
	//Matrices_usual.push_back(obj3);
	//Matrices_usual.push_back(obj5);
	//Matrices_usual.push_back(obj2);
	//Matrices_usual.push_back(obj4);
	//Matrices_usual.push_back(obj1);
	//UsualSort usual_sort;
	//usual_sort.Sort(Matrices_usual);
	//std::cout << "\nUsual Sort\n";
	//for (auto v : Matrices_usual) {
	//	v.print_array();
	//}

	//std::vector<Matrix> Matrices_quick;
	//Matrices_quick.push_back(obj0);
	//Matrices_quick.push_back(obj3);
	//Matrices_quick.push_back(obj5);
	//Matrices_quick.push_back(obj2);
	//Matrices_quick.push_back(obj4);
	//Matrices_quick.push_back(obj1);
	//QuickSort quick_sort;
	//quick_sort.Sort(Matrices_quick);
	//std::cout << "\nQuick Sort\n";
	//for (auto v : Matrices_quick) {
	//	v.print_array();
	//}




	return 0;
}

