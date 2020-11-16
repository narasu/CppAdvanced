#pragma once

#include <list>
#include <string>
#include "Transactie.h"

class Bankrekening {
private:
	float saldo;
	std::list<Transactie> historie;
public:
	Bankrekening(float _saldo, std::list<Transactie> _historie);
	virtual ~Bankrekening();

	const float getSaldo();
	
	Bankrekening operator+(const Transactie& t) const;
	Bankrekening operator-(const Transactie& t) const;

	Bankrekening& addTransactie(const Transactie& t);
	Bankrekening& operator+=(const Transactie& t);

	friend std::ostream& operator<<(std::ostream &os, const Bankrekening &b);
};