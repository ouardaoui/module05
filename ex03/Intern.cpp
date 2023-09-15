#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern &i)
{
    *this = i;
    return ;
}

Intern &Intern::operator=(const Intern &i)
{
    (void)i;
    return *this;   
}

Intern::~Intern()
{

}

AForm *Intern::makeShurberry(std::string target)
{
    return new  ShrubberyCreationForm(target);
}

AForm *Intern::makeRobotomy(std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm *Intern::makePardon(std::string target)
{
    AForm *f = new PresidentialPardonForm(target);
    return f;
}


AForm *Intern::makeForm(std::string name, std::string target)
{
    std::string names[3] = {"Pardon form","Robotomy form","Shruberry form"};
    AForm *(Intern::*f[3])(std::string target) = {&Intern::makePardon, &Intern::makeRobotomy,&Intern::makePardon};

    for(int i = 0; i < 3 ; i++)
    {
        if(names[i] == name)
        {
            std::cout<<"Intern creates "<<name<<" ."<<std::endl;
             return (this->*f[i])(target); 
        }
    }
    return NULL;
}