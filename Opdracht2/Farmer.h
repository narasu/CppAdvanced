#pragma once
#include "Job.h"
class Farmer : public Job {
public:
	Farmer(Race* _race);
	virtual ~Farmer();
};