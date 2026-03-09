#ifndef LION_H
#define LION_H

#include "Animal.h"

class Lion : public Animal
{
public:
    Lion(int maxX, int maxY);
    Lion(int maxX, int maxY, int a, int b);

    void setAttaque() override;
    void deplace(int maxX, int maxY) override;
};

#endif