#include "Transactie.h"

Transactie::Transactie(float _bedrag, std::string _datum)
{
	bedrag = _bedrag;
	datum = _datum;
}

Transactie::~Transactie()
{
}

float Transactie::getBedrag() const
{
	return bedrag;
}

std::string Transactie::getDatum() const
{
	return datum;
}
