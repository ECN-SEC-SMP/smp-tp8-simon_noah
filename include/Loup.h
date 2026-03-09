#ifndef LOUP_H
#define LOUP_H

#include "Animal.h"

class Loup : public Animal
{
public:
    Loup(int maxX, int maxY);
    Loup(int maxX, int maxY, int a, int b);

    void setAttaque() override;
    void deplace(int maxX, int maxY) override;
};

#endif