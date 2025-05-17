#include <iostream>
#include "goblin.h"
#include "wolf.h"
#include "willow.h"
#include "skeleton.h"
#include "orc.h"
#include "zombie.h"
#include "warrior.h"
#include "mage.h"
#include "priest.h"
#include "captain.h"
#include "general.h"
#include "emperor.h"
#include <cstdlib>
#include <ctime>
#include <conio.h>

int main()
{
    srand(time(0));

    int characterProvoke = 0;
    int poison = 0;
    int poisionDamage = 0;
    int characterstrup = 0;
    int strupDamage = 0;
    int reflect = 0;

    int enemystrup = 0;
    int enemystrupDamage = 0;

    int defup = 0;
    int defupdamage = 0;

    int enemyProvoke = 0;

    Warrior Warrior;
    Mage Mage;
    Priest Priest;
    Goblin Goblin;
    Wolf wolf;
    Willow willow;
    Skeleton skeleton;
    Orc orc;
    Zombie zombie;
    Captain captain;
    Emperor emperor;
    General general;

    int loop1 = 1;
    while (loop1 == 1)
    {
        std::cout << "\t===================\n";
        std::cout << "\t|| ALAMAT NG MGA BAYANI ||\n";
        std::cout << "\t===================\n";

        std::cout << "\t[ A ] Magsimula\n";
        std::cout << "\t[ B ] Umalis\n";

        std::string choice1 = "A";
        do
        {
            while (choice1 != "A" && choice1 != "a" && choice1 != "B" && choice1 != "b")
            {
                std::cout << "\tOops! Mali ang input. Subukan ulit!\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice1);
        } while (choice1 != "A" && choice1 != "a" && choice1 != "B" && choice1 != "b");

        if (choice1 == "A" || choice1 == "a")
        {
            std::cout << "\tPaglikha ng Karakter\n\n";

            std::string characterName;
            std::cout << "\tPangalan ng Karakter: ";
            std::getline(std::cin, characterName);

            std::string job = "1";
            do
            {
                while (job != "1" && job != "2" && job != "3")
                {
                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                    break;
                }

                std::cout << "\n\n\tPumili ng Trabaho: \n";
                std::cout << "\t[ 1 ] Mandirigma\n";
                std::cout << "\t[ 2 ] Mago\n";
                std::cout << "\t[ 3 ] Pari\n";
                std::cout << "\tIlagay ang Iyong Pinili: ";
                std::getline(std::cin, job);
            } while (job != "1" && job != "2" && job != "3");

            int health;
            int mana;
            int strength;
            int defense;
            int agility;
            int magic;

            if (job == "1")
            {
                Warrior.setHealth();
                Warrior.setMana();
                Warrior.setStrength();
                Warrior.setDefense();
                Warrior.setAgility();
                Warrior.setMagic();

                health = Warrior.getHealth();
                mana = Warrior.getMana();
                strength = Warrior.getStrength();
                defense = Warrior.getDefense();
                agility = Warrior.getAgility();
                magic = Warrior.getMagic();
                job = "Mandirigma";
            }
            else if (job == "2")
            {
                Mage.setHealth();
                Mage.setMana();
                Mage.setStrength();
                Mage.setDefense();
                Mage.setAgility();
                Mage.setMagic();

                health = Mage.getHealth();
                mana = Mage.getMana();
                strength = Mage.getStrength();
                defense = Mage.getDefense();
                agility = Mage.getAgility();
                magic = Mage.getMagic();
                job = "Mago";
            }
            else if (job == "3")
            {
                Priest.setHealth();
                Priest.setMana();
                Priest.setStrength();
                Priest.setDefense();
                Priest.setAgility();
                Priest.setMagic();

                health = Priest.getHealth();
                mana = Priest.getMana();
                strength = Priest.getStrength();
                defense = Priest.getDefense();
                agility = Priest.getAgility();
                magic = Priest.getMagic();
                job = "Pari";
            }

            int level = 1;
            int loop2 = 1;
            int need_exp = 1;
            while (loop2 == 1)
            {
                std::cout << "\tPagpili ng Misyon\n\n";
                std::cout << "\t[ 1 ] Gubat\n";
                std::cout << "\t[ 2 ] Madilim na Yungib\n";
                std::cout << "\t[ 3 ] Pangunahing Misyon\n";

                std::string choice2 = "1";
                do
                {
                    while (choice2 != "1" && choice2 != "2" && choice2 != "3")
                    {
                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                        break;
                    }

                    std::cout << "\tIlagay ang Iyong Pinili: ";
                    std::getline(std::cin, choice2);
                } while (choice2 != "1" && choice2 != "2" && choice2 != "3");

                if (choice2 == "1")
                {
                    // Gubat logic here
                }
                else if (choice2 == "2")
                {
                    // Madilim na Yungib logic here
                }
                else if (choice2 == "3")
                {
                    // Pangunahing Misyon logic here
                }
            }
        }
        else if (choice1 == "B" || choice1 == "b")
        {
            std::cout << "\tSalamat sa paglalaro! Paalam!\n";
            loop1 = 0;
        }
        else
        {
            std::cout << "\tDi-wastong pagpili, pakisubukang muli.";
        }
    }
}
