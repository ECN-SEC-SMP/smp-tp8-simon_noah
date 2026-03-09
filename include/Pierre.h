#ifndef PIERRE_H
#define PIERRE_H

#include "Animal.h"

class Pierre : public Animal
{
public:
    Pierre(int maxX, int maxY);
    Pierre(int maxX, int maxY, int a, int b);

    void setAttaque() override;
    void deplace(int maxX, int maxY) override;
};

#endif