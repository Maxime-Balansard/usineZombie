#ifndef RAPACE_H
#define RAPACE_H

#include <string>
#include "Zombie.h"

using namespace std;

class Rapace: public Zombie
{
    private:

    public:
        Rapace();
        Rapace(int,int,string);
        //void Explosion(Zombie &cible);

};

#endif // Bomber_h
