#include "Job.h"
#include <iostream>
Job::Job(Race* _race)
{
	race = _race;
}

Job::~Job()
{
	if (race)
		delete(race);
}

void Job::render()
{
	race->render();
	std::cout << jobTitle << std::endl << std::endl;
}
