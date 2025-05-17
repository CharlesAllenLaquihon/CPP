#include <iostream>

#ifndef Zombie_H
#define Zombie_H

class Zombie
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
        Zombie();

        Zombie(int health, int mana, int strength, int defense, int agility, int magic, int exp);

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

Zombie::Zombie()
{
    health = 0;
    mana = 0;
    strength = 0;
    defense = 0;
    agility = 0;
    magic = 0;
    exp = 0;
}

Zombie::Zombie(int health, int mana, int strength, int defense, int agility, int magic, int exp)
{
    this->health = health;
    this->mana = mana;
    this->strength = strength;
    this->defense = defense;
    this->agility = agility;
    this->magic = magic;
    this->exp = exp;
}

int Zombie::getHealth()
{
    return health;
}

int Zombie::getMana()
{
    return mana;
}

int Zombie::getStrength()
{
    return strength;
}

int Zombie::getDefense()
{
    return defense;
}

int Zombie::getAgility()
{
    return agility;
}

int Zombie::getMagic()
{
    return magic;
}

int Zombie::getExp()
{
    return exp;
}


void Zombie::setHealth()
{
    this->health = 150;
}

void Zombie::setMana()
{
    this->mana = 0;
}

void Zombie::setStrength()
{
    this->strength = 20;
}

void Zombie::setDefense()
{
    this->defense = 0;
}

void Zombie::setAgility()
{
    this->agility = 16;
}

void Zombie::setMagic()
{
    this->magic = 0;
}

void Zombie::setExp()
{
    this->exp = 25;
}