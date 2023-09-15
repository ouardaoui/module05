#include "Student.hpp"

Student::Student() : _login("default")
{
    std::cout<< "Student "<< this->_login<< " login in "<<std::endl;
}
Student::~Student() 
{
    std::cout<< "Student "<< this->_login<< " log out  "<<std::endl;
}

int main()
{
    Student *students = new Student[10];
    delete [] students;
    return 0;
}