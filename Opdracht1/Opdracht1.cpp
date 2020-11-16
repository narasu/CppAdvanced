// Opdracht1

#include <iostream>

#include "Bankrekening.h"
#include "Transactie.h"

int main()
{
    Bankrekening bankrekening = Bankrekening(0.0f, std::list<Transactie>());

    bankrekening = bankrekening + Transactie(10.0f, "14/11/2020");

    std::cout << bankrekening;
}