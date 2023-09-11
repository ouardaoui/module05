#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():_target("default")
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string str):AForm(str, 145,137)
{
    
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const 
{
    (void)executor;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy)
{
    *this = copy;
    return ;
}

const std::string ShrubberyCreationForm::getTarget(void) const 
{
    return this->_target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm & c)
{
    if(this != &c)
        this->_target = c.getTarget() ;
    return *this;
}