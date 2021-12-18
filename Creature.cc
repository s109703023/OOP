#include <bits/stdc++.h>
#include "Creature.h"
#include "RandomNum.h"

using namespace std;

Creature::Creature(char s)
{
        age = 0;
        sign = s;
        is_acted = false;
}

Creature::~Creature()
{

}

const int
Creature::getAge()
{
        return age;
}

const char
Creature::getSign()
{
        return sign;
}

void
Creature::increaseAge()
{
        ++age;
}

void
Creature::act(Creature *cell[20][35], int y, int x)
{

}

void
Creature::setIsActed(bool _is_act)
{
        is_acted = _is_act;
}

bool
Creature::getIsActed()
{
        return is_acted;
}

bool
Creature::die()
{
        return true;
}

int
Creature::getRandomNumber()
{
        return rand.getRandomNum(0,3);
}
