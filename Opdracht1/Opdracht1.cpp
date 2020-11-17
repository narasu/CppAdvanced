// Opdracht1

#include <iostream>

#include "Bankrekening.h"
#include "Transactie.h"

int main()
{
    Bankrekening bankrekening = Bankrekening(0.0f, std::list<Transactie>());
    std::cout << bankrekening;

    bankrekening = bankrekening + Transactie(10.0f, "14/11/2020");

    Transactie t1 = Transactie(25.0f, "17/11/2020");

    bankrekening += t1;

    std::cout << bankrekening;
}