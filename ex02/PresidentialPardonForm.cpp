#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():_target("default")
{
    
}

PresidentialPardonForm::PresidentialPardonForm(std::string str):AForm(str, 145,137)
{
    
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
