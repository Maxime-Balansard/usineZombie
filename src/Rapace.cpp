#include "Rapace.h"

Rapace::Rapace()
{
    setAttack(5);
    setNom("Rapace");
    setPv(50);
    setAttacRapide(2.5);

}

Rapace::Rapace(int a,int p,string n){
    setAttack(a);
    setPv(p);
    setNom(n);
}

void Rapace::AttackRapide(zombie& cible){

    cible->setPv( cible->getPv() + (getHeal()*2));

}

