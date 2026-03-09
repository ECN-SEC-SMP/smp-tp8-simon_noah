#ifndef OURS_H
#define OURS_H

#include "Animal.h"

class Ours : public Animal
{
public:
    Ours(int maxX, int maxY);
    Ours(int maxX, int maxY, int a, int b);

    void setAttaque() override;
    void deplace(int maxX, int maxY) override;
};

#endif