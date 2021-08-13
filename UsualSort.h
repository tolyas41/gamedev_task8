#pragma once
#include "Sorter.h"
#include "Container.h"

class UsualSort: public Sorter {

public:
	virtual void Sort(std::vector<Matrix>& Matrices) override;
};

