#include <iostream>

#ifndef General_H
#define General_H

class General
{
    private:
        int health;
        int mana;
        int strength;
        int defense;
        int agility;
        int magic;
        int exp;

    public: 
        General();

        General(int health, int mana, int strength, int defense, int agility, int magic, int exp);

        int getHealth();
        int getMana();
        int getStrength();
        int getDefense();
        int getAgility();
        int getMagic();
        int getExp();   

        void setHealth();
        void setMana();
        void setStrength();
        void setDefense();
        void setAgility();
        void setMagic();
        void setExp();
};
#endif

General::General()
{
    health = 0;
    mana = 0;
    strength = 0;
    defense = 0;
    agility = 0;
    magic = 0;
    exp = 0;
}

General::General(int health, int mana, int strength, int defense, int agility, int magic, int exp)
{
    this->health = health;
    this->mana = mana;
    this->strength = strength;
    this->defense = defense;
    this->agility = agility;
    this->magic = magic;
    this->exp = exp;
}

int General::getHealth()
{
    return health;
}

int General::getMana()
{
    return mana;
}

int General::getStrength()
{
    return strength;
}

int General::getDefense()
{
    return defense;
}

int General::getAgility()
{
    return agility;
}

int General::getMagic()
{
    return magic;
}

int General::getExp()
{
    return exp;
}


void General::setHealth()
{
    this->health = 500;
}

void General::setMana()
{
    this->mana = 36;
}

void General::setStrength()
{
    this->strength = 20;
}

void General::setDefense()
{
    this->defense = 24;
}

void General::setAgility()
{
    this->agility = 12;
}

void General::setMagic()
{
    this->magic = 12;
}

void General::setExp()
{
    this->exp = 200;
}