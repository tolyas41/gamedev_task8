#pragma once
#include "Loader.h"

class FileLoader: public Loader {

public:
	virtual void Load(const Matrix& obj) override;
};

