#include <iostream>

#ifndef Emperor_H
#define Emperor_H

class Emperor
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
        Emperor();

        Emperor(int health, int mana, int strength, int defense, int agility, int magic, int exp);

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

Emperor::Emperor()
{
    health = 0;
    mana = 0;
    strength = 0;
    defense = 0;
    agility = 0;
    magic = 0;
    exp = 0;
}

Emperor::Emperor(int health, int mana, int strength, int defense, int agility, int magic, int exp)
{
    this->health = health;
    this->mana = mana;
    this->strength = strength;
    this->defense = defense;
    this->agility = agility;
    this->magic = magic;
    this->exp = exp;
}

int Emperor::getHealth()
{
    return health;
}

int Emperor::getMana()
{
    return mana;
}

int Emperor::getStrength()
{
    return strength;
}

int Emperor::getDefense()
{
    return defense;
}

int Emperor::getAgility()
{
    return agility;
}

int Emperor::getMagic()
{
    return magic;
}

int Emperor::getExp()
{
    return exp;
}


void Emperor::setHealth()
{
    this->health = 1000;
}

void Emperor::setMana()
{
    this->mana = 48;
}

void Emperor::setStrength()
{
    this->strength = 25;
}

void Emperor::setDefense()
{
    this->defense = 26;
}

void Emperor::setAgility()
{
    this->agility = 16;
}

void Emperor::setMagic()
{
    this->magic = 16;
}

void Emperor::setExp()
{
    this->exp = 0;
}