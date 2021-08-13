#pragma once
#include "Loader.h"

class ConsoleLoader: public Loader {

public:
	virtual void Load(const Matrix& obj) override;
};

