#include <iostream>

#ifndef Wolf_H
#define Wolf_H

class Wolf
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
        Wolf();

        Wolf(int health, int mana, int strength, int defense, int agility, int magic, int exp);

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

Wolf::Wolf()
{
    health = 0;
    mana = 0;
    strength = 0;
    defense = 0;
    agility = 0;
    magic = 0;
    exp = 0;
}

Wolf::Wolf(int health, int mana, int strength, int defense, int agility, int magic, int exp)
{
    this->health = health;
    this->mana = mana;
    this->strength = strength;
    this->defense = defense;
    this->agility = agility;
    this->magic = magic;
    this->exp = exp;
}

int Wolf::getHealth()
{
    return health;
}

int Wolf::getMana()
{
    return mana;
}

int Wolf::getStrength()
{
    return strength;
}

int Wolf::getDefense()
{
    return defense;
}

int Wolf::getAgility()
{
    return agility;
}

int Wolf::getMagic()
{
    return magic;
}

int Wolf::getExp()
{
    return exp;
}


void Wolf::setHealth()
{
    this->health = 35;
}

void Wolf::setMana()
{
    this->mana = 10;
}

void Wolf::setStrength()
{
    this->strength = 4;
}

void Wolf::setDefense()
{
    this->defense = 4;
}

void Wolf::setAgility()
{
    this->agility = 10;
}

void Wolf::setMagic()
{
    this->magic = 4;
}

void Wolf::setExp()
{
    this->exp = 5;
}