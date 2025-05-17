#include <iostream>

#ifndef Captain_H
#define Captain_H

class Captain
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
        Captain();

        Captain(int health, int mana, int strength, int defense, int agility, int magic, int exp);

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

Captain::Captain()
{
    health = 0;
    mana = 0;
    strength = 0;
    defense = 0;
    agility = 0;
    magic = 0;
    exp = 0;
}

Captain::Captain(int health, int mana, int strength, int defense, int agility, int magic, int exp)
{
    this->health = health;
    this->mana = mana;
    this->strength = strength;
    this->defense = defense;
    this->agility = agility;
    this->magic = magic;
    this->exp = exp;
}

int Captain::getHealth()
{
    return health;
}

int Captain::getMana()
{
    return mana;
}

int Captain::getStrength()
{
    return strength;
}

int Captain::getDefense()
{
    return defense;
}

int Captain::getAgility()
{
    return agility;
}

int Captain::getMagic()
{
    return magic;
}

int Captain::getExp()
{
    return exp;
}


void Captain::setHealth()
{
    this->health = 120;
}

void Captain::setMana()
{
    this->mana = 24;
}

void Captain::setStrength()
{
    this->strength = 15;
}

void Captain::setDefense()
{
    this->defense = 16;
}

void Captain::setAgility()
{
    this->agility = 9;
}

void Captain::setMagic()
{
    this->magic = 12;
}

void Captain::setExp()
{
    this->exp = 50;
}