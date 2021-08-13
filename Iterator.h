#pragma once
#include "Matrix.h"

class Iterator {

public:
	virtual Matrix& GetFirst() = 0;
	virtual void GoNext() = 0;
};

