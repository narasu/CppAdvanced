#pragma once
#include "Job.h"
class Soldier : public Job {
public:
	Soldier(Race* _race);
	virtual ~Soldier();
};