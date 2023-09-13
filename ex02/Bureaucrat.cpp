#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("default"),_grade(150)
{
    return;
}

Bureaucrat::Bureaucrat(std::string name,  int grade):_name(name),_grade(grade)
{
    try
    {
        if(grade < 1)
            throw Bureaucrat::GradeTooHighException();
        if(grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    catch(Bureaucrat::GradeTooHighException &e) 
    {
        std::cout << e.what() <<std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() <<std::endl;
    }
    return;
}


void Bureaucrat::increment()
{
    try
    {
    if(_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    }
    catch(Bureaucrat::GradeTooHighException &e) 
    {
        std::cout << e.what() <<std::endl;
        return ;
    }
    _grade--;
    return; 
}

void Bureaucrat::decrement()
{
    try
    {
    if(_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() <<std::endl;
        return ;
    }
    _grade++;
    return; 
}

Bureaucrat::Bureaucrat(Bureaucrat const & bureaucrat)
{

    *this = bureaucrat;
    return;
}

Bureaucrat::~Bureaucrat() 
{
    return;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const & bureaucrat)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
        if(this != &bureaucrat)
        {
            this->_name = bureaucrat._name;
            this->_grade = bureaucrat._grade;
        }
    return *this;
}


const std::string  Bureaucrat::getName() const{
    return this->_name;
}

int  Bureaucrat::getGrade(void) const
{
    return this->_grade;   
}

std::ostream &operator<<(std::ostream &o, Bureaucrat &b)
{
    o << b.getName() << " bureaucrat grade " << b.getGrade();
    return o;
}

void Bureaucrat::signForm(AForm const &f) const
{
    if(f.isSigned())
        std::cout<<this->getName()<<" sign "<<f.getName()<<" ."<<std::endl;
    else 
        std::cout<< this->getName()<<" couldn’t sign "<<f.getName()<<" because "<< f.getReason()<<" ."<<std::endl;
}