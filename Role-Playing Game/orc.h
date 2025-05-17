#include <iostream>

#ifndef Orc_H
#define Orc_H

class Orc
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
        Orc();

        Orc(int health, int mana, int strength, int defense, int agility, int magic, int exp);

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

Orc::Orc()
{
    health = 0;
    mana = 0;
    strength = 0;
    defense = 0;
    agility = 0;
    magic = 0;
    exp = 0;
}

Orc::Orc(int health, int mana, int strength, int defense, int agility, int magic, int exp)
{
    this->health = health;
    this->mana = mana;
    this->strength = strength;
    this->defense = defense;
    this->agility = agility;
    this->magic = magic;
    this->exp = exp;
}

int Orc::getHealth()
{
    return health;
}

int Orc::getMana()
{
    return mana;
}

int Orc::getStrength()
{
    return strength;
}

int Orc::getDefense()
{
    return defense;
}

int Orc::getAgility()
{
    return agility;
}

int Orc::getMagic()
{
    return magic;
}

int Orc::getExp()
{
    return exp;
}


void Orc::setHealth()
{
    this->health = 110;
}

void Orc::setMana()
{
    this->mana = 18;
}

void Orc::setStrength()
{
    this->strength = 15;
}

void Orc::setDefense()
{
    this->defense = 10;
}

void Orc::setAgility()
{
    this->agility = 3;
}

void Orc::setMagic()
{
    this->magic = 5;
}

void Orc::setExp()
{
    this->exp = 15;
}