#include <iostream>

#ifndef Priest_H
#define Priest_H

class Priest
{
    private:
        int health;
        int mana;
        int strength;
        int defense;
        int agility;
        int magic;

    public: 
        Priest();

        Priest(int health, int mana, int strength, int defense, int agility, int magic);

        int getHealth();
        int getMana();
        int getStrength();
        int getDefense();
        int getAgility();
        int getMagic();

        void setHealth();
        void setMana();
        void setStrength();
        void setDefense();
        void setAgility();
        void setMagic();
};
#endif

Priest::Priest()
{
    health = 0;
    mana = 0;
    strength = 0;
    defense = 0;
    agility = 0;
    magic = 0;
}

Priest::Priest(int health, int mana, int strength, int defense, int agility, int magic)
{
    this->health = health;
    this->mana = mana;
    this->strength = strength;
    this->defense = defense;
    this->agility = agility;
    this->magic = magic;
}

int Priest::getHealth()
{
    return health;
}

int Priest::getMana()
{
    return mana;
}

int Priest::getStrength()
{
    return strength;
}

int Priest::getDefense()
{
    return defense;
}

int Priest::getAgility()
{
    return agility;
}

int Priest::getMagic()
{
    return magic;
}


void Priest::setHealth()
{
    this->health = 35;
}

void Priest::setMana()
{
    this->mana = 18;
}

void Priest::setStrength()
{
    this->strength = 7;
}

void Priest::setDefense()
{
    this->defense = 6;
}

void Priest::setAgility()
{
    this->agility = 4;
}

void Priest::setMagic()
{
    this->magic = 3;
}