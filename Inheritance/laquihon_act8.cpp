#include<iostream>
#include"Student.h"



int main()
{
    Student students;
    students.Set_Name();
    students.Set_Age();
    students.Set_Gender();
    students.Set_Quiz_1();
    students.Set_Quiz_2();
    students.Set_Quiz_3();
    students.Set_Quiz_4();
    students.Set_Final_Grade();

    std::cout << "\n\n\t"<< "Name: " << students.Get_Name() << "\n\n";
    std::cout << "\t" << "Age: "<< students.Get_Age() << "\n\n";
    std::cout << "\t" << "Gender: " << students.Get_Gender() << "\n\n";
    std::cout << "\t" << "Quiz 1: " << students.Get_Quiz_1() << "\n\n";
    std::cout << "\t" << "Quiz 2: " << students.Get_Quiz_2() << "\n\n";
    std::cout << "\t" << "Quiz 3: "<< students.Get_Quiz_3() << "\n\n";
    std::cout << "\t"  << "Quiz 4: "<< students.Get_Quiz_4() << "\n\n";
    std::cout << "\t" << "Final Grade: " << students.Get_Final_Grade() << "\n\n";
 
}