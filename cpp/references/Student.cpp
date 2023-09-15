#include "Student.hpp"

std::string *Student::get_address()
{
    return &(this->_login);
}

std::string& Student::get_byRef()
{
 return this->_login;   
}

Student::Student(std::string str) : _login(str)
{
}

int main()
{
    Student jim("ayoub");
    *(jim.get_address()) = "anas";
    jim.get_byRef() = "ahmed";
    std::cout<<jim.get_byRef()<<std::endl;
}