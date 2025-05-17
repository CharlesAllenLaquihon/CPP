#include <iostream>

#ifndef Goblin_H
#define Goblin_H

class Goblin
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
        Goblin();

        Goblin(int health, int mana, int strength, int defense, int agility, int magic, int exp);

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

Goblin::Goblin()
{
    health = 0;
    mana = 0;
    strength = 0;
    defense = 0;
    agility = 0;
    magic = 0;
    exp = 0;
}

Goblin::Goblin(int health, int mana, int strength, int defense, int agility, int magic, int exp)
{
    this->health = health;
    this->mana = mana;
    this->strength = strength;
    this->defense = defense;
    this->agility = agility;
    this->magic = magic;
    this->exp = exp;
}

int Goblin::getHealth()
{
    return health;
}

int Goblin::getMana()
{
    return mana;
}

int Goblin::getStrength()
{
    return strength;
}

int Goblin::getDefense()
{
    return defense;
}

int Goblin::getAgility()
{
    return agility;
}

int Goblin::getMagic()
{
    return magic;
}

int Goblin::getExp()
{
    return exp;
}


void Goblin::setHealth()
{
    this->health = 20;
}

void Goblin::setMana()
{
    this->mana = 0;
}

void Goblin::setStrength()
{
    this->strength = 3;
}

void Goblin::setDefense()
{
    this->defense = 0;
}

void Goblin::setAgility()
{
    this->agility = 4;
}

void Goblin::setMagic()
{
    this->magic = 0;
}

void Goblin::setExp()
{
    this->exp = 3;
}