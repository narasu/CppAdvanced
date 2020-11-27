#pragma once
#include <string>

class Race {
protected:
	std::string name;
public:
	Race();
	virtual ~Race();
	
	void render();
};