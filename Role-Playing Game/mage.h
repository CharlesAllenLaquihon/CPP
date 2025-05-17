#include <iostream>

#ifndef Mage_H
#define Mage_H

class Mage
{
    private:
        int health;
        int mana;
        int strength;
        int defense;
        int agility;
        int magic;

    public: 
        Mage();

        Mage(int health, int mana, int strength, int defense, int agility, int magic);

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

Mage::Mage()
{
    health = 0;
    mana = 0;
    strength = 0;
    defense = 0;
    agility = 0;
    magic = 0;
}

Mage::Mage(int health, int mana, int strength, int defense, int agility, int magic)
{
    this->health = health;
    this->mana = mana;
    this->strength = strength;
    this->defense = defense;
    this->agility = agility;
    this->magic = magic;
}

int Mage::getHealth()
{
    return health;
}

int Mage::getMana()
{
    return mana;
}

int Mage::getStrength()
{
    return strength;
}

int Mage::getDefense()
{
    return defense;
}

int Mage::getAgility()
{
    return agility;
}

int Mage::getMagic()
{
    return magic;
}


void Mage::setHealth()
{
    this->health = 60;
}

void Mage::setMana()
{
    this->mana = 18;
}

void Mage::setStrength()
{
    this->strength = 5;
}

void Mage::setDefense()
{
    this->defense = 6;
}

void Mage::setAgility()
{
    this->agility = 4;
}

void Mage::setMagic()
{
    this->magic = 3;
}