#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():_target("default")
{
    
}

PresidentialPardonForm::PresidentialPardonForm(std::string str):AForm(str, 25,5)
{
    this->_target = str;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const 
{
    (void)executor;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copy)
{
    *this = copy;
    return ;
}

const std::string PresidentialPardonForm::getTarget(void) const 
{
    return this->_target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm & c)
{
    if(this != &c)
        this->_target = c.getTarget() ;
    return *this;
}

void PresidentialPardonForm::executeForm(AForm const & form) const 
{
    (void)form;   
    std::cout<<this->getTarget()<<" has been pardoned by Zaphod Beeblebrox ."<<std::endl;
}