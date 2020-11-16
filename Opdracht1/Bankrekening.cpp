#include "Bankrekening.h"
#include <iostream>
#include <list>
#include <iterator>

Bankrekening::Bankrekening(float _saldo, std::list<Transactie> _historie)
{
    saldo = _saldo;
    historie = _historie;
}

Bankrekening::~Bankrekening()
{
}

const float Bankrekening::getSaldo()
{
    return saldo;
}

Bankrekening Bankrekening::operator+(const Transactie& t) const
{
    std::list<Transactie> h = historie;
    h.push_back(t);
    return Bankrekening(saldo + t.getBedrag(), h);
}

Bankrekening Bankrekening::operator-(const Transactie& t) const
{
    std::list<Transactie> h = historie;
    h.push_back(t);
    return Bankrekening(saldo - t.getBedrag(), h);
}

Bankrekening& Bankrekening::addTransactie(const Transactie& t)
{
    std::list<Transactie> h = historie;
    h.push_back(t);
    saldo += t.getBedrag();

    return *this;
}

Bankrekening& Bankrekening::operator+=(const Transactie& t)
{
    return this->addTransactie(t);
}

std::ostream& operator<<(std::ostream &os, const Bankrekening &b)
{
    os << "Saldo: " << b.saldo << std::endl;

    std::list<Transactie> h = b.historie;
    os << "Transacties: " << std::endl;

    //voor elke transactie in de historie, put bedrag en datum in ostream
    for (std::list<Transactie>::iterator it = h.begin(); it != h.end(); ++it)
    {
        Transactie t = *it;
        os << "Bedrag: " << t.getBedrag() << ". Datum: " << t.getDatum() << std::endl;
    }

    return os;
}
