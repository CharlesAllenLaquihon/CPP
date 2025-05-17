#include <iostream>

#ifndef Willow_H
#define Willow_H

class Willow
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
        Willow();

        Willow(int health, int mana, int strength, int defense, int agility, int magic, int exp);

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

Willow::Willow()
{
    health = 0;
    mana = 0;
    strength = 0;
    defense = 0;
    agility = 0;
    magic = 0;
    exp = 0;
}

Willow::Willow(int health, int mana, int strength, int defense, int agility, int magic, int exp)
{
    this->health = health;
    this->mana = mana;
    this->strength = strength;
    this->defense = defense;
    this->agility = agility;
    this->magic = magic;
    this->exp = exp;
}

int Willow::getHealth()
{
    return health;
}

int Willow::getMana()
{
    return mana;
}

int Willow::getStrength()
{
    return strength;
}

int Willow::getDefense()
{
    return defense;
}

int Willow::getAgility()
{
    return agility;
}

int Willow::getMagic()
{
    return magic;
}

int Willow::getExp()
{
    return exp;
}


void Willow::setHealth()
{
    this->health = 55;
}

void Willow::setMana()
{
    this->mana = 24;
}

void Willow::setStrength()
{
    this->strength = 7;
}

void Willow::setDefense()
{
    this->defense = 6;
}

void Willow::setAgility()
{
    this->agility = 6;
}

void Willow::setMagic()
{
    this->magic = 5;
}

void Willow::setExp()
{
    this->exp = 7;
}