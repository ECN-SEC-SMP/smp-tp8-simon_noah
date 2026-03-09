#ifndef ALEA_H
#define ALEA_H

#include <stdlib.h>
#include <time.h>

class Alea
{
private:
    /* data */
public:
    Alea();
    ~Alea();

    int aleaGen(int min, int max);
};

Alea::Alea()
{
    srand(time(NULL));
}

int Alea::aleaGen(int min, int max)
{
    int r = min + rand() % (max - min + 1);
    return r;
}


Alea::~Alea()
{
}


#endif