#pragma once
#include "Matrix.h"
#include <vector>

class Sorter {

public:
	virtual void Sort(std::vector<Matrix>& Matrices) = 0;
};

