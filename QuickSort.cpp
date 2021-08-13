#include "QuickSort.h"
#include <algorithm>
#include <vector>

void QuickSort::Sort(std::vector<Matrix>& Matrices) {
	std::sort(Matrices.begin(), Matrices.end(), [](Matrix a, Matrix b) {
		return (a.DiagonalsProduct() < b.DiagonalsProduct()); 
		}
	);
}