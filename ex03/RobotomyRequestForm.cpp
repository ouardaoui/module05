#include "RobotomyRequestForm.hpp"
#include<cstdlib>
#include<time.h>

RobotomyRequestForm::RobotomyRequestForm():_target("default")
{
    
}

RobotomyRequestForm::RobotomyRequestForm(std::string str):AForm("Robotomy form", 72,45)
{
   this->_target = str; 
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copy)
{
    *this = copy;
    return ;
}

const std::string RobotomyRequestForm::getTarget(void) const 
{
    return this->_target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm & c)
{
    if(this != &c)
        this->_target = c.getTarget() ;
    return *this;
}

void RobotomyRequestForm::executeForm(AForm const & form) const 
{
    (void)form;
    srand(time(0));
    if(rand() %2)
        std::cout<<this->_target<<" has been robotomized ."<<std::endl;
    else 
        std::cout<<"the robotomy failed ."<<std::endl;
}