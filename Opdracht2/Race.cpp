#include "Race.h"
#include <iostream>
Race::Race()
{
}

Race::~Race()
{
}

void Race::render()
{
	std::cout << name + " ";
}
