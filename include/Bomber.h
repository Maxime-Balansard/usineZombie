#ifndef BOMBER_H
#define BOMBER_H

#include <string>
#include "Zombie.h"

using namespace std;

class Bomber: public Zombie
{
    private:

    public:
        Bomber();
        Bomber(int,int,string);
        void Explosion(Zombie &cible);

};

#endif // Bomber_h
