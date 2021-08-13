#pragma once
#include "Sorter.h"

class QuickSort: public Sorter {

public:
	virtual void Sort(std::vector<Matrix>& Matrices) override;
};

