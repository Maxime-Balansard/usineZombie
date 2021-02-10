#include "Bomber.h"

Bomber::Bomber()
{
    setAttack(20);
    setNom("bomber");
    setPv(100);

}

Bomber::Bomber(int a,int p,string n){
    setAttack(a);
    setPv(p);
    setNom(n);
}

void Bomber::Explosion(Zombie &cible){
    cible->setPv(cible->getPv() - (getAttack()*3));

}
