#ifndef TRANSITION_H_INCLUDED
#define TRANSITION_H_INCLUDED
#include "Etat.h"


using namespace std;

class Transition
{

public:
    Transition();
    ~Transition();
private:
protected:
    Etat * entr�e;
    Etat * sortie;
    string lettre;

};

#endif // TRANSITION_H_INCLUDED
