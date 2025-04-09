#include<iostream>
#include"Person.h"

#ifndef STUDENT_H
#define STUDENT_H


class Student : public Info
{
    private:
        std::string Name;
        int Age;
        std::string Gender;
        int Quiz_1;
        int Quiz_2;
        int Quiz_3;
        int Quiz_4;
        float Final_Grade;

    public:
        Student();
         
        Student(std::string Name, int Age, std::string Gender, int Quiz_1, int Quiz_2, int Quiz_3, int Quiz_4, float Final_Grade);

        std::string Get_Name();
        int Get_Age();
        std::string Get_Gender();
        int Get_Quiz_1();
        int Get_Quiz_2();
        int Get_Quiz_3();
        int Get_Quiz_4();
        float Get_Final_Grade();

        void Set_Name();
        void Set_Age();
        void Set_Gender();
        void Set_Quiz_1();
        void Set_Quiz_2();
        void Set_Quiz_3();
        void Set_Quiz_4();
        void Set_Final_Grade();

};

#endif

Student::Student()
{
    this->Name = "";
    this->Age = 0;
    this->Gender = "";
    this->Quiz_1 = 0;
    this->Quiz_2 = 0;
    this->Quiz_3 = 0;
    this->Quiz_4 = 0;
    this->Final_Grade = 0.0;
}


Student::Student(std::string Name, int Age, std::string Gender, int Quiz_1, int Quiz_2, int Quiz_3, int Quiz_4, float Final_Grade)
{
    this->Name = Name;
    this->Age = Age;
    this->Gender = Gender;
    this->Quiz_1 = Quiz_1;
    this->Quiz_2 = Quiz_2;
    this->Quiz_3 = Quiz_3;
    this->Quiz_4 = Quiz_4;
    this->Final_Grade = Final_Grade;
}

std::string Student::Get_Name()
{
    return this->Name;
};

int Student::Get_Age()
{
    return this->Age;
};

std::string Student::Get_Gender()
{
    return this->Gender;
};

int Student::Get_Quiz_1()
{
    return this->Quiz_1;
};

int Student::Get_Quiz_2()
{
    return this->Quiz_2;
};

int Student::Get_Quiz_3()
{
    return this->Quiz_3;
};

int Student::Get_Quiz_4()
{
    return this->Quiz_4;
};

float Student::Get_Final_Grade()
{
    return this->Final_Grade;
};


void Student::Set_Name()
{
    Info::set_name("Charles Allen G. Laquihon");
    this->Name = Info::get_name();
};

void Student::Set_Age()
{
    Info::set_birth_month(5);
    Info::set_birth_day(4);
    Info::set_birth_year(2006);
    this->Age = Info::set_age(this->Info::get_birth_month(), this->Info::get_birth_day(), this->Info::get_birth_year());
};

void Student::Set_Gender()
{
    Info::set_gender("Walmart");
    this->Gender = Info::get_gender();
};

void Student::Set_Quiz_1()
{
    this->Quiz_1 = 75;
};

void Student::Set_Quiz_2()
{
    this->Quiz_2 = 85;
};

void Student::Set_Quiz_3()
{
    this->Quiz_3 = 95;
};

void Student::Set_Quiz_4()
{
    this->Quiz_4 = 65;
};

void Student::Set_Final_Grade()
{
    this->Final_Grade = (this->Quiz_1 + this->Quiz_2 + this->Quiz_3 + this->Quiz_4) / 4.0;
};
