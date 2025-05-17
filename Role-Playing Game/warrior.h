#include <iostream>

#ifndef WARRIOR_H
#define WARRIOR_H

class Warrior
{
    private:
        int health;
        int mana;
        int strength;
        int defense;
        int agility;
        int magic;

    public: 
        Warrior();

        Warrior(int health, int mana, int strength, int defense, int agility, int magic);

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

Warrior::Warrior()
{
    health = 0;
    mana = 0;
    strength = 0;
    defense = 0;
    agility = 0;
    magic = 0;
}

Warrior::Warrior(int health, int mana, int strength, int defense, int agility, int magic)
{
    this->health = health;
    this->mana = mana;
    this->strength = strength;
    this->defense = defense;
    this->agility = agility;
    this->magic = magic;
}

int Warrior::getHealth()
{
    return health;
}

int Warrior::getMana()
{
    return mana;
}

int Warrior::getStrength()
{
    return strength;
}

int Warrior::getDefense()
{
    return defense;
}

int Warrior::getAgility()
{
    return agility;
}

int Warrior::getMagic()
{
    return magic;
}


void Warrior::setHealth()
{
    this->health = 35;
}

void Warrior::setMana()
{
    this->mana = 18;
}

void Warrior::setStrength()
{
    this->strength = 7;
}

void Warrior::setDefense()
{
    this->defense = 6;
}

void Warrior::setAgility()
{
    this->agility = 4;
}

void Warrior::setMagic()
{
    this->magic = 3;
}