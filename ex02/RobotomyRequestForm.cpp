#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():_target("default")
{
    
}

RobotomyRequestForm::RobotomyRequestForm(std::string str):AForm(str, 72,45)
{
    
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const 
{
    (void)executor;
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
    std::cout<<"robot ...."<<std::endl;
}