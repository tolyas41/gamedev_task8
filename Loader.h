#pragma once
#include "Matrix.h"

class Loader {

public:
	virtual void Load(const Matrix& obj) = 0;
};

