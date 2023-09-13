#include "ShrubberyCreationForm.hpp"
#include<fstream>

ShrubberyCreationForm::ShrubberyCreationForm():_target("default")
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string str):AForm("Shruberry form", 145,137)
{
   this->_target = str; 
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

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

void ShrubberyCreationForm::executeForm(AForm const & form) const 
{
    (void)form;
    std::ofstream  ofs(this->getTarget()+"_shrubbery");
    std::string tree = 
    "\n"
    "                     .o00o\n"
    "                   o000000oo\n"
    "                  00000000000o\n"
    "                 00000000000000\n"
    "              oooooo  00000000  o88o\n"
    "           ooOOOOOOOoo  ```''  888888\n"
    "         OOOOOOOOOOOO'.qQQQQq. `8888'\n"
    "        oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n"
    "        OOOOOOOOOO'.QQQQQQQQQQ/ /q\n"
    "         OOOOOOOOO QQQQQQQQQQ/ /QQ\n"
    "           OOOOOOOOO `QQQQQQ/ /QQ'\n"
    "             OO:F_P:O `QQQ/  /Q'\n"
    "                \\. \\ |  // |\n"
    "                d\\ \\\\\\|_////\n"
    "                qP| \\\\ _' `|Ob\n"
    "                   \\  / \\  \\Op\n"
    "                   |  | O| |\n"
    "           _       /\\. \\_/ /\\\n"
    "            `---__/|_\\\\   //|  __\n"
    "                  `-`  `-`-'-'\n";
    ofs << tree;
}