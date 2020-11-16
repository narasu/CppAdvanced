#pragma once
#include <string>

class Transactie {
private:
	float bedrag;
	std::string datum;
public:
	Transactie(float _bedrag, std::string _datum);
	virtual ~Transactie();
	
	float getBedrag() const;
	std::string getDatum() const;
};