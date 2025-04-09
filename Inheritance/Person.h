#include <iostream>

#ifndef INFO_H
#define INFO_H

class Info
{
    private:
        std::string name;
        std::string gender;
        double birth_month;
        double birth_day;
        double birth_year;
        double current_year = 2025;
        double current_month = 4;
        double current_day = 3;

    public:
        Info();

        Info(std::string name, double birth_month, double birth_day, double birth_year);

        std::string get_name();
        std::string get_gender();
        double get_birth_month();
        double get_birth_day();
        double get_birth_year();


        void set_name(std::string name);
        void set_gender(std::string gender);
        void set_birth_month(double birth_month);
        void set_birth_day(double birth_day);
        void set_birth_year(double birth_year);
        int set_age(double birth_month, double birth_day, double birth_year);
};
#endif 

Info::Info()
{
    this->name = "";
    this->birth_month = 0.0;
    this->birth_day = 0.0;
    this->birth_year = 0.0;
}

Info::Info(std::string name, double birth_month, double birth_day, double birth_year)
{
    this->name = name;
    this->birth_month = birth_month;
    this->birth_day = birth_day;
    this->birth_year = birth_year;
}

std::string Info::get_name()
{
    return this->name;
}

std::string Info::get_gender()
{
    return this->gender;
}

double Info::get_birth_month()
{
    return this->birth_month;
}

double Info::get_birth_day()
{
    return this->birth_day;
}

double Info::get_birth_year()
{
    return this->birth_year;
}





void Info::set_name(std::string name)
{
    this->name = name;
}

void Info::set_gender(std::string gender)
{
    this->gender = gender;
}

void Info::set_birth_month(double birth_month)
{
    this->birth_month = birth_month;
}

void Info::set_birth_day(double birth_day)
{
    this->birth_day = birth_day;
}

void Info::set_birth_year(double birth_year)
{
    this->birth_year = birth_year;
}

 int Info::set_age(double birth_month, double birth_day, double birth_year)
{
    int age;
    age = current_year - birth_year;
    if (current_month < birth_month || (current_month == birth_month && current_day < birth_day))
    {
        age -= 1;
    }
    return age;
}

