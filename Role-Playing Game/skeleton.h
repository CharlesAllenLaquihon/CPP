#include <iostream>

#ifndef Skeleton_H
#define Skeleton_H

class Skeleton
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
        Skeleton();

        Skeleton(int health, int mana, int strength, int defense, int agility, int magic, int exp);

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

Skeleton::Skeleton()
{
    health = 0;
    mana = 0;
    strength = 0;
    defense = 0;
    agility = 0;
    magic = 0;
    exp = 0;
}

Skeleton::Skeleton(int health, int mana, int strength, int defense, int agility, int magic, int exp)
{
    this->health = health;
    this->mana = mana;
    this->strength = strength;
    this->defense = defense;
    this->agility = agility;
    this->magic = magic;
    this->exp = exp;
}

int Skeleton::getHealth()
{
    return health;
}

int Skeleton::getMana()
{
    return mana;
}

int Skeleton::getStrength()
{
    return strength;
}

int Skeleton::getDefense()
{
    return defense;
}

int Skeleton::getAgility()
{
    return agility;
}

int Skeleton::getMagic()
{
    return magic;
}

int Skeleton::getExp()
{
    return exp;
}


void Skeleton::setHealth()
{
    this->health = 80;
}

void Skeleton::setMana()
{
    this->mana = 0;
}

void Skeleton::setStrength()
{
    this->strength = 10;
}

void Skeleton::setDefense()
{
    this->defense = 8;
}

void Skeleton::setAgility()
{
    this->agility = 7;
}

void Skeleton::setMagic()
{
    this->magic = 0;
}

void Skeleton::setExp()
{
    this->exp = 10;
}