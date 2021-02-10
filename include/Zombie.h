#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>


using namespace std;

class Zombie
{
    private:
        int pv = 100;
	string nom = "ZombieaA01";
	int attack = 10;


    protected:

    public:
     //CONSTRUCTEURS
    Zombie();
    Zombie(int p, int a);
    Zombie(string n);

    //DESTRUCTEUR
    ~Zombie();


    //GETTER/SETTER PV
	int getPv() const;
	void setPv(int s);

    //GETTER/SETTER NOM
	string getNom() const;
	void setNom(string n);

	//GETTER/SETTER ATTACK
	int getAttack() const;
	void setAttack(int a);

	//AFFICHE LES INFOS DU PERSO
	void showInfos() const;

	 void attackZombie(Zombie* cible);
};

#endif // ZOMBIE_H
