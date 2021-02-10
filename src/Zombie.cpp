#include "Zombie.h"

Zombie::Zombie()
{
     pv = 100;
	nom = "ZombieA00";
	attack = 10;

}
Zombie::Zombie(string n){
    nom = n;
}

Zombie::~Zombie(){
    cerr <<getNom()<<" decede et va m'aider a prog" << endl;
}

int Zombie::getPv() const
{
	return pv;
}

void Zombie::setPv(int s) {
	if (s > 1000|| s < 0) {
		cerr <<"impossible" << endl;
		pv = 0;
	}
	else {
		pv = s;
	}
}

string Zombie::getNom() const
{
	return nom;
}

void Zombie::setNom(string n)
{
	nom = n;
}

int Zombie::getAttack() const
{
	return attack;
}

void Zombie::setAttack(int a)
{
	if (a < 0) {
        cerr <<" impossible " << endl;
		attack = 0;
	}
	else {
		attack = a;
	}
}




void Zombie::showInfos() const
{
	cout << "nom : " << getNom() << endl;
	cout << "pv : " << getPv() << endl;
	cout << "attack : " << getAttack() << endl;
}


void Zombie::attackZombie(Zombie* cible){
        cible->setPv(cible->getPv() - getAttack());
    }

//void Zombie::askInfos(zombie){


//}


