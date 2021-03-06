#include <iostream>
#include "transition.h"
#include "etat.h"
#include <vector>

using namespace std;

Transition::Transition(string _lettre)
{
lettre = _lettre;
}

Transition::~Transition()
{

}

void Transition::AttacherEntree(Etat *Etat1)
{
    EtEntree = Etat1;
    Etat1->Attacher_en_retour(*this);
}

void Transition::AttacherSortie (Etat *Etat1)
{
    EtEntree = Etat1;
    Etat1->Attacher_en_retour(*this);
}

void Transition::Attacher_Entree_en_retour(Etat *Etat1)
{
    EtEntree = Etat1;
}

void Transition::Attacher_Sortie_en_retour(Etat *Etat1)
{
    EtSortie = Etat1;
}

// Getters

string Transition::get_letter()
{
    return lettre;
};

Etat* Transition::get_EtEntree(){
    return EtEntree;
};

Etat* Transition::get_EtSortie(){
    return EtSortie;
};
