#pragma once
#include <string>
#include "Race.h"

class Job : public Race {
protected:
	std::string jobTitle;
private:
	Race* race;
public:
	Job(Race* _race);
	virtual ~Job();

	void render();
};