#include <iostream>
#include "etat.h"
#include "transition.h"
#include <vector>

using namespace std;

Etat::Etat()
{

}

Etat::~Etat()
{

}

Etat::Attacher(Transition &Transition1)
    {
    TrList.push_back(&Transition1);
    Transition1.Attacher_en_retour(*this);
    }

Etat::Attacher_en_retour(Transition &Transition1)
    {
        TrList.push_back(&Transition1);
    }
