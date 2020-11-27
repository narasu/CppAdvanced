// Opdracht2
#include <iostream>
#include "Orc.h"
#include "Elf.h"
#include "Soldier.h"
#include "Shaman.h"
#include "Farmer.h"

int main()
{
    Shaman* orcShaman = new Shaman(new Orc());
    orcShaman->render();
    delete(orcShaman);

    Soldier* elfSoldier = new Soldier(new Elf());
    elfSoldier->render();
    delete(elfSoldier);

    Farmer* orcFarmer = new Farmer(new Orc());
    orcFarmer->render();
    delete(orcFarmer);
}