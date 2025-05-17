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

            int lvl1 = 0;
            int lvl2 = 0;
            int lvl3 = 0;
            int lvl4 = 0;
            int lvl5 = 0;
            int lvl6 = 0;
            int lvl7 = 0;
            int lvl8 = 0;
            int lvl9 = 0;
            int lvl10 = 0;

            int level = 1;
            int loop2 = 1;
            int need_exp = 1;
            while (loop2 == 1)
            {
                if (need_exp == 0)
                {
                    level = level + 1;
                    
                    if (job == "Mandirigma")
                    {
                        health = health + strength;
                        mana = mana + magic;
                        strength = strength + 2;
                        defense = defense + 1;
                        agility = agility + 3;
                        magic = magic + 1;
                    }
                    else if (job == "Mago")
                    {
                        health = health + strength;
                        mana = mana + magic;
                        strength = strength + 1;
                        defense = defense + 1;
                        agility = agility + 2;
                        magic = magic + 3;
                    }
                    else if (job == "Pari")
                    {
                        health = health + strength;
                        mana = mana + magic;
                        strength = strength + 2;
                        defense = defense + 3;
                        agility = agility + 1;
                        magic = magic + 2;
                    }
                }
                
                if (level == 1)
                {
                    while (lvl1 == 0)
                    {
                        need_exp = 9;
                        lvl1 = 1;
                    }
                }
                else if (level == 2)
                {
                    while (lvl2 == 0)
                    {
                        need_exp = 16;
                        lvl2 = 1;
                    }
                }
                else if (level == 3)
                {
                    while (lvl3 == 0)
                    {
                        need_exp = 25;
                        lvl3 = 1;
                    }
                }
                else if (level == 4)
                {
                    while (lvl4 == 0)
                    {
                        need_exp = 36;
                        lvl4 = 1;
                    }
                }
                else if (level == 5)
                {
                    while (lvl5 == 0)
                    {
                        need_exp = 49;
                        lvl5 = 1;
                    }
                }
                else if (level == 6)
                {
                    while (lvl6 == 0)
                    {
                        need_exp = 64;
                        lvl6 = 1;
                    }
                }
                else if (level == 7)
                {
                    while (lvl7 == 0)
                    {
                        need_exp = 81;
                        lvl7 = 1;
                    }
                }
                else if (level == 8)
                {
                    while (lvl8 == 0)
                    {
                        need_exp = 100;
                        lvl8 = 1;
                    }
                }
                else if (level == 9)
                {
                    while (lvl9 == 0)
                    {
                        need_exp = 121;
                        lvl9 = 1;
                    }
                }
                else if (level == 10)
                {
                    while (lvl10 == 0)
                    {
                        need_exp = 0;
                        lvl10 = 1;
                    }
                }
                
                std::cout << "\n\tPROPAYL NG KARAKTER\n\n";
                std::cout << "\tPangalan: " << characterName << "\n";
                std::cout << "\tTrabaho: " << job << "\n";
                std::cout << "\tAntas: " << level << "\n";
                std::cout << "\tKalusugan: " << health << "\n";
                std::cout << "\tMana: " << mana << "\n";
                std::cout << "\tLakas: " << strength << "\n";
                std::cout << "\tTibay: " << defense << "\n";
                std::cout << "\tLiksi: " << agility << "\n";
                std::cout << "\tMahika: " << magic << "\n";
                std::cout << "\tKaranasan sa susunod na antas: " << need_exp << "\n";

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
                    std::cout << "\tGubat\n";
                    std::cout << "\t[ 1 ] Goblin\n";
                    std::cout << "\t[ 2 ] Wolf\n";
                    std::cout << "\t[ 3 ] Willow\n";

                    std::string choice3 = "1";
                    do
                    {
                        while (choice3 != "1" && choice3 != "2" && choice3 != "3")
                        {
                            std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                            break;
                        }

                        std::cout << "\tIlagay ang Iyong Pinili: ";
                        std::getline(std::cin, choice3);
                    } while (choice3 != "1" && choice3 != "2" && choice3 != "3");

                    if (choice3 == "1")
                    {
                        // Goblin battle code
                        Goblin.setHealth();
                        Goblin.setMana();
                        Goblin.setStrength();
                        Goblin.setDefense();
                        Goblin.setAgility();
                        Goblin.setMagic();
                        Goblin.setExp();

                        int goblinHealth = Goblin.getHealth();
                        int goblinMana = Goblin.getMana();
                        int goblinStrength = Goblin.getStrength();
                        int goblinDefense = Goblin.getDefense();
                        int goblinAgility = Goblin.getAgility();
                        int goblinMagic = Goblin.getMagic();
                        int goblinExp = Goblin.getExp();
                        int goblinMaxHealth = goblinHealth;

                        int currentHealth = health;
                        int currentMana = mana;
                        int currentStrength = strength;
                        int currentDefense = defense;
                        int currentAgility = agility;
                        int currentMagic = magic;

                        int loop3 = 1;
                        int initialCharacterStrength = currentStrength;
                        while (loop3 == 1)
                        {
                            if (characterstrup > 0)
                            {
                                currentStrength = strupDamage;
                                characterstrup = characterstrup - 1;
                            }
                            else
                            {
                                currentStrength = initialCharacterStrength;
                            }
                        
                        std::cout << "\tGoblin\n";
                        std::cout << "\tKalusugan: " << goblinHealth << "\n";
                        std::cout << "\tMana: " << goblinMana << "\n\n";

                        std::cout << "\n" <<characterName << " Level." << level << "\n";
                        std::cout << "\tKalusugan: " << currentHealth << "\n";
                        std::cout << "\tMana: " << currentMana << "\n";

                            std::cout << "\t[ X ] Atake\n";
                            if (level >= 1 && level <= 2  && job == "Mandirigma")
                            {
                                std::cout << "\t[ 1 ] Slash(6)\n";
                            }
                            if (level >= 3 && level <= 4 && job == "Mandirigma")
                            {
                                std::cout << "\t[ 1 ] Slash(6)\n";
                                std::cout << "\t[ 2 ] Def Up!(6)\n";
                            }
                            if (level >= 5 && level <= 6 && job == "Mandirigma")
                            {
                                std::cout << "\t[ 1 ] Slash(6)\n";
                                std::cout << "\t[ 2 ] Def Up!(6)\n";
                                std::cout << "\t[ 3 ] Provoke(12)\n";
                            }
                            if (level >= 7 && job == "Mandirigma")
                            {
                                std::cout << "\t[ 1 ] Slash(6)\n";
                                std::cout << "\t[ 2 ] Def Up!(6)\n";
                                std::cout << "\t[ 3 ] Provoke(12)\n";
                                std::cout << "\t[ 4 ] Omni Slash(30)\n";
                            }

                            if (level >= 1 && level <= 2 && job == "Mago")
                            {
                                std::cout << "\t[ 5 ] Fireball(6)\n";
                            }
                            if (level >= 3 && level <= 4 && job == "Mago")
                            {
                                std::cout << "\t[ 5 ] Fireball(6)\n";
                                std::cout << "\t[ 6 ] Frost(6)\n";
                            }
                            if (level >= 5 && level <= 6 && job == "Mago")
                            {
                                std::cout << "\t[ 5 ] Fireball(6)\n";
                                std::cout << "\t[ 6 ] Frost(6)\n";
                                std::cout << "\t[ 7 ] Poison(12)\n";
                            }
                            if (level >= 7 && job == "Mago")
                            {
                                std::cout << "\t[ 5 ] Fireball(6)\n";
                                std::cout << "\t[ 6 ] Frost(6)\n";
                                std::cout << "\t[ 7 ] Poison(12)\n";
                                std::cout << "\t[ 8 ] Mega Flare(24)\n";
                            }
                            if (level >= 1 && level <= 2 && job == "Pari")
                            {
                                std::cout << "\t[ 9 ] Heal(6)\n";
                            }
                            if (level >= 3 && level <= 4 && job == "Pari")
                            {
                                std::cout << "\t[ 9 ] Heal(6)\n";
                                std::cout << "\t[ 10 ] Str Up!(6)\n";
                            }
                            if (level >= 5 && level <= 6 && job == "Pari")
                            {
                                std::cout << "\t[ 9 ] Heal(6)\n";
                                std::cout << "\t[ 10 ] Str Up!(6)\n";
                                std::cout << "\t[ 11 ] Reflect(12)\n";
                            }
                            if (level >= 7 && job == "Pari")
                            {
                                std::cout << "\t[ 9 ] Heal(6)\n";
                                std::cout << "\t[ 10 ] Str Up!(6)\n";
                                std::cout << "\t[ 11 ] Reflect(12)\n";
                                std::cout << "\t[ 12 ] Divine Smash(24)\n";
                            }

                            std::cout << "\t[ Z ] Wait\n";
                            std::cout << "\t[ R ] Run\n";

                            std::string choice5 = "1";
                            if (level >= 1 && level <= 2 && job == "Mandirigma")
                            {
                                
                                do
                                {
                                    while (choice5 != "X" && choice5 != "1" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }
    
                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "1" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 3 && level <= 4 && job == "Mandirigma")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 5 && level <= 6 && job == "Mandirigma")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 7  && job == "Mandirigma")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "4" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "4" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 1 && level <= 2 && job == "Mago")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "5" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "5" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 3 && level <= 4 && job == "Mago")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 5 && level <= 6 && job == "Mago")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 7  && job == "Mago")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "8" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "8" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 1 && level <= 2 && job == "Pari")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "9" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "9" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 3 && level <= 4 && job == "Pari")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 5 && level <= 6 && job == "Pari")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 7  && job == "Pari")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "12" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "12" && choice5 != "Z" && choice5 != "R");
                            }

                            if (choice5 == "X")
                            {
                                int attack = (currentStrength * 2) - goblinDefense;
                                goblinHealth = goblinHealth - attack;
                                std::cout << "\t" << characterName << " Damage: " << attack << "\n";
                            }
                            else if (choice5 == "1")
                            {
                                int slash = (currentStrength * 3) - goblinDefense;
                                goblinHealth = goblinHealth - slash;
                                std::cout << "\t" << characterName << " Damage: " << slash << "\n";
                                currentMana = currentMana - 6;
                            }
                            else if (choice5 == "Z")
                            {
                                std::cout << "\tWait\n";
                            }
                            else if (choice5 == "R")
                            {
                                std::cout << "\tRun\n";
                                std::cout << "\tNakatakas ka na sa laban!\n";
                                loop3 = 0;
                            }
                            else if (choice5 == "2")
                            {
                                if (currentMana < 6)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 6)
                                {
                                    currentMana = currentMana - 6;
                                    currentDefense = currentDefense * 2;
                                    std::cout << "\tDef Up!\n";
                                }
                            }
                            else if (choice5 == "3")
                            {
                                if (currentMana < 12)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 12)
                                {
                                currentMana = currentMana - 12;
                                characterProvoke = 3;
                                std::cout << "\tProvoke!\n";
                                }
                            }
                            else if (choice5 == "4")
                            {
                                if (currentMana < 30)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 30)
                                {
                                currentMana = currentMana - 30;
                                int ommniSlash =(currentStrength * 12) - goblinDefense;
                                goblinHealth = goblinHealth - ommniSlash;
                                std::cout << "\t" << characterName << " Damage: " << ommniSlash << "\n";
                                }
                            }
                            else if (choice5 == "5")
                            {
                                if (currentMana < 6)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 6)
                                {
                                    currentMana = currentMana - 6;
                                    int fireball = (currentMagic * 3) - goblinDefense;
                                    goblinHealth = goblinHealth - fireball;
                                    std::cout << "\t" << characterName << " Damage: " << fireball << "\n";
                                }
                            }
                            else if (choice5 == "6")
                            {
                                if (currentMana < 12)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 12)
                                {
                                   currentMana = currentMana - 12;
                                   int frost = (currentMagic * 5) - goblinDefense;
                                    goblinHealth = goblinHealth - frost;
                                    std::cout << "\t" << characterName << " Damage: " << frost << "\n";
                                    characterProvoke = 3;

                                }
                            }
                            else if (choice5 == "7")
                            {
                                if (currentMana < 12)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 12)
                                {
                                    currentMana = currentMana - 12;
                                    poison = 3;
                                    poisionDamage = (goblinMaxHealth * 0.1) - goblinDefense;
                                    goblinHealth = goblinHealth - poisionDamage;
                                    std::cout << "\tPoison!\n";
                                }
                            }
                            else if (choice5 == "8")
                            {
                                if (currentMana < 24)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 24)
                                {
                                    currentMana = currentMana - 24;
                                    int megaFlare = (currentMagic * 15) - goblinDefense;
                                    goblinHealth = goblinHealth - megaFlare;
                                    std::cout << "\t" << characterName << " Damage: " << megaFlare << "\n";
                                }
                            }
                            else if (choice5 == "9")
                            {
                                if (currentMana < 6)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 6)
                                {
                                    currentMana = currentMana - 6;
                                    int heal = (currentMagic * 3);
                                    currentHealth = currentHealth + heal;
                                    std::cout << "\t" << characterName << " Heal: " << heal << "\n";
                                }
                            }
                            else if (choice5 == "10")
                            {
                                if (currentMana < 6)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 6)
                                {
                                    currentMana = currentMana - 6;
                                    strupDamage= (strength * 2);
                                    characterstrup = 3;
                                    std::cout << "\tStr Up!\n";
                                }
                            }
                            else if (choice5 == "11")
                            {
                                if (currentMana < 12)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 12)
                                {
                                    currentMana = currentMana - 12;
                                    reflect = 1;
                                    std::cout << "\tReflect!\n";
                                }
                            }
                            else if (choice5 == "12")
                            {
                                if (currentMana < 24)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 24)
                                {
                                    currentMana = currentMana - 24;

                                    int divineSmash = goblinHealth * 0.5;
                                    goblinHealth = goblinHealth - divineSmash;

                                    std::cout << "\t" << characterName << " Damage: " << divineSmash << "\n";
                                }
                            }

                            if (characterProvoke > 0)
                            {
                                std::cout << "\tGoblin ay provoked\n";
                                characterProvoke = characterProvoke - 1;
                            }
                            else
                            {
                                int randomGoblin = rand() % 2 + 1;
                                if (randomGoblin == 1)
                                {
                                    int goblinAttack = (goblinStrength * 2) - defense;
                                    currentHealth = currentHealth - goblinAttack;
                                    std::cout << "\tGoblin Damage: " << goblinAttack << "\n";

                                    if(reflect == 1)
                                    {
                                        goblinHealth = goblinHealth - goblinAttack;
                                        reflect = 0;
                                        std::cout << "\tReflect Damage: " << goblinAttack << "\n";
                                    }
                                }
                                else if (randomGoblin == 2)
                                {
                                    std::cout << "\tGoblin ay naghintay\n";
                                }
                            }
                            
                            if (poison > 0)
                            {
                                std::cout << "\tPoison Damage: " << poisionDamage << "\n";
                                goblinHealth = goblinHealth - poisionDamage;
                                poison = poison - 1;
                            }
                                    
                            if (goblinHealth <= 0)
                            {
                                std::cout << "\tGoblin ay napatay!\n";
                                std::cout << "\tKaranasan: " << goblinExp << "\n";
                                std::cout << "\tNakuha mo ang " << goblinExp << " XP!\n";
                                need_exp = need_exp - goblinExp; 
                                std::cout << "\tNakatakas ka na sa laban!\n";
                                loop3 = 0;
                            }
                            else if (currentHealth <= 0)
                            {
                                std::cout << "\tNamatay ka sa laban!\n";
                                loop3 = 0;
                            }

                        }
                    }
                    else if (choice3 == "2")
                    {
                        // Wolf battle code
                        wolf.setHealth();
                        wolf.setMana();
                        wolf.setStrength();
                        wolf.setDefense();
                        wolf.setAgility();
                        wolf.setMagic();
                        wolf.setExp();

                        int wolfHealth = wolf.getHealth();
                        int wolfMana = wolf.getMana();
                        int wolfStrength = wolf.getStrength();
                        int wolfDefense = wolf.getDefense();
                        int wolfAgility = wolf.getAgility();
                        int wolfMagic = wolf.getMagic();
                        int wolfExp = wolf.getExp();
                        int wolfMaxHealth = wolfHealth;

                        int currentHealth = health;
                        int currentMana = mana;
                        int currentStrength = strength;
                        int currentDefense = defense;
                        int currentAgility = agility;
                        int currentMagic = magic;

                        int loop3 = 1;
                        int initialCharacterStrength = currentStrength;
                        while (loop3 == 1)
                        {
                            
                            if (characterstrup > 0)
                            {
                                currentStrength = strupDamage;
                                characterstrup = characterstrup - 1;
                            }
                            else
                            {
                                currentStrength = initialCharacterStrength;
                            }

                        std::cout << "\twolf\n";
                        std::cout << "\tKalusugan: " << wolfHealth << "\n";
                        std::cout << "\tMana: " << wolfMana << "\n\n";

                        std::cout << "\n" <<characterName << " Level." << level << "\n";
                        std::cout << "\tKalusugan: " << currentHealth << "\n";
                        std::cout << "\tMana: " << currentMana << "\n";

                            std::cout << "\t[ X ] Atake\n";
                            if (level >= 1 && level <= 2  && job == "Mandirigma")
                            {
                                std::cout << "\t[ 1 ] Slash(6)\n";
                            }
                            if (level >= 3 && level <= 4 && job == "Mandirigma")
                            {
                                std::cout << "\t[ 1 ] Slash(6)\n";
                                std::cout << "\t[ 2 ] Def Up!(6)\n";
                            }
                            if (level >= 5 && level <= 6 && job == "Mandirigma")
                            {
                                std::cout << "\t[ 1 ] Slash(6)\n";
                                std::cout << "\t[ 2 ] Def Up!(6)\n";
                                std::cout << "\t[ 3 ] Provoke(12)\n";
                            }
                            if (level >= 7 && job == "Mandirigma")
                            {
                                std::cout << "\t[ 1 ] Slash(6)\n";
                                std::cout << "\t[ 2 ] Def Up!(6)\n";
                                std::cout << "\t[ 3 ] Provoke(12)\n";
                                std::cout << "\t[ 4 ] Omni Slash(30)\n";
                            }

                            if (level >= 1 && level <= 2 && job == "Mago")
                            {
                                std::cout << "\t[ 5 ] Fireball(6)\n";
                            }
                            if (level >= 3 && level <= 4 && job == "Mago")
                            {
                                std::cout << "\t[ 5 ] Fireball(6)\n";
                                std::cout << "\t[ 6 ] Frost(6)\n";
                            }
                            if (level >= 5 && level <= 6 && job == "Mago")
                            {
                                std::cout << "\t[ 5 ] Fireball(6)\n";
                                std::cout << "\t[ 6 ] Frost(6)\n";
                                std::cout << "\t[ 7 ] Poison(12)\n";
                            }
                            if (level >= 7 && job == "Mago")
                            {
                                std::cout << "\t[ 5 ] Fireball(6)\n";
                                std::cout << "\t[ 6 ] Frost(6)\n";
                                std::cout << "\t[ 7 ] Poison(12)\n";
                                std::cout << "\t[ 8 ] Mega Flare(24)\n";
                            }
                            if (level >= 1 && level <= 2 && job == "Pari")
                            {
                                std::cout << "\t[ 9 ] Heal(6)\n";
                            }
                            if (level >= 3 && level <= 4 && job == "Pari")
                            {
                                std::cout << "\t[ 9 ] Heal(6)\n";
                                std::cout << "\t[ 10 ] Str Up!(6)\n";
                            }
                            if (level >= 5 && level <= 6 && job == "Pari")
                            {
                                std::cout << "\t[ 9 ] Heal(6)\n";
                                std::cout << "\t[ 10 ] Str Up!(6)\n";
                                std::cout << "\t[ 11 ] Reflect(12)\n";
                            }
                            if (level >= 7 && job == "Pari")
                            {
                                std::cout << "\t[ 9 ] Heal(6)\n";
                                std::cout << "\t[ 10 ] Str Up!(6)\n";
                                std::cout << "\t[ 11 ] Reflect(12)\n";
                                std::cout << "\t[ 12 ] Divine Smash(24)\n";
                            }

                            std::cout << "\t[ Z ] Wait\n";
                            std::cout << "\t[ R ] Run\n";

                            std::string choice5 = "1";
                            if (level >= 1 && level <= 2 && job == "Mandirigma")
                            {
                                
                                do
                                {
                                    while (choice5 != "X" && choice5 != "1" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "1" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 3 && level <= 4 && job == "Mandirigma")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 5 && level <= 6 && job == "Mandirigma")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 7  && job == "Mandirigma")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "4" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "4" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 1 && level <= 2 && job == "Mago")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "5" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "5" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 3 && level <= 4 && job == "Mago")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 5 && level <= 6 && job == "Mago")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 7  && job == "Mago")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "8" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "8" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 1 && level <= 2 && job == "Pari")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "9" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "9" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 3 && level <= 4 && job == "Pari")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 5 && level <= 6 && job == "Pari")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 7  && job == "Pari")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "12" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "12" && choice5 != "Z" && choice5 != "R");
                            }
                            
                            if (choice5 == "X")
                            {
                                int attack = (currentStrength * 2) - wolfDefense;
                                wolfHealth = wolfHealth - attack;
                                std::cout << "\t" << characterName << " Damage: " << attack << "\n";
                            }
                            else if (choice5 == "1")
                            {
                                int slash = (currentStrength * 3) - wolfDefense;
                                wolfHealth = wolfHealth - slash;
                                std::cout << "\t" << characterName << " Damage: " << slash << "\n";
                                currentMana = currentMana - 6;
                            }
                            else if (choice5 == "Z")
                            {
                                std::cout << "\tWait\n";
                            }
                            else if (choice5 == "R")
                            {
                                std::cout << "\tRun\n";
                                std::cout << "\tNakatakas ka na sa laban!\n";
                                loop3 = 0;
                            }
                            else if (choice5 == "2")
                            {
                                if (currentMana < 6)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 6)
                                {
                                    currentMana = currentMana - 6;
                                    currentDefense = currentDefense * 2;
                                    std::cout << "\tDef Up!\n";
                                }
                            }
                            else if (choice5 == "3")
                            {
                                if (currentMana < 12)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 12)
                                {
                                currentMana = currentMana - 12;
                                characterProvoke = 3;
                                std::cout << "\tProvoke!\n";
                                }
                            }
                            else if (choice5 == "4")
                            {
                                if (currentMana < 30)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 30)
                                {
                                currentMana = currentMana - 30;
                                int ommniSlash =(currentStrength * 12) - wolfDefense;
                                wolfHealth = wolfHealth - ommniSlash;
                                std::cout << "\t" << characterName << " Damage: " << ommniSlash << "\n";
                                }
                            }
                            else if (choice5 == "5")
                            {
                                if (currentMana < 6)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 6)
                                {
                                    currentMana = currentMana - 6;
                                    int fireball = (currentMagic * 3) - wolfDefense;
                                    wolfHealth = wolfHealth - fireball;
                                    std::cout << "\t" << characterName << " Damage: " << fireball << "\n";
                                }
                            }
                            else if (choice5 == "6")
                            {
                                if (currentMana < 12)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 12)
                                {
                                currentMana = currentMana - 12;
                                int frost = (currentMagic * 5) - wolfDefense;
                                    wolfHealth = wolfHealth - frost;
                                    std::cout << "\t" << characterName << " Damage: " << frost << "\n";
                                    characterProvoke = 3;

                                }
                            }
                            else if (choice5 == "7")
                            {
                                if (currentMana < 12)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 12)
                                {
                                    currentMana = currentMana - 12;
                                    poison = 3;
                                    poisionDamage = (wolfMaxHealth * 0.1) - wolfDefense;
                                    wolfHealth = wolfHealth - poisionDamage;
                                    std::cout << "\tPoison!\n";
                                }
                            }
                            else if (choice5 == "8")
                            {
                                if (currentMana < 24)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 24)
                                {
                                    currentMana = currentMana - 24;
                                    int megaFlare = (currentMagic * 15) - wolfDefense;
                                    wolfHealth = wolfHealth - megaFlare;
                                    std::cout << "\t" << characterName << " Damage: " << megaFlare << "\n";
                                }
                            }
                            else if (choice5 == "9")
                            {
                                if (currentMana < 6)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 6)
                                {
                                    currentMana = currentMana - 6;
                                    int heal = (currentMagic * 3);
                                    currentHealth = currentHealth + heal;
                                    std::cout << "\t" << characterName << " Heal: " << heal << "\n";
                                }
                            }
                            else if (choice5 == "10")
                            {
                                if (currentMana < 6)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 6)
                                {
                                    currentMana = currentMana - 6;
                                    strupDamage = (currentStrength * 2);
                                    characterstrup = 3;
                                    std::cout << "\tStr Up!\n";
                                }
                            }
                            else if (choice5 == "11")
                            {
                                if (currentMana < 12)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 12)
                                {
                                    currentMana = currentMana - 12;
                                    reflect = 1;
                                    std::cout << "\tReflect!\n";
                                }
                            }
                            else if (choice5 == "12")
                            {
                                if (currentMana < 24)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 24)
                                {
                                    currentMana = currentMana - 24;

                                    int divineSmash = wolfHealth * 0.5;
                                    wolfHealth = wolfHealth - divineSmash;

                                    std::cout << "\t" << characterName << " Damage: " << divineSmash << "\n";
                                }
                            }

                            if (characterProvoke > 0)
                            {
                                std::cout << "\twolf ay provoked\n";
                                characterProvoke = characterProvoke - 1;
                            }
                            else
                            {
                                int randomwolf = rand() % 3 + 1;
                                if (randomwolf == 1)
                                {
                                    int wolfAttack = (wolfStrength * 2) - defense;
                                    currentHealth = currentHealth - wolfAttack;
                                    std::cout << "\twolf Damage: " << wolfAttack << "\n";

                                    if(reflect == 1)
                                    {
                                        wolfHealth = wolfHealth - wolfAttack;
                                        reflect = 0;
                                        std::cout << "\tReflect Damage: " << wolfAttack << "\n";
                                    }
                                }
                                else if (randomwolf == 2)
                                {
                                    std::cout << "\twolf ay naghintay\n";
                                }
                                else if (randomwolf == 3)
                                {
                                    if (wolfMana  < 5)
                                    {
                                        std::cout << "\tDi sapat ang mana!\n";
                                    }
                                    else if(wolfMana >= 5)
                                    {
                                        int bite = (wolfStrength + wolfAgility) - currentDefense; 
                                        currentHealth = currentHealth - bite;

                                        if(reflect == 1)
                                        {
                                            wolfHealth = wolfHealth - bite;
                                            reflect = 0;
                                            std::cout << "\tReflect Damage: " << bite << "\n";
                                        }
                                    }
                                    
                                    
                                }
                            }
                            
                            if (poison > 0)
                            {
                                std::cout << "\tPoison Damage: " << poisionDamage << "\n";
                                wolfHealth = wolfHealth - poisionDamage;
                                poison = poison - 1;
                            }

                            if (wolfHealth <= 0)
                            {
                                std::cout << "\twolf ay napatay!\n";
                                std::cout << "\tKaranasan: " << wolfExp << "\n";
                                std::cout << "\tNakuha mo ang " << wolfExp << " XP!\n";
                                need_exp = need_exp - wolfExp; 
                                std::cout << "\tNakatakas ka na sa laban!\n";
                                loop3 = 0;
                            }
                            else if (currentHealth <= 0)
                            {
                                std::cout << "\tNamatay ka sa laban!\n";
                                loop3 = 0;
                            }
                    }
                }
                    else if (choice3 == "3")
                    {
                        // Willow battle code
                        willow.setHealth();
                        willow.setMana();
                        willow.setStrength();
                        willow.setDefense();
                        willow.setAgility();
                        willow.setMagic();
                        willow.setExp();

                        int willowHealth = willow.getHealth();
            int willowMana = willow.getMana();
            int willowStrength = willow.getStrength();
            int willowDefense = willow.getDefense();
            int willowAgility = willow.getAgility();
            int willowMagic = willow.getMagic();
            int willowExp = willow.getExp();
            int willowMaxHealth = willowHealth;

            int currentHealth = health;
            int currentMana = mana;
            int currentStrength = strength;
            int currentDefense = defense;
            int currentAgility = agility;
            int currentMagic = magic;

            int loop3 = 1;
            int initialCharacterStrength = currentStrength;
            while (loop3 == 1)
            {
                
                            if (characterstrup > 0)
                            {
                                currentStrength = strupDamage;
                                characterstrup = characterstrup - 1;
                            }
                            else
                            {
                                currentStrength = initialCharacterStrength;
                            }

                int initialEnemyStrength = willowStrength;
                            if (enemystrup > 0)
                            {
                                willowStrength = enemystrupDamage;
                                enemystrup = enemystrup - 1;
                            }
                            else
                            {
                                willowStrength = initialEnemyStrength;
                            }

                            
                
                

            std::cout << "\twillow\n";
            std::cout << "\tKalusugan: " << willowHealth << "\n";
            std::cout << "\tMana: " << willowMana << "\n\n";

            std::cout << "\n" <<characterName << " Level." << level << "\n";
            std::cout << "\tKalusugan: " << currentHealth << "\n";
            std::cout << "\tMana: " << currentMana << "\n";

                std::cout << "\t[ X ] Atake\n";
                if (level >= 1 && level <= 2  && job == "Mandirigma")
                {
                    std::cout << "\t[ 1 ] Slash(6)\n";
                }
                if (level >= 3 && level <= 4 && job == "Mandirigma")
                {
                    std::cout << "\t[ 1 ] Slash(6)\n";
                    std::cout << "\t[ 2 ] Def Up!(6)\n";
                }
                if (level >= 5 && level <= 6 && job == "Mandirigma")
                {
                    std::cout << "\t[ 1 ] Slash(6)\n";
                    std::cout << "\t[ 2 ] Def Up!(6)\n";
                    std::cout << "\t[ 3 ] Provoke(12)\n";
                }
                if (level >= 7 && job == "Mandirigma")
                {
                    std::cout << "\t[ 1 ] Slash(6)\n";
                    std::cout << "\t[ 2 ] Def Up!(6)\n";
                    std::cout << "\t[ 3 ] Provoke(12)\n";
                    std::cout << "\t[ 4 ] Omni Slash(30)\n";
                }

                if (level >= 1 && level <= 2 && job == "Mago")
                {
                    std::cout << "\t[ 5 ] Fireball(6)\n";
                }
                if (level >= 3 && level <= 4 && job == "Mago")
                {
                    std::cout << "\t[ 5 ] Fireball(6)\n";
                    std::cout << "\t[ 6 ] Frost(6)\n";
                }
                if (level >= 5 && level <= 6 && job == "Mago")
                {
                    std::cout << "\t[ 5 ] Fireball(6)\n";
                    std::cout << "\t[ 6 ] Frost(6)\n";
                    std::cout << "\t[ 7 ] Poison(12)\n";
                }
                if (level >= 7 && job == "Mago")
                {
                    std::cout << "\t[ 5 ] Fireball(6)\n";
                    std::cout << "\t[ 6 ] Frost(6)\n";
                    std::cout << "\t[ 7 ] Poison(12)\n";
                    std::cout << "\t[ 8 ] Mega Flare(24)\n";
                }
                if (level >= 1 && level <= 2 && job == "Pari")
                {
                    std::cout << "\t[ 9 ] Heal(6)\n";
                }
                if (level >= 3 && level <= 4 && job == "Pari")
                {
                    std::cout << "\t[ 9 ] Heal(6)\n";
                    std::cout << "\t[ 10 ] Str Up!(6)\n";
                }
                if (level >= 5 && level <= 6 && job == "Pari")
                {
                    std::cout << "\t[ 9 ] Heal(6)\n";
                    std::cout << "\t[ 10 ] Str Up!(6)\n";
                    std::cout << "\t[ 11 ] Reflect(12)\n";
                }
                if (level >= 7 && job == "Pari")
                {
                    std::cout << "\t[ 9 ] Heal(6)\n";
                    std::cout << "\t[ 10 ] Str Up!(6)\n";
                    std::cout << "\t[ 11 ] Reflect(12)\n";
                    std::cout << "\t[ 12 ] Divine Smash(24)\n";
                }

                
                std::cout << "\t[ Z ] Wait\n";
                std::cout << "\t[ R ] Run\n";

                std::string choice5 = "1";
                if (level >= 1 && level <= 2 && job == "Mandirigma")
                {
                    
                    do
                    {
                        while (choice5 != "X" && choice5 != "1" && choice5 != "Z" && choice5 != "R")
                        {
                            std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                            break;
                        }

                        std::cout << "\tIlagay ang Iyong Pinili: ";
                        std::getline(std::cin, choice5);
                    } while (choice5 != "X" && choice5 != "1" && choice5 != "Z" && choice5 != "R");
                }
                else if (level >= 3 && level <= 4 && job == "Mandirigma")
                {
                    do
                    {
                        while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "Z" && choice5 != "R")
                        {
                            std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                            break;
                        }

                        std::cout << "\tIlagay ang Iyong Pinili: ";
                        std::getline(std::cin, choice5);
                    } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "Z" && choice5 != "R");
                }
                else if (level >= 5 && level <= 6 && job == "Mandirigma")
                {
                    do
                    {
                        while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "Z" && choice5 != "R")
                        {
                            std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                            break;
                        }

                        std::cout << "\tIlagay ang Iyong Pinili: ";
                        std::getline(std::cin, choice5);
                    } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "Z" && choice5 != "R");
                }
                else if (level >= 7  && job == "Mandirigma")
                {
                    do
                    {
                        while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "4" && choice5 != "Z" && choice5 != "R")
                        {
                            std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                            break;
                        }

                        std::cout << "\tIlagay ang Iyong Pinili: ";
                        std::getline(std::cin, choice5);
                    } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "4" && choice5 != "Z" && choice5 != "R");
                }
                else if (level >= 1 && level <= 2 && job == "Mago")
                {
                    do
                    {
                        while (choice5 != "X" && choice5 != "5" && choice5 != "Z" && choice5 != "R")
                        {
                            std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                            break;
                        }

                        std::cout << "\tIlagay ang Iyong Pinili: ";
                        std::getline(std::cin, choice5);
                    } while (choice5 != "X" && choice5 != "5" && choice5 != "Z" && choice5 != "R");
                }
                else if (level >= 3 && level <= 4 && job == "Mago")
                {
                    do
                    {
                        while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "Z" && choice5 != "R")
                        {
                            std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                            break;
                        }

                        std::cout << "\tIlagay ang Iyong Pinili: ";
                        std::getline(std::cin, choice5);
                    } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "Z" && choice5 != "R");
                }
                else if (level >= 5 && level <= 6 && job == "Mago")
                {
                    do
                    {
                        while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "Z" && choice5 != "R")
                        {
                            std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                            break;
                        }

                        std::cout << "\tIlagay ang Iyong Pinili: ";
                        std::getline(std::cin, choice5);
                    } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "Z" && choice5 != "R");
                }
                else if (level >= 7  && job == "Mago")
                {
                    do
                    {
                        while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "8" && choice5 != "Z" && choice5 != "R")
                        {
                            std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                            break;
                        }

                        std::cout << "\tIlagay ang Iyong Pinili: ";
                        std::getline(std::cin, choice5);
                    } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "8" && choice5 != "Z" && choice5 != "R");
                }
                else if (level >= 1 && level <= 2 && job == "Pari")
                {
                    do
                    {
                        while (choice5 != "X" && choice5 != "9" && choice5 != "Z" && choice5 != "R")
                        {
                            std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                            break;
                        }

                        std::cout << "\tIlagay ang Iyong Pinili: ";
                        std::getline(std::cin, choice5);
                    } while (choice5 != "X" && choice5 != "9" && choice5 != "Z" && choice5 != "R");
                }
                else if (level >= 3 && level <= 4 && job == "Pari")
                {
                    do
                    {
                        while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "Z" && choice5 != "R")
                        {
                            std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                            break;
                        }

                        std::cout << "\tIlagay ang Iyong Pinili: ";
                        std::getline(std::cin, choice5);
                    } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "Z" && choice5 != "R");
                }
                else if (level >= 5 && level <= 6 && job == "Pari")
                {
                    do
                    {
                        while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "Z" && choice5 != "R")
                        {
                            std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                            break;
                        }

                        std::cout << "\tIlagay ang Iyong Pinili: ";
                        std::getline(std::cin, choice5);
                    } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "Z" && choice5 != "R");
                }
                else if (level >= 7  && job == "Pari")
                {
                    do
                    {
                        while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "12" && choice5 != "Z" && choice5 != "R")
                        {
                            std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                            break;
                        }

                        std::cout << "\tIlagay ang Iyong Pinili: ";
                        std::getline(std::cin, choice5);
                    } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "12" && choice5 != "Z" && choice5 != "R");
                }
                
                
            

                if (choice5 == "X")
                {
                    int attack = (currentStrength * 2) - willowDefense;
                    willowHealth = willowHealth - attack;
                    std::cout << "\t" << characterName << " Damage: " << attack << "\n";
                }
                else if (choice5 == "1")
                {
                    int slash = (currentStrength * 3) - willowDefense;
                    willowHealth = willowHealth - slash;
                    std::cout << "\t" << characterName << " Damage: " << slash << "\n";
                    currentMana = currentMana - 6;
                }
                else if (choice5 == "Z")
                {
                    std::cout << "\tWait\n";
                }
                else if (choice5 == "R")
                {
                    std::cout << "\tRun\n";
                    std::cout << "\tNakatakas ka na sa laban!\n";
                    loop3 = 0;
                }
                else if (choice5 == "2")
                {
                    if (currentMana < 6)
                    {
                        std::cout << "\tDi sapat ang mana!\n";
                    }
                    else if (currentMana >= 6)
                    {
                        currentMana = currentMana - 6;
                        currentDefense = currentDefense * 2;
                        std::cout << "\tDef Up!\n";
                    }
                }
                else if (choice5 == "3")
                {
                    if (currentMana < 12)
                    {
                        std::cout << "\tDi sapat ang mana!\n";
                    }
                    else if (currentMana >= 12)
                    {
                    currentMana = currentMana - 12;
                    characterProvoke = 3;
                    std::cout << "\tProvoke!\n";
                    }
                }
                else if (choice5 == "4")
                {
                    if (currentMana < 30)
                    {
                        std::cout << "\tDi sapat ang mana!\n";
                    }
                    else if (currentMana >= 30)
                    {
                    currentMana = currentMana - 30;
                    int ommniSlash =(currentStrength * 12) - willowDefense;
                    willowHealth = willowHealth - ommniSlash;
                    std::cout << "\t" << characterName << " Damage: " << ommniSlash << "\n";
                    }
                }
                else if (choice5 == "5")
                {
                    if (currentMana < 6)
                    {
                        std::cout << "\tDi sapat ang mana!\n";
                    }
                    else if (currentMana >= 6)
                    {
                        currentMana = currentMana - 6;
                        int fireball = (currentMagic * 3) - willowDefense;
                        willowHealth = willowHealth - fireball;
                        std::cout << "\t" << characterName << " Damage: " << fireball << "\n";
                    }
                }
                else if (choice5 == "6")
                {
                    if (currentMana < 12)
                    {
                        std::cout << "\tDi sapat ang mana!\n";
                    }
                    else if (currentMana >= 12)
                    {
                    currentMana = currentMana - 12;
                    int frost = (currentMagic * 5) - willowDefense;
                        willowHealth = willowHealth - frost;
                        std::cout << "\t" << characterName << " Damage: " << frost << "\n";
                        characterProvoke = 3;

                    }
                }
                else if (choice5 == "7")
                {
                    if (currentMana < 12)
                    {
                        std::cout << "\tDi sapat ang mana!\n";
                    }
                    else if (currentMana >= 12)
                    {
                        currentMana = currentMana - 12;
                        poison = 3;
                        poisionDamage = (willowMaxHealth * 0.1) - willowDefense;
                        willowHealth = willowHealth - poisionDamage;
                        std::cout << "\tPoison!\n";
                    }
                }
                else if (choice5 == "8")
                {
                    if (currentMana < 24)
                    {
                        std::cout << "\tDi sapat ang mana!\n";
                    }
                    else if (currentMana >= 24)
                    {
                        currentMana = currentMana - 24;
                        int megaFlare = (currentMagic * 15) - willowDefense;
                        willowHealth = willowHealth - megaFlare;
                        std::cout << "\t" << characterName << " Damage: " << megaFlare << "\n";
                    }
                }
                else if (choice5 == "9")
                {
                    if (currentMana < 6)
                    {
                        std::cout << "\tDi sapat ang mana!\n";
                    }
                    else if (currentMana >= 6)
                    {
                        currentMana = currentMana - 6;
                        int heal = (currentMagic * 3);
                        currentHealth = currentHealth + heal;
                        std::cout << "\t" << characterName << " Heal: " << heal << "\n";
                    }
                }
                else if (choice5 == "10")
                {
                    if (currentMana < 6)
                    {
                        std::cout << "\tDi sapat ang mana!\n";
                    }
                    else if (currentMana >= 6)
                    {
                        currentMana = currentMana - 6;
                        strupDamage = (currentStrength * 2);
                        characterstrup = 3;
                        std::cout << "\tStr Up!\n";
                    }
                }
                else if (choice5 == "11")
                {
                    if (currentMana < 12)
                    {
                        std::cout << "\tDi sapat ang mana!\n";
                    }
                    else if (currentMana >= 12)
                    {
                        currentMana = currentMana - 12;
                        reflect = 1;
                        std::cout << "\tReflect!\n";
                    }
                }
                else if (choice5 == "12")
                {
                    if (currentMana < 24)
                    {
                        std::cout << "\tDi sapat ang mana!\n";
                    }
                    else if (currentMana >= 24)
                    {
                        currentMana = currentMana - 24;

                        int divineSmash = willowHealth * 0.5;
                        willowHealth = willowHealth - divineSmash;

                        std::cout << "\t" << characterName << " Damage: " << divineSmash << "\n";
                    }
                }



                if (characterProvoke > 0)
                {
                    std::cout << "\twillow ay provoked\n";
                    characterProvoke = characterProvoke - 1;
                }
                else
                {
                    int randomwillow = rand() % 4 + 1;
                    if (randomwillow == 1)
                    {
                        int willowAttack = (willowStrength * 2) - defense;
                        currentHealth = currentHealth - willowAttack;
                        std::cout << "\twillow Damage: " << willowAttack << "\n";

                        if(reflect == 1)
                        {
                            willowHealth = willowHealth - willowAttack;
                            reflect = 0;
                            std::cout << "\tReflect Damage: " << willowAttack << "\n";
                        }
                    }
                    else if (randomwillow == 2)
                    {
                        std::cout << "\twillow ay naghintay\n";
                    }
                    else if (randomwillow == 3)
                    {
                        if (willowMana < 6)
                        {
                            std::cout << "\tDi sapat ang mana!\n";
                        }
                        else if (willowMana >= 6)
                        {
                            willowMana = willowMana - 6;

                            int heal = (willowMagic * 3);
                            willowHealth = willowHealth + heal;
                            std::cout << "\twillow Heal: " << heal << "\n";
                        }
                    }
                    else if (randomwillow == 4)
                    {
                        //strup
                        if (willowMana < 6)
                        {
                            std::cout << "\tDi sapat ang mana!\n";
                        }
                        else if (willowMana >= 6)
                        {
                            willowMana = willowMana - 6;
                            enemystrupDamage = (willowStrength * 2);
                            enemystrup = 3;
                            std::cout << "\tStr Up!\n";
                        }


                    }
                }
                
                if (poison > 0)
                {
                    std::cout << "\tPoison Damage: " << poisionDamage << "\n";
                    willowHealth = willowHealth - poisionDamage;
                    poison = poison - 1;
                }
                        


                if (willowHealth <= 0)
                {
                    std::cout << "\twillow ay napatay!\n";
                    std::cout << "\tKaranasan: " << willowExp << "\n";
                    std::cout << "\tNakuha mo ang " << willowExp << " XP!\n";
                    need_exp = need_exp - willowExp; 
                    std::cout << "\tNakatakas ka na sa laban!\n";
                    loop3 = 0;
                }
                else if (currentHealth <= 0)
                {
                    std::cout << "\tNamatay ka sa laban!\n";
                    loop3 = 0;
                }
                    }
                }
            }
                else if (choice2 == "2") 
                {
                    // Dark Cave mission code
                    std::cout << "\tMadilim na Yungib\n";
                    std::cout << "\t[ 1 ] Skeleton\n";
                    std::cout << "\t[ 2 ] Orc\n";
                    std::cout << "\t[ 3 ] Zombie\n";

                    std::string choice4 = "1";
                    do
                    {
                        while (choice4 != "1" && choice4 != "2" && choice4 != "3")
                        {
                            std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                            break;
                        }

                        std::cout << "\tIlagay ang Iyong Pinili: ";
                        std::getline(std::cin, choice4);
                    } while (choice4 != "1" && choice4 != "2" && choice4 != "3");

                    if (choice4 == "1")
                    {
                        // Skeleton battle code
                        skeleton.setHealth();
                        skeleton.setMana();
                        skeleton.setStrength();
                        skeleton.setDefense();
                        skeleton.setAgility();
                        skeleton.setMagic();
                        skeleton.setExp();

                        int skeletonHealth = skeleton.getHealth();
                        int skeletonMana = skeleton.getMana();
                        int skeletonStrength = skeleton.getStrength();
                        int skeletonDefense = skeleton.getDefense();
                        int skeletonAgility = skeleton.getAgility();
                        int skeletonMagic = skeleton.getMagic();
                        int skeletonExp = skeleton.getExp();
                        int skeletonMaxHealth = skeletonHealth;

                        int currentHealth = health;
                        int currentMana = mana;
                        int currentStrength = strength;
                        int currentDefense = defense;
                        int currentAgility = agility;
                        int currentMagic = magic;

                        int loop3 = 1;
                        int initialCharacterStrength = currentStrength;
                        while (loop3 == 1)
                        {
                           
                            if (characterstrup > 0)
                            {
                                currentStrength = strupDamage;
                                characterstrup = characterstrup - 1;
                            }
                            else
                            {
                                currentStrength = initialCharacterStrength;
                            }


                        std::cout << "\tskeleton\n";
                        std::cout << "\tKalusugan: " << skeletonHealth << "\n";
                        std::cout << "\tMana: " << skeletonMana << "\n\n";

                        std::cout << "\n" <<characterName << " Level." << level << "\n";
                        std::cout << "\tKalusugan: " << currentHealth << "\n";
                        std::cout << "\tMana: " << currentMana << "\n";

                            std::cout << "\t[ X ] Atake\n";
                            if (level >= 1 && level <= 2  && job == "Mandirigma")
                            {
                                std::cout << "\t[ 1 ] Slash(6)\n";
                            }
                            if (level >= 3 && level <= 4 && job == "Mandirigma")
                            {
                                std::cout << "\t[ 1 ] Slash(6)\n";
                                std::cout << "\t[ 2 ] Def Up!(6)\n";
                            }
                            if (level >= 5 && level <= 6 && job == "Mandirigma")
                            {
                                std::cout << "\t[ 1 ] Slash(6)\n";
                                std::cout << "\t[ 2 ] Def Up!(6)\n";
                                std::cout << "\t[ 3 ] Provoke(12)\n";
                            }
                            if (level >= 7 && job == "Mandirigma")
                            {
                                std::cout << "\t[ 1 ] Slash(6)\n";
                                std::cout << "\t[ 2 ] Def Up!(6)\n";
                                std::cout << "\t[ 3 ] Provoke(12)\n";
                                std::cout << "\t[ 4 ] Omni Slash(30)\n";
                            }

                            if (level >= 1 && level <= 2 && job == "Mago")
                            {
                                std::cout << "\t[ 5 ] Fireball(6)\n";
                            }
                            if (level >= 3 && level <= 4 && job == "Mago")
                            {
                                std::cout << "\t[ 5 ] Fireball(6)\n";
                                std::cout << "\t[ 6 ] Frost(6)\n";
                            }
                            if (level >= 5 && level <= 6 && job == "Mago")
                            {
                                std::cout << "\t[ 5 ] Fireball(6)\n";
                                std::cout << "\t[ 6 ] Frost(6)\n";
                                std::cout << "\t[ 7 ] Poison(12)\n";
                            }
                            if (level >= 7 && job == "Mago")
                            {
                                std::cout << "\t[ 5 ] Fireball(6)\n";
                                std::cout << "\t[ 6 ] Frost(6)\n";
                                std::cout << "\t[ 7 ] Poison(12)\n";
                                std::cout << "\t[ 8 ] Mega Flare(24)\n";
                            }
                            if (level >= 1 && level <= 2 && job == "Pari")
                            {
                                std::cout << "\t[ 9 ] Heal(6)\n";
                            }
                            if (level >= 3 && level <= 4 && job == "Pari")
                            {
                                std::cout << "\t[ 9 ] Heal(6)\n";
                                std::cout << "\t[ 10 ] Str Up!(6)\n";
                            }
                            if (level >= 5 && level <= 6 && job == "Pari")
                            {
                                std::cout << "\t[ 9 ] Heal(6)\n";
                                std::cout << "\t[ 10 ] Str Up!(6)\n";
                                std::cout << "\t[ 11 ] Reflect(12)\n";
                            }
                            if (level >= 7 && job == "Pari")
                            {
                                std::cout << "\t[ 9 ] Heal(6)\n";
                                std::cout << "\t[ 10 ] Str Up!(6)\n";
                                std::cout << "\t[ 11 ] Reflect(12)\n";
                                std::cout << "\t[ 12 ] Divine Smash(24)\n";
                            }

                            
                            std::cout << "\t[ Z ] Wait\n";
                            std::cout << "\t[ R ] Run\n";

                            std::string choice5 = "1";
                            if (level >= 1 && level <= 2 && job == "Mandirigma")
                            {
                                
                                do
                                {
                                    while (choice5 != "X" && choice5 != "1" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "1" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 3 && level <= 4 && job == "Mandirigma")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 5 && level <= 6 && job == "Mandirigma")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 7  && job == "Mandirigma")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "4" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "4" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 1 && level <= 2 && job == "Mago")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "5" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "5" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 3 && level <= 4 && job == "Mago")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 5 && level <= 6 && job == "Mago")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 7  && job == "Mago")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "8" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "8" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 1 && level <= 2 && job == "Pari")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "9" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "9" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 3 && level <= 4 && job == "Pari")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 5 && level <= 6 && job == "Pari")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "Z" && choice5 != "R");
                            }
                            else if (level >= 7  && job == "Pari")
                            {
                                do
                                {
                                    while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "12" && choice5 != "Z" && choice5 != "R")
                                    {
                                        std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                        break;
                                    }

                                    std::cout << "\tIlagay ang Iyong Pinili: ";
                                    std::getline(std::cin, choice5);
                                } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "12" && choice5 != "Z" && choice5 != "R");
                            }
                            
                            
                        

                            if (choice5 == "X")
                            {
                                int attack = (currentStrength * 2) - skeletonDefense;
                                skeletonHealth = skeletonHealth - attack;
                                std::cout << "\t" << characterName << " Damage: " << attack << "\n";
                            }
                            else if (choice5 == "1")
                            {
                                int slash = (currentStrength * 3) - skeletonDefense;
                                skeletonHealth = skeletonHealth - slash;
                                std::cout << "\t" << characterName << " Damage: " << slash << "\n";
                                currentMana = currentMana - 6;
                            }
                            else if (choice5 == "Z")
                            {
                                std::cout << "\tWait\n";
                            }
                            else if (choice5 == "R")
                            {
                                std::cout << "\tRun\n";
                                std::cout << "\tNakatakas ka na sa laban!\n";
                                loop3 = 0;
                            }
                            else if (choice5 == "2")
                            {
                                if (currentMana < 6)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 6)
                                {
                                    currentMana = currentMana - 6;
                                    currentDefense = currentDefense * 2;
                                    std::cout << "\tDef Up!\n";
                                }
                            }
                            else if (choice5 == "3")
                            {
                                if (currentMana < 12)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 12)
                                {
                                currentMana = currentMana - 12;
                                characterProvoke = 3;
                                std::cout << "\tProvoke!\n";
                                }
                            }
                            else if (choice5 == "4")
                            {
                                if (currentMana < 30)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 30)
                                {
                                currentMana = currentMana - 30;
                                int ommniSlash =(currentStrength * 12) - skeletonDefense;
                                skeletonHealth = skeletonHealth - ommniSlash;
                                std::cout << "\t" << characterName << " Damage: " << ommniSlash << "\n";
                                }
                            }
                            else if (choice5 == "5")
                            {
                                if (currentMana < 6)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 6)
                                {
                                    currentMana = currentMana - 6;
                                    int fireball = (currentMagic * 3) - skeletonDefense;
                                    skeletonHealth = skeletonHealth - fireball;
                                    std::cout << "\t" << characterName << " Damage: " << fireball << "\n";
                                }
                            }
                            else if (choice5 == "6")
                            {
                                if (currentMana < 12)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 12)
                                {
                                currentMana = currentMana - 12;
                                int frost = (currentMagic * 5) - skeletonDefense;
                                    skeletonHealth = skeletonHealth - frost;
                                    std::cout << "\t" << characterName << " Damage: " << frost << "\n";
                                    characterProvoke = 3;

                                }
                            }
                            else if (choice5 == "7")
                            {
                                if (currentMana < 12)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 12)
                                {
                                    currentMana = currentMana - 12;
                                    poison = 3;
                                    poisionDamage = (skeletonMaxHealth * 0.1) - skeletonDefense;
                                    skeletonHealth = skeletonHealth - poisionDamage;
                                    std::cout << "\tPoison!\n";
                                }
                            }
                            else if (choice5 == "8")
                            {
                                if (currentMana < 24)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 24)
                                {
                                    currentMana = currentMana - 24;
                                    int megaFlare = (currentMagic * 15) - skeletonDefense;
                                    skeletonHealth = skeletonHealth - megaFlare;
                                    std::cout << "\t" << characterName << " Damage: " << megaFlare << "\n";
                                }
                            }
                            else if (choice5 == "9")
                            {
                                if (currentMana < 6)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 6)
                                {
                                    currentMana = currentMana - 6;
                                    int heal = (currentMagic * 3);
                                    currentHealth = currentHealth + heal;
                                    std::cout << "\t" << characterName << " Heal: " << heal << "\n";
                                }
                            }
                            else if (choice5 == "10")
                            {
                                if (currentMana < 6)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 6)
                                {
                                    currentMana = currentMana - 6;
                                    strupDamage= (strength * 2);
                                    characterstrup = 3;
                                    std::cout << "\tStr Up!\n";
                                }
                            }
                            else if (choice5 == "11")
                            {
                                if (currentMana < 12)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 12)
                                {
                                    currentMana = currentMana - 12;
                                    reflect = 1;
                                    std::cout << "\tReflect!\n";
                                }
                            }
                            else if (choice5 == "12")
                            {
                                if (currentMana < 24)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (currentMana >= 24)
                                {
                                    currentMana = currentMana - 24;

                                    int divineSmash = skeletonHealth * 0.5;
                                    skeletonHealth = skeletonHealth - divineSmash;

                                    std::cout << "\t" << characterName << " Damage: " << divineSmash << "\n";
                                }
                            }



                            if (characterProvoke > 0)
                            {
                                std::cout << "\tskeleton ay provoked\n";
                                characterProvoke = characterProvoke - 1;
                            }
                            else
                            {
                                int randomskeleton = rand() % 2 + 1;
                                if (randomskeleton == 1)
                                {
                                    int skeletonAttack = (skeletonStrength * 2) - defense;
                                    currentHealth = currentHealth - skeletonAttack;
                                    std::cout << "\tskeleton Damage: " << skeletonAttack << "\n";

                                    if(reflect == 1)
                                    {
                                        skeletonHealth = skeletonHealth - skeletonAttack;
                                        reflect = 0;
                                        std::cout << "\tReflect Damage: " << skeletonAttack << "\n";
                                    }
                                }
                                else if (randomskeleton == 2)
                                {
                                    std::cout << "\tskeleton ay naghintay\n";
                                }
                            }
                            
                            if (poison > 0)
                            {
                                std::cout << "\tPoison Damage: " << poisionDamage << "\n";
                                skeletonHealth = skeletonHealth - poisionDamage;
                                poison = poison - 1;
                            }
                                    


                            if (skeletonHealth <= 0)
                            {
                                std::cout << "\tskeleton ay napatay!\n";
                                std::cout << "\tKaranasan: " << skeletonExp << "\n";
                                std::cout << "\tNakuha mo ang " << skeletonExp << " XP!\n";
                                need_exp = need_exp - skeletonExp; 
                                std::cout << "\tNakatakas ka na sa laban!\n";
                                loop3 = 0;
                            }
                            else if (currentHealth <= 0)
                            {
                                std::cout << "\tNamatay ka sa laban!\n";
                                loop3 = 0;
                            }
                        }
                    }
                    else if (choice4 == "2")
                    {
                        // Orc battle code
                        orc.setHealth();
                        orc.setMana();
                        orc.setStrength();
                        orc.setDefense();
                        orc.setAgility();
                        orc.setMagic();
                        orc.setExp();

                        int orcHealth = orc.getHealth();
int orcMana = orc.getMana();
int orcStrength = orc.getStrength();
int orcDefense = orc.getDefense();
int orcAgility = orc.getAgility();
int orcMagic = orc.getMagic();
int orcExp = orc.getExp();
int orcMaxHealth = orcHealth;

int currentHealth = health;
int currentMana = mana;
int currentStrength = strength;
int currentDefense = defense;
int currentAgility = agility;
int currentMagic = magic;

int loop3 = 1;

    int initialCharacterStrength = currentStrength;
    int initialOrcDefense = orcDefense;
    while (loop3 == 1)
    {
    
    if (characterstrup > 0)
    {
        currentStrength = strupDamage;
        characterstrup = characterstrup - 1;
    }
    else
    {
        currentStrength = initialCharacterStrength;
    }

    
    if (defup > 0)
    {
        orcDefense = defupdamage;
        defup = defup - 1;
    }
    else
    {
        orcDefense = initialOrcDefense;
    }


std::cout << "\torc\n";
std::cout << "\tKalusugan: " << orcHealth << "\n";
std::cout << "\tMana: " << orcMana << "\n\n";

std::cout << "\n" <<characterName << " Level." << level << "\n";
std::cout << "\tKalusugan: " << currentHealth << "\n";
std::cout << "\tMana: " << currentMana << "\n";

if (enemyProvoke > 0)
{
    std::cout << "\tikaw ay provoked\n";
    enemyProvoke = enemyProvoke - 1;
}
else
{
    std::cout << "\t[ X ] Atake\n";
    if (level >= 1 && level <= 2  && job == "Mandirigma")
    {
        std::cout << "\t[ 1 ] Slash(6)\n";
    }
    if (level >= 3 && level <= 4 && job == "Mandirigma")
    {
        std::cout << "\t[ 1 ] Slash(6)\n";
        std::cout << "\t[ 2 ] Def Up!(6)\n";
    }
    if (level >= 5 && level <= 6 && job == "Mandirigma")
    {
        std::cout << "\t[ 1 ] Slash(6)\n";
        std::cout << "\t[ 2 ] Def Up!(6)\n";
        std::cout << "\t[ 3 ] Provoke(12)\n";
    }
    if (level >= 7 && job == "Mandirigma")
    {
        std::cout << "\t[ 1 ] Slash(6)\n";
        std::cout << "\t[ 2 ] Def Up!(6)\n";
        std::cout << "\t[ 3 ] Provoke(12)\n";
        std::cout << "\t[ 4 ] Omni Slash(30)\n";
    }

    if (level >= 1 && level <= 2 && job == "Mago")
    {
        std::cout << "\t[ 5 ] Fireball(6)\n";
    }
    if (level >= 3 && level <= 4 && job == "Mago")
    {
        std::cout << "\t[ 5 ] Fireball(6)\n";
        std::cout << "\t[ 6 ] Frost(6)\n";
    }
    if (level >= 5 && level <= 6 && job == "Mago")
    {
        std::cout << "\t[ 5 ] Fireball(6)\n";
        std::cout << "\t[ 6 ] Frost(6)\n";
        std::cout << "\t[ 7 ] Poison(12)\n";
    }
    if (level >= 7 && job == "Mago")
    {
        std::cout << "\t[ 5 ] Fireball(6)\n";
        std::cout << "\t[ 6 ] Frost(6)\n";
        std::cout << "\t[ 7 ] Poison(12)\n";
        std::cout << "\t[ 8 ] Mega Flare(24)\n";
    }
    if (level >= 1 && level <= 2 && job == "Pari")
    {
        std::cout << "\t[ 9 ] Heal(6)\n";
    }
    if (level >= 3 && level <= 4 && job == "Pari")
    {
        std::cout << "\t[ 9 ] Heal(6)\n";
        std::cout << "\t[ 10 ] Str Up!(6)\n";
    }
    if (level >= 5 && level <= 6 && job == "Pari")
    {
        std::cout << "\t[ 9 ] Heal(6)\n";
        std::cout << "\t[ 10 ] Str Up!(6)\n";
        std::cout << "\t[ 11 ] Reflect(12)\n";
    }
    if (level >= 7 && job == "Pari")
    {
        std::cout << "\t[ 9 ] Heal(6)\n";
        std::cout << "\t[ 10 ] Str Up!(6)\n";
        std::cout << "\t[ 11 ] Reflect(12)\n";
        std::cout << "\t[ 12 ] Divine Smash(24)\n";
    }

    
    std::cout << "\t[ Z ] Wait\n";
    std::cout << "\t[ R ] Run\n";

    std::string choice5 = "1";
    if (level >= 1 && level <= 2 && job == "Mandirigma")
    {
        
        do
        {
            while (choice5 != "X" && choice5 != "1" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "1" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 3 && level <= 4 && job == "Mandirigma")
    {
        do
        {
            while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 5 && level <= 6 && job == "Mandirigma")
    {
        do
        {
            while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 7  && job == "Mandirigma")
    {
        do
        {
            while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "4" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "4" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 1 && level <= 2 && job == "Mago")
    {
        do
        {
            while (choice5 != "X" && choice5 != "5" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "5" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 3 && level <= 4 && job == "Mago")
    {
        do
        {
            while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 5 && level <= 6 && job == "Mago")
    {
        do
        {
            while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 7  && job == "Mago")
    {
        do
        {
            while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "8" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "8" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 1 && level <= 2 && job == "Pari")
    {
        do
        {
            while (choice5 != "X" && choice5 != "9" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "9" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 3 && level <= 4 && job == "Pari")
    {
        do
        {
            while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 5 && level <= 6 && job == "Pari")
    {
        do
        {
            while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 7  && job == "Pari")
    {
        do
        {
            while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "12" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "12" && choice5 != "Z" && choice5 != "R");
    }
    
    
   

    if (choice5 == "X")
    {
        int attack = (currentStrength * 2) - orcDefense;
        orcHealth = orcHealth - attack;
        std::cout << "\t" << characterName << " Damage: " << attack << "\n";
    }
    else if (choice5 == "1")
    {
        int slash = (currentStrength * 3) - orcDefense;
        orcHealth = orcHealth - slash;
        std::cout << "\t" << characterName << " Damage: " << slash << "\n";
        currentMana = currentMana - 6;
    }
    else if (choice5 == "Z")
    {
        std::cout << "\tWait\n";
    }
    else if (choice5 == "R")
    {
        std::cout << "\tRun\n";
        std::cout << "\tNakatakas ka na sa laban!\n";
        loop3 = 0;
    }
    else if (choice5 == "2")
    {
        if (currentMana < 6)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 6)
        {
            currentMana = currentMana - 6;
            currentDefense = currentDefense * 2;
            std::cout << "\tDef Up!\n";
        }
    }
    else if (choice5 == "3")
    {
        if (currentMana < 12)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 12)
        {
        currentMana = currentMana - 12;
        characterProvoke = 3;
        std::cout << "\tProvoke!\n";
        }
    }
    else if (choice5 == "4")
    {
        if (currentMana < 30)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 30)
        {
        currentMana = currentMana - 30;
        int ommniSlash =(currentStrength * 12) - orcDefense;
        orcHealth = orcHealth - ommniSlash;
        std::cout << "\t" << characterName << " Damage: " << ommniSlash << "\n";
        }
    }
    else if (choice5 == "5")
    {
        if (currentMana < 6)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 6)
        {
            currentMana = currentMana - 6;
            int fireball = (currentMagic * 3) - orcDefense;
            orcHealth = orcHealth - fireball;
            std::cout << "\t" << characterName << " Damage: " << fireball << "\n";
        }
    }
    else if (choice5 == "6")
    {
        if (currentMana < 12)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 12)
        {
           currentMana = currentMana - 12;
           int frost = (currentMagic * 5) - orcDefense;
            orcHealth = orcHealth - frost;
            std::cout << "\t" << characterName << " Damage: " << frost << "\n";
            characterProvoke = 3;

        }
    }
    else if (choice5 == "7")
    {
        if (currentMana < 12)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 12)
        {
            currentMana = currentMana - 12;
            poison = 3;
            poisionDamage = (orcMaxHealth * 0.1) - orcDefense;
            orcHealth = orcHealth - poisionDamage;
            std::cout << "\tPoison!\n";
        }
    }
    else if (choice5 == "8")
    {
        if (currentMana < 24)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 24)
        {
            currentMana = currentMana - 24;
            int megaFlare = (currentMagic * 15) - orcDefense;
            orcHealth = orcHealth - megaFlare;
            std::cout << "\t" << characterName << " Damage: " << megaFlare << "\n";
        }
    }
    else if (choice5 == "9")
    {
        if (currentMana < 6)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 6)
        {
            currentMana = currentMana - 6;
            int heal = (currentMagic * 3);
            currentHealth = currentHealth + heal;
            std::cout << "\t" << characterName << " Heal: " << heal << "\n";
        }
    }
    else if (choice5 == "10")
    {
        if (currentMana < 6)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 6)
        {
            currentMana = currentMana - 6;
            strupDamage= (strength * 2);
            characterstrup = 3;
            std::cout << "\tStr Up!\n";
        }
    }
    else if (choice5 == "11")
    {
        if (currentMana < 12)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 12)
        {
            currentMana = currentMana - 12;
            reflect = 1;
            std::cout << "\tReflect!\n";
        }
    }
    else if (choice5 == "12")
    {
        if (currentMana < 24)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 24)
        {
            currentMana = currentMana - 24;

            int divineSmash = orcHealth * 0.5;
            orcHealth = orcHealth - divineSmash;

            std::cout << "\t" << characterName << " Damage: " << divineSmash << "\n";
        }
    }
}



    if (characterProvoke > 0)
    {
        std::cout << "\torc ay provoked\n";
        characterProvoke = characterProvoke - 1;
    }
    else
    {
        int randomorc = rand() % 4 + 1;
        if (randomorc == 1)
        {
            int orcAttack = (orcStrength * 2) - defense;
            currentHealth = currentHealth - orcAttack;
            std::cout << "\torc Damage: " << orcAttack << "\n";

            if(reflect == 1)
            {
                orcHealth = orcHealth - orcAttack;
                reflect = 0;
                std::cout << "\tReflect Damage: " << orcAttack << "\n";
            }
        }
        else if (randomorc == 2)
        {
            std::cout << "\torc ay naghintay\n";
        }
        else if (randomorc == 3)
        {
            if (orcMana < 6)
            {
                std::cout << "\tDi sapat ang mana!\n";
            }
            else if (orcMana >= 6)
            {
                defupdamage = (orcDefense * 2);
                defup = 3;
                orcMana = orcMana - 6;
            }
        }
        else if (randomorc == 4)
        {
            if (orcMana < 12)
            {
                std::cout << "\tDi sapat ang mana!\n";
            }
            else if (orcMana >= 12)
            {
                orcMana = orcMana - 12;
                enemyProvoke = 3;   
            }
        }

    }
    
    if (poison > 0)
    {
        std::cout << "\tPoison Damage: " << poisionDamage << "\n";
        orcHealth = orcHealth - poisionDamage;
        poison = poison - 1;
    }
            


    if (orcHealth <= 0)
    {
        std::cout << "\torc ay napatay!\n";
        std::cout << "\tKaranasan: " << orcExp << "\n";
        std::cout << "\tNakuha mo ang " << orcExp << " XP!\n";
        need_exp = need_exp - orcExp; 
        std::cout << "\tNakatakas ka na sa laban!\n";
        loop3 = 0;
    }
    else if (currentHealth <= 0)
    {
        std::cout << "\tNamatay ka sa laban!\n";
        loop3 = 0;
    }
}
                    }
                    else if (choice4 == "3")
                    {
                        // Zombie battle code
                        zombie.setHealth();
                        zombie.setMana();
                        zombie.setStrength();
                        zombie.setDefense();
                        zombie.setAgility();
                        zombie.setMagic();
                        zombie.setExp();

                        int zombieHealth = zombie.getHealth();
int zombieMana = zombie.getMana();
int zombieStrength = zombie.getStrength();
int zombieDefense = zombie.getDefense();
int zombieAgility = zombie.getAgility();
int zombieMagic = zombie.getMagic();
int zombieExp = zombie.getExp();
int zombieMaxHealth = zombieHealth;

int currentHealth = health;
int currentMana = mana;
int currentStrength = strength;
int currentDefense = defense;
int currentAgility = agility;
int currentMagic = magic;

int loop3 = 1;
int initialCharacterStrength = currentStrength;
while (loop3 == 1)
{
    
    if (characterstrup != 0)
    {
        currentStrength = strupDamage;
        characterstrup = characterstrup - 1;
    }
    else
    {
        currentStrength = initialCharacterStrength;
    }


std::cout << "\tzombie\n";
std::cout << "\tKalusugan: " << zombieHealth << "\n";
std::cout << "\tMana: " << zombieMana << "\n\n";

std::cout << "\n" <<characterName << " Level." << level << "\n";
std::cout << "\tKalusugan: " << currentHealth << "\n";
std::cout << "\tMana: " << currentMana << "\n";

    std::cout << "\t[ X ] Atake\n";
    if (level >= 1 && level <= 2  && job == "Mandirigma")
    {
        std::cout << "\t[ 1 ] Slash(6)\n";
    }
    if (level >= 3 && level <= 4 && job == "Mandirigma")
    {
        std::cout << "\t[ 1 ] Slash(6)\n";
        std::cout << "\t[ 2 ] Def Up!(6)\n";
    }
    if (level >= 5 && level <= 6 && job == "Mandirigma")
    {
        std::cout << "\t[ 1 ] Slash(6)\n";
        std::cout << "\t[ 2 ] Def Up!(6)\n";
        std::cout << "\t[ 3 ] Provoke(12)\n";
    }
    if (level >= 7 && job == "Mandirigma")
    {
        std::cout << "\t[ 1 ] Slash(6)\n";
        std::cout << "\t[ 2 ] Def Up!(6)\n";
        std::cout << "\t[ 3 ] Provoke(12)\n";
        std::cout << "\t[ 4 ] Omni Slash(30)\n";
    }

    if (level >= 1 && level <= 2 && job == "Mago")
    {
        std::cout << "\t[ 5 ] Fireball(6)\n";
    }
    if (level >= 3 && level <= 4 && job == "Mago")
    {
        std::cout << "\t[ 5 ] Fireball(6)\n";
        std::cout << "\t[ 6 ] Frost(6)\n";
    }
    if (level >= 5 && level <= 6 && job == "Mago")
    {
        std::cout << "\t[ 5 ] Fireball(6)\n";
        std::cout << "\t[ 6 ] Frost(6)\n";
        std::cout << "\t[ 7 ] Poison(12)\n";
    }
    if (level >= 7 && job == "Mago")
    {
        std::cout << "\t[ 5 ] Fireball(6)\n";
        std::cout << "\t[ 6 ] Frost(6)\n";
        std::cout << "\t[ 7 ] Poison(12)\n";
        std::cout << "\t[ 8 ] Mega Flare(24)\n";
    }
    if (level >= 1 && level <= 2 && job == "Pari")
    {
        std::cout << "\t[ 9 ] Heal(6)\n";
    }
    if (level >= 3 && level <= 4 && job == "Pari")
    {
        std::cout << "\t[ 9 ] Heal(6)\n";
        std::cout << "\t[ 10 ] Str Up!(6)\n";
    }
    if (level >= 5 && level <= 6 && job == "Pari")
    {
        std::cout << "\t[ 9 ] Heal(6)\n";
        std::cout << "\t[ 10 ] Str Up!(6)\n";
        std::cout << "\t[ 11 ] Reflect(12)\n";
    }
    if (level >= 7 && job == "Pari")
    {
        std::cout << "\t[ 9 ] Heal(6)\n";
        std::cout << "\t[ 10 ] Str Up!(6)\n";
        std::cout << "\t[ 11 ] Reflect(12)\n";
        std::cout << "\t[ 12 ] Divine Smash(24)\n";
    }

    
    std::cout << "\t[ Z ] Wait\n";
    std::cout << "\t[ R ] Run\n";

    std::string choice5 = "1";
    if (level >= 1 && level <= 2 && job == "Mandirigma")
    {
        
        do
        {
            while (choice5 != "X" && choice5 != "1" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "1" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 3 && level <= 4 && job == "Mandirigma")
    {
        do
        {
            while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 5 && level <= 6 && job == "Mandirigma")
    {
        do
        {
            while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 7  && job == "Mandirigma")
    {
        do
        {
            while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "4" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "4" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 1 && level <= 2 && job == "Mago")
    {
        do
        {
            while (choice5 != "X" && choice5 != "5" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "5" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 3 && level <= 4 && job == "Mago")
    {
        do
        {
            while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 5 && level <= 6 && job == "Mago")
    {
        do
        {
            while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 7  && job == "Mago")
    {
        do
        {
            while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "8" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "8" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 1 && level <= 2 && job == "Pari")
    {
        do
        {
            while (choice5 != "X" && choice5 != "9" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "9" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 3 && level <= 4 && job == "Pari")
    {
        do
        {
            while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 5 && level <= 6 && job == "Pari")
    {
        do
        {
            while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 7  && job == "Pari")
    {
        do
        {
            while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "12" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "12" && choice5 != "Z" && choice5 != "R");
    }
    
    
   

    if (choice5 == "X")
    {
        int attack = (currentStrength * 2) - zombieDefense;
        zombieHealth = zombieHealth - attack;
        std::cout << "\t" << characterName << " Damage: " << attack << "\n";
    }
    else if (choice5 == "1")
    {
        int slash = (currentStrength * 3) - zombieDefense;
        zombieHealth = zombieHealth - slash;
        std::cout << "\t" << characterName << " Damage: " << slash << "\n";
        currentMana = currentMana - 6;
    }
    else if (choice5 == "Z")
    {
        std::cout << "\tWait\n";
    }
    else if (choice5 == "R")
    {
        std::cout << "\tRun\n";
        std::cout << "\tNakatakas ka na sa laban!\n";
        loop3 = 0;
    }
    else if (choice5 == "2")
    {
        if (currentMana < 6)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 6)
        {
            currentMana = currentMana - 6;
            currentDefense = currentDefense * 2;
            std::cout << "\tDef Up!\n";
        }
    }
    else if (choice5 == "3")
    {
        if (currentMana < 12)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 12)
        {
        currentMana = currentMana - 12;
        characterProvoke = 3;
        std::cout << "\tProvoke!\n";
        }
    }
    else if (choice5 == "4")
    {
        if (currentMana < 30)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 30)
        {
        currentMana = currentMana - 30;
        int ommniSlash =(currentStrength * 12) - zombieDefense;
        zombieHealth = zombieHealth - ommniSlash;
        std::cout << "\t" << characterName << " Damage: " << ommniSlash << "\n";
        }
    }
    else if (choice5 == "5")
    {
        if (currentMana < 6)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 6)
        {
            currentMana = currentMana - 6;
            int fireball = (currentMagic * 3) - zombieDefense;
            zombieHealth = zombieHealth - fireball;
            std::cout << "\t" << characterName << " Damage: " << fireball << "\n";
        }
    }
    else if (choice5 == "6")
    {
        if (currentMana < 12)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 12)
        {
           currentMana = currentMana - 12;
           int frost = (currentMagic * 5) - zombieDefense;
            zombieHealth = zombieHealth - frost;
            std::cout << "\t" << characterName << " Damage: " << frost << "\n";
            characterProvoke = 3;

        }
    }
    else if (choice5 == "7")
    {
        if (currentMana < 12)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 12)
        {
            currentMana = currentMana - 12;
            poison = 3;
            poisionDamage = (zombieMaxHealth * 0.1) - zombieDefense;
            zombieHealth = zombieHealth - poisionDamage;
            std::cout << "\tPoison!\n";
        }
    }
    else if (choice5 == "8")
    {
        if (currentMana < 24)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 24)
        {
            currentMana = currentMana - 24;
            int megaFlare = (currentMagic * 15) - zombieDefense;
            zombieHealth = zombieHealth - megaFlare;
            std::cout << "\t" << characterName << " Damage: " << megaFlare << "\n";
        }
    }
    else if (choice5 == "9")
    {
        if (currentMana < 6)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 6)
        {
            currentMana = currentMana - 6;
            int heal = (currentMagic * 3);
            currentHealth = currentHealth + heal;
            std::cout << "\t" << characterName << " Heal: " << heal << "\n";
        }
    }
    else if (choice5 == "10")
    {
        if (currentMana < 6)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 6)
        {
            currentMana = currentMana - 6;
            strupDamage= (strength * 2);
            characterstrup = 3;
            std::cout << "\tStr Up!\n";
        }
    }
    else if (choice5 == "11")
    {
        if (currentMana < 12)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 12)
        {
            currentMana = currentMana - 12;
            reflect = 1;
            std::cout << "\tReflect!\n";
        }
    }
    else if (choice5 == "12")
    {
        if (currentMana < 24)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 24)
        {
            currentMana = currentMana - 24;

            int divineSmash = zombieHealth * 0.5;
            zombieHealth = zombieHealth - divineSmash;

            std::cout << "\t" << characterName << " Damage: " << divineSmash << "\n";
        }
    }



    if (characterProvoke > 0)
    {
        std::cout << "\tzombie ay provoked\n";
        characterProvoke = characterProvoke - 1;
    }
    else
    {
        int randomzombie = rand() % 2 + 1;
        if (randomzombie == 1)
        {
            int zombieAttack = (zombieStrength * 2) - defense;
            currentHealth = currentHealth - zombieAttack;
            std::cout << "\tzombie Damage: " << zombieAttack << "\n";

            if(reflect == 1)
            {
                zombieHealth = zombieHealth - zombieAttack;
                reflect = 0;
                std::cout << "\tReflect Damage: " << zombieAttack << "\n";
            }
        }
        else if (randomzombie == 2)
        {
            std::cout << "\tzombie ay naghintay\n";
        }
    }
    
    if (poison > 0)
    {
        std::cout << "\tPoison Damage: " << poisionDamage << "\n";
        zombieHealth = zombieHealth - poisionDamage;
        poison = poison - 1;
    }
            

    if (zombieHealth <= 0)
    {
        std::cout << "\tzombie ay napatay!\n";
        std::cout << "\tKaranasan: " << zombieExp << "\n";
        std::cout << "\tNakuha mo ang " << zombieExp << " XP!\n";
        need_exp = need_exp - zombieExp; 
        std::cout << "\tNakatakas ka na sa laban!\n";
        loop3 = 0;
    }
    else if (currentHealth <= 0)
    {
        std::cout << "\tNamatay ka sa laban!\n";
        loop3 = 0;
    }
}
                
                    }
                }
                else if (choice2 == "3") 
                {
                    // Main Mission code
                    std::cout << "\tPangunahing Misyon\n";
                    std::cout << "\t[ 1 ] Captain\n";
                    std::cout << "\t[ 2 ] General\n";
                    std::cout << "\t[ 3 ] Emperor\n";

                    std::string choice5 = "1";
                    do
                    {
                        while (choice5 != "1" && choice5 != "2" && choice5 != "3")
                        {
                            std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                            break;
                        }

                        std::cout << "\tIlagay ang Iyong Pinili: ";
                        std::getline(std::cin, choice5);
                    } while (choice5 != "1" && choice5 != "2" && choice5 != "3");

                    if (choice5 == "1")
                    {
                        // Captain battle code
                        captain.setHealth();
                        captain.setMana();
                        captain.setStrength();
                        captain.setDefense();
                        captain.setAgility();
                        captain.setMagic();
                        captain.setExp();

                        int captainHealth = captain.getHealth();
int captainMana = captain.getMana();
int captainStrength = captain.getStrength();
int captainDefense = captain.getDefense();
int captainAgility = captain.getAgility();
int captainMagic = captain.getMagic();
int captainExp = captain.getExp();
int captainMaxHealth = captainHealth;

int currentHealth = health;
int currentMana = mana;
int currentStrength = strength;
int currentDefense = defense;
int currentAgility = agility;
int currentMagic = magic;

int loop3 = 1;
int initialCaptainDefense = captainDefense;
int initialCharacterStrength = currentStrength;
while (loop3 == 1)
{
   
    if (characterstrup != 0)
    {
        currentStrength = strupDamage;
        characterstrup = characterstrup - 1;
    }
    else
    {
        currentStrength = initialCharacterStrength;
    }

    if (defup > 0)
    {
        captainDefense = defupdamage;
        defup = defup - 1;
    }
    else
    {
        captainDefense = initialCaptainDefense;
    }


std::cout << "\tcaptain\n";
std::cout << "\tKalusugan: " << captainHealth << "\n";
std::cout << "\tMana: " << captainMana << "\n\n";

std::cout << "\n" <<characterName << " Level." << level << "\n";
std::cout << "\tKalusugan: " << currentHealth << "\n";
std::cout << "\tMana: " << currentMana << "\n";

    std::cout << "\t[ X ] Atake\n";
    if (level >= 1 && level <= 2  && job == "Mandirigma")
    {
        std::cout << "\t[ 1 ] Slash(6)\n";
    }
    if (level >= 3 && level <= 4 && job == "Mandirigma")
    {
        std::cout << "\t[ 1 ] Slash(6)\n";
        std::cout << "\t[ 2 ] Def Up!(6)\n";
    }
    if (level >= 5 && level <= 6 && job == "Mandirigma")
    {
        std::cout << "\t[ 1 ] Slash(6)\n";
        std::cout << "\t[ 2 ] Def Up!(6)\n";
        std::cout << "\t[ 3 ] Provoke(12)\n";
    }
    if (level >= 7 && job == "Mandirigma")
    {
        std::cout << "\t[ 1 ] Slash(6)\n";
        std::cout << "\t[ 2 ] Def Up!(6)\n";
        std::cout << "\t[ 3 ] Provoke(12)\n";
        std::cout << "\t[ 4 ] Omni Slash(30)\n";
    }

    if (level >= 1 && level <= 2 && job == "Mago")
    {
        std::cout << "\t[ 5 ] Fireball(6)\n";
    }
    if (level >= 3 && level <= 4 && job == "Mago")
    {
        std::cout << "\t[ 5 ] Fireball(6)\n";
        std::cout << "\t[ 6 ] Frost(6)\n";
    }
    if (level >= 5 && level <= 6 && job == "Mago")
    {
        std::cout << "\t[ 5 ] Fireball(6)\n";
        std::cout << "\t[ 6 ] Frost(6)\n";
        std::cout << "\t[ 7 ] Poison(12)\n";
    }
    if (level >= 7 && job == "Mago")
    {
        std::cout << "\t[ 5 ] Fireball(6)\n";
        std::cout << "\t[ 6 ] Frost(6)\n";
        std::cout << "\t[ 7 ] Poison(12)\n";
        std::cout << "\t[ 8 ] Mega Flare(24)\n";
    }
    if (level >= 1 && level <= 2 && job == "Pari")
    {
        std::cout << "\t[ 9 ] Heal(6)\n";
    }
    if (level >= 3 && level <= 4 && job == "Pari")
    {
        std::cout << "\t[ 9 ] Heal(6)\n";
        std::cout << "\t[ 10 ] Str Up!(6)\n";
    }
    if (level >= 5 && level <= 6 && job == "Pari")
    {
        std::cout << "\t[ 9 ] Heal(6)\n";
        std::cout << "\t[ 10 ] Str Up!(6)\n";
        std::cout << "\t[ 11 ] Reflect(12)\n";
    }
    if (level >= 7 && job == "Pari")
    {
        std::cout << "\t[ 9 ] Heal(6)\n";
        std::cout << "\t[ 10 ] Str Up!(6)\n";
        std::cout << "\t[ 11 ] Reflect(12)\n";
        std::cout << "\t[ 12 ] Divine Smash(24)\n";
    }

    
    std::cout << "\t[ Z ] Wait\n";
    std::cout << "\t[ R ] Run\n";

    std::string choice5 = "1";
    if (level >= 1 && level <= 2 && job == "Mandirigma")
    {
        
        do
        {
            while (choice5 != "X" && choice5 != "1" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "1" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 3 && level <= 4 && job == "Mandirigma")
    {
        do
        {
            while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 5 && level <= 6 && job == "Mandirigma")
    {
        do
        {
            while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 7  && job == "Mandirigma")
    {
        do
        {
            while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "4" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "4" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 1 && level <= 2 && job == "Mago")
    {
        do
        {
            while (choice5 != "X" && choice5 != "5" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "5" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 3 && level <= 4 && job == "Mago")
    {
        do
        {
            while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 5 && level <= 6 && job == "Mago")
    {
        do
        {
            while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 7  && job == "Mago")
    {
        do
        {
            while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "8" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "8" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 1 && level <= 2 && job == "Pari")
    {
        do
        {
            while (choice5 != "X" && choice5 != "9" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "9" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 3 && level <= 4 && job == "Pari")
    {
        do
        {
            while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 5 && level <= 6 && job == "Pari")
    {
        do
        {
            while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "Z" && choice5 != "R");
    }
    else if (level >= 7  && job == "Pari")
    {
        do
        {
            while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "12" && choice5 != "Z" && choice5 != "R")
            {
                std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                break;
            }

            std::cout << "\tIlagay ang Iyong Pinili: ";
            std::getline(std::cin, choice5);
        } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "12" && choice5 != "Z" && choice5 != "R");
    }
    
    
   

    if (choice5 == "X")
    {
        int attack = (currentStrength * 2) - captainDefense;
        captainHealth = captainHealth - attack;
        std::cout << "\t" << characterName << " Damage: " << attack << "\n";
    }
    else if (choice5 == "1")
    {
        int slash = (currentStrength * 3) - captainDefense;
        captainHealth = captainHealth - slash;
        std::cout << "\t" << characterName << " Damage: " << slash << "\n";
        currentMana = currentMana - 6;
    }
    else if (choice5 == "Z")
    {
        std::cout << "\tWait\n";
    }
    else if (choice5 == "R")
    {
        std::cout << "\tRun\n";
        std::cout << "\tNakatakas ka na sa laban!\n";
        loop3 = 0;
    }
    else if (choice5 == "2")
    {
        if (currentMana < 6)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 6)
        {
            currentMana = currentMana - 6;
            currentDefense = currentDefense * 2;
            std::cout << "\tDef Up!\n";
        }
    }
    else if (choice5 == "3")
    {
        if (currentMana < 12)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 12)
        {
        currentMana = currentMana - 12;
        characterProvoke = 3;
        std::cout << "\tProvoke!\n";
        }
    }
    else if (choice5 == "4")
    {
        if (currentMana < 30)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 30)
        {
        currentMana = currentMana - 30;
        int ommniSlash =(currentStrength * 12) - captainDefense;
        captainHealth = captainHealth - ommniSlash;
        std::cout << "\t" << characterName << " Damage: " << ommniSlash << "\n";
        }
    }
    else if (choice5 == "5")
    {
        if (currentMana < 6)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 6)
        {
            currentMana = currentMana - 6;
            int fireball = (currentMagic * 3) - captainDefense;
            captainHealth = captainHealth - fireball;
            std::cout << "\t" << characterName << " Damage: " << fireball << "\n";
        }
    }
    else if (choice5 == "6")
    {
        if (currentMana < 12)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 12)
        {
           currentMana = currentMana - 12;
           int frost = (currentMagic * 5) - captainDefense;
            captainHealth = captainHealth - frost;
            std::cout << "\t" << characterName << " Damage: " << frost << "\n";
            characterProvoke = 3;

        }
    }
    else if (choice5 == "7")
    {
        if (currentMana < 12)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 12)
        {
            currentMana = currentMana - 12;
            poison = 3;
            poisionDamage = (captainMaxHealth * 0.1) - captainDefense;
            captainHealth = captainHealth - poisionDamage;
            std::cout << "\tPoison!\n";
        }
    }
    else if (choice5 == "8")
    {
        if (currentMana < 24)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 24)
        {
            currentMana = currentMana - 24;
            int megaFlare = (currentMagic * 15) - captainDefense;
            captainHealth = captainHealth - megaFlare;
            std::cout << "\t" << characterName << " Damage: " << megaFlare << "\n";
        }
    }
    else if (choice5 == "9")
    {
        if (currentMana < 6)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 6)
        {
            currentMana = currentMana - 6;
            int heal = (currentMagic * 3);
            currentHealth = currentHealth + heal;
            std::cout << "\t" << characterName << " Heal: " << heal << "\n";
        }
    }
    else if (choice5 == "10")
    {
        if (currentMana < 6)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 6)
        {
            currentMana = currentMana - 6;
            strupDamage= (strength * 2);
            characterstrup = 3;
            std::cout << "\tStr Up!\n";
        }
    }
    else if (choice5 == "11")
    {
        if (currentMana < 12)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 12)
        {
            currentMana = currentMana - 12;
            reflect = 1;
            std::cout << "\tReflect!\n";
        }
    }
    else if (choice5 == "12")
    {
        if (currentMana < 24)
        {
            std::cout << "\tDi sapat ang mana!\n";
        }
        else if (currentMana >= 24)
        {
            currentMana = currentMana - 24;

            int divineSmash = captainHealth * 0.5;
            captainHealth = captainHealth - divineSmash;

            std::cout << "\t" << characterName << " Damage: " << divineSmash << "\n";
        }
    }



    if (characterProvoke > 0)
    {
        std::cout << "\tcaptain ay provoked\n";
        characterProvoke = characterProvoke - 1;
    }
    else
    {
        int randomcaptain = rand() % 4 + 1;
        if (randomcaptain == 1)
        {
            int captainAttack = (captainStrength * 2) - defense;
            currentHealth = currentHealth - captainAttack;
            std::cout << "\tcaptain Damage: " << captainAttack << "\n";

            if(reflect == 1)
            {
                captainHealth = captainHealth - captainAttack;
                reflect = 0;
                std::cout << "\tReflect Damage: " << captainAttack << "\n";
            }
        }
        else if (randomcaptain == 2)
        {
            std::cout << "\tcaptain ay naghintay\n";
        }
        else if (randomcaptain == 3)
        {
            if (captainMana < 6)
            {
                std::cout << "\tDi sapat ang mana!\n";
            }
            else if (captainMana >= 6)
            {
                int slash = (captainStrength * 3) - defense;
                currentHealth = currentHealth - slash;
                std::cout << "\tcaptain Damage: " << slash << "\n";

                if (reflect == 1)
                {
                    captainHealth = captainHealth - slash;
                    reflect = 0;
                    std::cout << "\tReflect Damage: " << slash << "\n";
                }
                captainMana = captainMana - 6;
                
            }
            
        }
        else if (randomcaptain == 4)
        {
            if (captainMana < 6)
            {
                std::cout << "\tDi sapat ang mana!\n";
            }
            else if (captainMana >= 6)
            {
                defupdamage = (captainDefense * 2);
                defup = 3;
                captainMana = captainMana - 6;
            }
        }
    }
    
    if (poison > 0)
    {
        std::cout << "\tPoison Damage: " << poisionDamage << "\n";
        captainHealth = captainHealth - poisionDamage;
        poison = poison - 1;
    }
            


    if (captainHealth <= 0)
    {
        std::cout << "\tcaptain ay napatay!\n";
        std::cout << "\tKaranasan: " << captainExp << "\n";
        std::cout << "\tNakuha mo ang " << captainExp << " XP!\n";
        need_exp = need_exp - captainExp; 
        std::cout << "\tNakatakas ka na sa laban!\n";
        loop3 = 0;
    }
    else if (currentHealth <= 0)
    {
        std::cout << "\tNamatay ka sa laban!\n";
        loop3 = 0;
    }
}
                    }
                    else if (choice5 == "2")
                    {
                        // General battle code
                        general.setHealth();
                        general.setMana();
                        general.setStrength();
                        general.setDefense();
                        general.setAgility();
                        general.setMagic();
                        general.setExp();

                        int generalHealth = general.getHealth();
                    int generalMana = general.getMana();
                    int generalStrength = general.getStrength();
                    int generalDefense = general.getDefense();
                    int generalAgility = general.getAgility();
                    int generalMagic = general.getMagic();
                    int generalExp = general.getExp();
                    int generalMaxHealth = generalHealth;

                    int currentHealth = health;
                    int currentMana = mana;
                    int currentStrength = strength;
                    int currentDefense = defense;
                    int currentAgility = agility;
                    int currentMagic = magic;

                    int initialCharacterStrength = currentStrength;
                    int loop3 = 1;
                    while (loop3 == 1)
                    {
                    
                        if (characterstrup != 0)
                        {
                            currentStrength = strupDamage;
                            characterstrup = characterstrup - 1;
                        }
                        else
                        {
                            currentStrength = initialCharacterStrength;
                        }


                    std::cout << "\tgeneral\n";
                    std::cout << "\tKalusugan: " << generalHealth << "\n";
                    std::cout << "\tMana: " << generalMana << "\n\n";

                    std::cout << "\n" <<characterName << " Level." << level << "\n";
                    std::cout << "\tKalusugan: " << currentHealth << "\n";
                    std::cout << "\tMana: " << currentMana << "\n";

                    if (enemyProvoke > 0)
                    {
                        std::cout << "\tIkaw ay provoked\n";
                        enemyProvoke = enemyProvoke - 1;
                    }
                    else
                    {
                        std::cout << "\t[ X ] Atake\n";
                        if (level >= 1 && level <= 2  && job == "Mandirigma")
                        {
                            std::cout << "\t[ 1 ] Slash(6)\n";
                        }
                        if (level >= 3 && level <= 4 && job == "Mandirigma")
                        {
                            std::cout << "\t[ 1 ] Slash(6)\n";
                            std::cout << "\t[ 2 ] Def Up!(6)\n";
                        }
                        if (level >= 5 && level <= 6 && job == "Mandirigma")
                        {
                            std::cout << "\t[ 1 ] Slash(6)\n";
                            std::cout << "\t[ 2 ] Def Up!(6)\n";
                            std::cout << "\t[ 3 ] Provoke(12)\n";
                        }
                        if (level >= 7 && job == "Mandirigma")
                        {
                            std::cout << "\t[ 1 ] Slash(6)\n";
                            std::cout << "\t[ 2 ] Def Up!(6)\n";
                            std::cout << "\t[ 3 ] Provoke(12)\n";
                            std::cout << "\t[ 4 ] Omni Slash(30)\n";
                        }

                        if (level >= 1 && level <= 2 && job == "Mago")
                        {
                            std::cout << "\t[ 5 ] Fireball(6)\n";
                        }
                        if (level >= 3 && level <= 4 && job == "Mago")
                        {
                            std::cout << "\t[ 5 ] Fireball(6)\n";
                            std::cout << "\t[ 6 ] Frost(6)\n";
                        }
                        if (level >= 5 && level <= 6 && job == "Mago")
                        {
                            std::cout << "\t[ 5 ] Fireball(6)\n";
                            std::cout << "\t[ 6 ] Frost(6)\n";
                            std::cout << "\t[ 7 ] Poison(12)\n";
                        }
                        if (level >= 7 && job == "Mago")
                        {
                            std::cout << "\t[ 5 ] Fireball(6)\n";
                            std::cout << "\t[ 6 ] Frost(6)\n";
                            std::cout << "\t[ 7 ] Poison(12)\n";
                            std::cout << "\t[ 8 ] Mega Flare(24)\n";
                        }
                        if (level >= 1 && level <= 2 && job == "Pari")
                        {
                            std::cout << "\t[ 9 ] Heal(6)\n";
                        }
                        if (level >= 3 && level <= 4 && job == "Pari")
                        {
                            std::cout << "\t[ 9 ] Heal(6)\n";
                            std::cout << "\t[ 10 ] Str Up!(6)\n";
                        }
                        if (level >= 5 && level <= 6 && job == "Pari")
                        {
                            std::cout << "\t[ 9 ] Heal(6)\n";
                            std::cout << "\t[ 10 ] Str Up!(6)\n";
                            std::cout << "\t[ 11 ] Reflect(12)\n";
                        }
                        if (level >= 7 && job == "Pari")
                        {
                            std::cout << "\t[ 9 ] Heal(6)\n";
                            std::cout << "\t[ 10 ] Str Up!(6)\n";
                            std::cout << "\t[ 11 ] Reflect(12)\n";
                            std::cout << "\t[ 12 ] Divine Smash(24)\n";
                        }

                        
                        std::cout << "\t[ Z ] Wait\n";
                        std::cout << "\t[ R ] Run\n";

                        std::string choice5 = "1";
                        if (level >= 1 && level <= 2 && job == "Mandirigma")
                        {
                            
                            do
                            {
                                while (choice5 != "X" && choice5 != "1" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "1" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 3 && level <= 4 && job == "Mandirigma")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 5 && level <= 6 && job == "Mandirigma")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 7  && job == "Mandirigma")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "4" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "4" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 1 && level <= 2 && job == "Mago")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "5" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "5" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 3 && level <= 4 && job == "Mago")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 5 && level <= 6 && job == "Mago")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 7  && job == "Mago")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "8" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "8" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 1 && level <= 2 && job == "Pari")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "9" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "9" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 3 && level <= 4 && job == "Pari")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 5 && level <= 6 && job == "Pari")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 7  && job == "Pari")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "12" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "12" && choice5 != "Z" && choice5 != "R");
                        }
                        
                        
                    

                        if (choice5 == "X")
                        {
                            int attack = (currentStrength * 2) - generalDefense;
                            generalHealth = generalHealth - attack;
                            std::cout << "\t" << characterName << " Damage: " << attack << "\n";
                        }
                        else if (choice5 == "1")
                        {
                            int slash = (currentStrength * 3) - generalDefense;
                            generalHealth = generalHealth - slash;
                            std::cout << "\t" << characterName << " Damage: " << slash << "\n";
                            currentMana = currentMana - 6;
                        }
                        else if (choice5 == "Z")
                        {
                            std::cout << "\tWait\n";
                        }
                        else if (choice5 == "R")
                        {
                            std::cout << "\tRun\n";
                            std::cout << "\tNakatakas ka na sa laban!\n";
                            loop3 = 0;
                        }
                        else if (choice5 == "2")
                        {
                            if (currentMana < 6)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 6)
                            {
                                currentMana = currentMana - 6;
                                currentDefense = currentDefense * 2;
                                std::cout << "\tDef Up!\n";
                            }
                        }
                        else if (choice5 == "3")
                        {
                            if (currentMana < 12)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 12)
                            {
                            currentMana = currentMana - 12;
                            characterProvoke = 3;
                            std::cout << "\tProvoke!\n";
                            }
                        }
                        else if (choice5 == "4")
                        {
                            if (currentMana < 30)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 30)
                            {
                            currentMana = currentMana - 30;
                            int ommniSlash =(currentStrength * 12) - generalDefense;
                            generalHealth = generalHealth - ommniSlash;
                            std::cout << "\t" << characterName << " Damage: " << ommniSlash << "\n";
                            }
                        }
                        else if (choice5 == "5")
                        {
                            if (currentMana < 6)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 6)
                            {
                                currentMana = currentMana - 6;
                                int fireball = (currentMagic * 3) - generalDefense;
                                generalHealth = generalHealth - fireball;
                                std::cout << "\t" << characterName << " Damage: " << fireball << "\n";
                            }
                        }
                        else if (choice5 == "6")
                        {
                            if (currentMana < 12)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 12)
                            {
                            currentMana = currentMana - 12;
                            int frost = (currentMagic * 5) - generalDefense;
                                generalHealth = generalHealth - frost;
                                std::cout << "\t" << characterName << " Damage: " << frost << "\n";
                                characterProvoke = 3;

                            }
                        }
                        else if (choice5 == "7")
                        {
                            if (currentMana < 12)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 12)
                            {
                                currentMana = currentMana - 12;
                                poison = 3;
                                poisionDamage = (generalMaxHealth * 0.1) - generalDefense;
                                generalHealth = generalHealth - poisionDamage;
                                std::cout << "\tPoison!\n";
                            }
                        }
                        else if (choice5 == "8")
                        {
                            if (currentMana < 24)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 24)
                            {
                                currentMana = currentMana - 24;
                                int megaFlare = (currentMagic * 15) - generalDefense;
                                generalHealth = generalHealth - megaFlare;
                                std::cout << "\t" << characterName << " Damage: " << megaFlare << "\n";
                            }
                        }
                        else if (choice5 == "9")
                        {
                            if (currentMana < 6)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 6)
                            {
                                currentMana = currentMana - 6;
                                int heal = (currentMagic * 3);
                                currentHealth = currentHealth + heal;
                                std::cout << "\t" << characterName << " Heal: " << heal << "\n";
                            }
                        }
                        else if (choice5 == "10")
                        {
                            if (currentMana < 6)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 6)
                            {
                                currentMana = currentMana - 6;
                                strupDamage= (strength * 2);
                                characterstrup = 3;
                                std::cout << "\tStr Up!\n";
                            }
                        }
                        else if (choice5 == "11")
                        {
                            if (currentMana < 12)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 12)
                            {
                                currentMana = currentMana - 12;
                                reflect = 1;
                                std::cout << "\tReflect!\n";
                            }
                        }
                        else if (choice5 == "12")
                        {
                            if (currentMana < 24)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 24)
                            {
                                currentMana = currentMana - 24;

                                int divineSmash = generalHealth * 0.5;
                                generalHealth = generalHealth - divineSmash;

                                std::cout << "\t" << characterName << " Damage: " << divineSmash << "\n";
                            }
                        }
                    }



                        if (characterProvoke > 0)
                        {
                            std::cout << "\tgeneral ay provoked\n";
                            characterProvoke = characterProvoke - 1;
                        }
                        else
                        {
                            int randomgeneral = rand() % 4 + 1;
                            if (randomgeneral == 1)
                            {
                                int generalAttack = (generalStrength * 2) - defense;
                                currentHealth = currentHealth - generalAttack;
                                std::cout << "\tgeneral Damage: " << generalAttack << "\n";

                                if(reflect == 1)
                                {
                                    generalHealth = generalHealth - generalAttack;
                                    reflect = 0;
                                    std::cout << "\tReflect Damage: " << generalAttack << "\n";
                                }
                            }
                            else if (randomgeneral == 2)
                            {
                                std::cout << "\tgeneral ay naghintay\n";
                            }
                            else if (randomgeneral == 3)
                            {
                                if (generalMana < 6)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (generalMana >= 6)
                                {
                                    int fireball = (generalMagic * 5) - defense;
                                    currentHealth = currentHealth - fireball;
                                    std::cout << "\tgeneral Damage: " << fireball << "\n";
                                    if (reflect == 1)
                                    {
                                        generalHealth = generalHealth - fireball;
                                        reflect = 0;
                                        std::cout << "\tReflect Damage: " << fireball << "\n";
                                    }
                                    generalMana = generalMana - 6;
                                    
                                }
                                
                            }
                            else if (randomgeneral == 4)
                            {
                                if (generalMana < 6)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (generalMana >= 6)
                                {
                                    enemyProvoke = 3;
                                    generalMana = generalMana - 6;
                                }
                            }
                        }
                        
                        if (poison > 0)
                        {
                            std::cout << "\tPoison Damage: " << poisionDamage << "\n";
                            generalHealth = generalHealth - poisionDamage;
                            poison = poison - 1;
                        }
                                


                        if (generalHealth <= 0)
                        {
                            std::cout << "\tgeneral ay napatay!\n";
                            std::cout << "\tKaranasan: " << generalExp << "\n";
                            std::cout << "\tNakuha mo ang " << generalExp << " XP!\n";
                            need_exp = need_exp - generalExp; 
                            std::cout << "\tNakatakas ka na sa laban!\n";
                            loop3 = 0;
                        }
                        else if (currentHealth <= 0)
                        {
                            std::cout << "\tNamatay ka sa laban!\n";
                            loop3 = 0;
                        }
                    }
                    }
                    else if (choice5 == "3")
                    {
                        // Emperor battle code
                        emperor.setHealth();
                        emperor.setMana();
                        emperor.setStrength();
                        emperor.setDefense();
                        emperor.setAgility();
                        emperor.setMagic();
                        emperor.setExp();

                        int emperorHealth = emperor.getHealth();
                    int emperorMana = emperor.getMana();
                    int emperorStrength = emperor.getStrength();
                    int emperorDefense = emperor.getDefense();
                    int emperorAgility = emperor.getAgility();
                    int emperorMagic = emperor.getMagic();
                    int emperorExp = emperor.getExp();
                    int emperorMaxHealth = emperorHealth;

                    int currentHealth = health;
                    int currentMana = mana;
                    int currentStrength = strength;
                    int currentDefense = defense;
                    int currentAgility = agility;
                    int currentMagic = magic;

                    int loop3 = 1;
                    int initialCharacterStrength = currentStrength;
                    int initialEmperorDefense = emperorDefense;
                    while (loop3 == 1)
                    {
                        
                        if (characterstrup != 0)
                        {
                            currentStrength = strupDamage;
                            characterstrup = characterstrup - 1;
                        }
                        else
                        {
                            currentStrength = initialCharacterStrength;
                        }

                        if (defup > 0)
                        {
                            emperorDefense = defupdamage;
                            defup = defup - 1;
                        }
                        else
                        {
                            emperorDefense = initialEmperorDefense;
                        }


                    std::cout << "\temperor\n";
                    std::cout << "\tKalusugan: " << emperorHealth << "\n";
                    std::cout << "\tMana: " << emperorMana << "\n\n";

                    std::cout << "\n" <<characterName << " Level." << level << "\n";
                    std::cout << "\tKalusugan: " << currentHealth << "\n";
                    std::cout << "\tMana: " << currentMana << "\n";

                        std::cout << "\t[ X ] Atake\n";
                        if (level >= 1 && level <= 2  && job == "Mandirigma")
                        {
                            std::cout << "\t[ 1 ] Slash(6)\n";
                        }
                        if (level >= 3 && level <= 4 && job == "Mandirigma")
                        {
                            std::cout << "\t[ 1 ] Slash(6)\n";
                            std::cout << "\t[ 2 ] Def Up!(6)\n";
                        }
                        if (level >= 5 && level <= 6 && job == "Mandirigma")
                        {
                            std::cout << "\t[ 1 ] Slash(6)\n";
                            std::cout << "\t[ 2 ] Def Up!(6)\n";
                            std::cout << "\t[ 3 ] Provoke(12)\n";
                        }
                        if (level >= 7 && job == "Mandirigma")
                        {
                            std::cout << "\t[ 1 ] Slash(6)\n";
                            std::cout << "\t[ 2 ] Def Up!(6)\n";
                            std::cout << "\t[ 3 ] Provoke(12)\n";
                            std::cout << "\t[ 4 ] Omni Slash(30)\n";
                        }

                        if (level >= 1 && level <= 2 && job == "Mago")
                        {
                            std::cout << "\t[ 5 ] Fireball(6)\n";
                        }
                        if (level >= 3 && level <= 4 && job == "Mago")
                        {
                            std::cout << "\t[ 5 ] Fireball(6)\n";
                            std::cout << "\t[ 6 ] Frost(6)\n";
                        }
                        if (level >= 5 && level <= 6 && job == "Mago")
                        {
                            std::cout << "\t[ 5 ] Fireball(6)\n";
                            std::cout << "\t[ 6 ] Frost(6)\n";
                            std::cout << "\t[ 7 ] Poison(12)\n";
                        }
                        if (level >= 7 && job == "Mago")
                        {
                            std::cout << "\t[ 5 ] Fireball(6)\n";
                            std::cout << "\t[ 6 ] Frost(6)\n";
                            std::cout << "\t[ 7 ] Poison(12)\n";
                            std::cout << "\t[ 8 ] Mega Flare(24)\n";
                        }
                        if (level >= 1 && level <= 2 && job == "Pari")
                        {
                            std::cout << "\t[ 9 ] Heal(6)\n";
                        }
                        if (level >= 3 && level <= 4 && job == "Pari")
                        {
                            std::cout << "\t[ 9 ] Heal(6)\n";
                            std::cout << "\t[ 10 ] Str Up!(6)\n";
                        }
                        if (level >= 5 && level <= 6 && job == "Pari")
                        {
                            std::cout << "\t[ 9 ] Heal(6)\n";
                            std::cout << "\t[ 10 ] Str Up!(6)\n";
                            std::cout << "\t[ 11 ] Reflect(12)\n";
                        }
                        if (level >= 7 && job == "Pari")
                        {
                            std::cout << "\t[ 9 ] Heal(6)\n";
                            std::cout << "\t[ 10 ] Str Up!(6)\n";
                            std::cout << "\t[ 11 ] Reflect(12)\n";
                            std::cout << "\t[ 12 ] Divine Smash(24)\n";
                        }

                        
                        std::cout << "\t[ Z ] Wait\n";
                        std::cout << "\t[ R ] Run\n";

                        std::string choice5 = "1";
                        if (level >= 1 && level <= 2 && job == "Mandirigma")
                        {
                            
                            do
                            {
                                while (choice5 != "X" && choice5 != "1" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "1" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 3 && level <= 4 && job == "Mandirigma")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 5 && level <= 6 && job == "Mandirigma")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 7  && job == "Mandirigma")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "4" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "1" && choice5 != "2" && choice5 != "3" && choice5 != "4" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 1 && level <= 2 && job == "Mago")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "5" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "5" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 3 && level <= 4 && job == "Mago")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 5 && level <= 6 && job == "Mago")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 7  && job == "Mago")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "8" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "5" && choice5 != "6" && choice5 != "7" && choice5 != "8" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 1 && level <= 2 && job == "Pari")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "9" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "9" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 3 && level <= 4 && job == "Pari")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 5 && level <= 6 && job == "Pari")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "Z" && choice5 != "R");
                        }
                        else if (level >= 7  && job == "Pari")
                        {
                            do
                            {
                                while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "12" && choice5 != "Z" && choice5 != "R")
                                {
                                    std::cout << "\tDi-wastong input, pakisubukang muli.\n";
                                    break;
                                }

                                std::cout << "\tIlagay ang Iyong Pinili: ";
                                std::getline(std::cin, choice5);
                            } while (choice5 != "X" && choice5 != "9" && choice5 != "10" && choice5 != "11" && choice5 != "12" && choice5 != "Z" && choice5 != "R");
                        }
                        
                        
                    

                        if (choice5 == "X")
                        {
                            int attack = (currentStrength * 2) - emperorDefense;
                            emperorHealth = emperorHealth - attack;
                            std::cout << "\t" << characterName << " Damage: " << attack << "\n";
                        }
                        else if (choice5 == "1")
                        {
                            int slash = (currentStrength * 3) - emperorDefense;
                            emperorHealth = emperorHealth - slash;
                            std::cout << "\t" << characterName << " Damage: " << slash << "\n";
                            currentMana = currentMana - 6;
                        }
                        else if (choice5 == "Z")
                        {
                            std::cout << "\tWait\n";
                        }
                        else if (choice5 == "R")
                        {
                            std::cout << "\tRun\n";
                            std::cout << "\tNakatakas ka na sa laban!\n";
                            loop3 = 0;
                        }
                        else if (choice5 == "2")
                        {
                            if (currentMana < 6)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 6)
                            {
                                currentMana = currentMana - 6;
                                currentDefense = currentDefense * 2;
                                std::cout << "\tDef Up!\n";
                            }
                        }
                        else if (choice5 == "3")
                        {
                            if (currentMana < 12)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 12)
                            {
                            currentMana = currentMana - 12;
                            characterProvoke = 3;
                            std::cout << "\tProvoke!\n";
                            }
                        }
                        else if (choice5 == "4")
                        {
                            if (currentMana < 30)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 30)
                            {
                            currentMana = currentMana - 30;
                            int ommniSlash =(currentStrength * 12) - emperorDefense;
                            emperorHealth = emperorHealth - ommniSlash;
                            std::cout << "\t" << characterName << " Damage: " << ommniSlash << "\n";
                            }
                        }
                        else if (choice5 == "5")
                        {
                            if (currentMana < 6)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 6)
                            {
                                currentMana = currentMana - 6;
                                int fireball = (currentMagic * 3) - emperorDefense;
                                emperorHealth = emperorHealth - fireball;
                                std::cout << "\t" << characterName << " Damage: " << fireball << "\n";
                            }
                        }
                        else if (choice5 == "6")
                        {
                            if (currentMana < 12)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 12)
                            {
                            currentMana = currentMana - 12;
                            int frost = (currentMagic * 5) - emperorDefense;
                                emperorHealth = emperorHealth - frost;
                                std::cout << "\t" << characterName << " Damage: " << frost << "\n";
                                characterProvoke = 3;

                            }
                        }
                        else if (choice5 == "7")
                        {
                            if (currentMana < 12)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 12)
                            {
                                currentMana = currentMana - 12;
                                poison = 3;
                                poisionDamage = (emperorMaxHealth * 0.1) - emperorDefense;
                                emperorHealth = emperorHealth - poisionDamage;
                                std::cout << "\tPoison!\n";
                            }
                        }
                        else if (choice5 == "8")
                        {
                            if (currentMana < 24)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 24)
                            {
                                currentMana = currentMana - 24;
                                int megaFlare = (currentMagic * 15) - emperorDefense;
                                emperorHealth = emperorHealth - megaFlare;
                                std::cout << "\t" << characterName << " Damage: " << megaFlare << "\n";
                            }
                        }
                        else if (choice5 == "9")
                        {
                            if (currentMana < 6)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 6)
                            {
                                currentMana = currentMana - 6;
                                int heal = (currentMagic * 3);
                                currentHealth = currentHealth + heal;
                                std::cout << "\t" << characterName << " Heal: " << heal << "\n";
                            }
                        }
                        else if (choice5 == "10")
                        {
                            if (currentMana < 6)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 6)
                            {
                                currentMana = currentMana - 6;
                                strupDamage= (strength * 2);
                                characterstrup = 3;
                                std::cout << "\tStr Up!\n";
                            }
                        }
                        else if (choice5 == "11")
                        {
                            if (currentMana < 12)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 12)
                            {
                                currentMana = currentMana - 12;
                                reflect = 1;
                                std::cout << "\tReflect!\n";
                            }
                        }
                        else if (choice5 == "12")
                        {
                            if (currentMana < 24)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (currentMana >= 24)
                            {
                                currentMana = currentMana - 24;

                                int divineSmash = emperorHealth * 0.5;
                                emperorHealth = emperorHealth - divineSmash;

                                std::cout << "\t" << characterName << " Damage: " << divineSmash << "\n";
                            }
                        }



                        if (characterProvoke > 0)
                        {
                            std::cout << "\temperor ay provoked\n";
                            characterProvoke = characterProvoke - 1;
                        }
                        else
                        {
                            int randomemperor = rand() % 6 + 1;
                            if (randomemperor == 1)
                            {
                                int emperorAttack = (emperorStrength * 2) - defense;
                                currentHealth = currentHealth - emperorAttack;
                                std::cout << "\temperor Damage: " << emperorAttack << "\n";

                                if(reflect == 1)
                                {
                                    emperorHealth = emperorHealth - emperorAttack;
                                    reflect = 0;
                                    std::cout << "\tReflect Damage: " << emperorAttack << "\n";
                                }
                            }
                            else if (randomemperor == 2)
                            {
                                std::cout << "\temperor ay naghintay\n";
                            }
                            else if (randomemperor == 3)
                            {
                                if (emperorMana < 6)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (emperorMana >= 6)
                                {
                                    int slash = (emperorStrength* 3) - defense;
                                    currentHealth = currentHealth - slash;
                                    std::cout << "\temperor Damage: " << slash << "\n";
                                    if (reflect == 1)
                                    {
                                        emperorHealth = emperorHealth - slash;
                                        reflect = 0;
                                        std::cout << "\tReflect Damage: " << slash << "\n";
                                    }
                                    emperorMana = emperorMana - 6;
                                    
                                }
                                
                            }
                            else if (randomemperor == 4)
                            {
                                if (emperorMana < 6)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (emperorMana >= 6)
                                {
                                    emperorMana = emperorMana - 6;

                                    defupdamage = (emperorDefense * 2);
                                    defup = 3;
                                    std::cout << "\temperor Def Up!\n";

                                }
                            }
                            else if (randomemperor == 5)
                            {
                                if (emperorMana < 12)
                                {
                                    std::cout << "\tDi sapat ang mana!\n";
                                }
                                else if (emperorMana >= 12)
                                {
                                    emperorMana = emperorMana - 12;
                                    emperorHealth = emperorHealth + (1000 * 0.2);
                                    std::cout << "\tEmperor Restor: " << (1000 * 0.2) << "\n";
                                }
                                
                        }
                        else if (randomemperor == 6)
                        {
                            if (emperorMana < 24)
                            {
                                std::cout << "\tDi sapat ang mana!\n";
                            }
                            else if (emperorMana >= 24)
                            {
                                emperorMana = emperorMana - 24;
                                int unleash = (1000 - emperorHealth) - defense;

                                currentHealth = currentHealth - unleash;
                                std::cout << "\temperor Damage: " << unleash << "\n";

                                if (reflect == 1)
                                {
                                    emperorHealth = emperorHealth - unleash;
                                    reflect = 0;
                                    std::cout << "\tReflect Damage: " << unleash << "\n";
                                }
                            }
                        }
                        
                        if (poison > 0)
                        {
                            std::cout << "\tPoison Damage: " << poisionDamage << "\n";
                            emperorHealth = emperorHealth - poisionDamage;
                            poison = poison - 1;
                        }
                                


                        if (emperorHealth <= 0)
                        {
                            std::cout << "\temperor ay napatay!\n";
                            std::cout << "\tKaranasan: " << emperorExp << "\n";
                            std::cout << "\tNakuha mo ang " << emperorExp << " XP!\n";
                            need_exp = need_exp - emperorExp; 
                            std::cout << "\tNakatakas ka na sa laban!\n";
                            loop3 = 0;
                        }
                        else if (currentHealth <= 0)
                        {
                            std::cout << "\tNamatay ka sa laban!\n";
                            loop3 = 0;
                        }
                    }
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
    return 0;
}}}