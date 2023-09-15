#ifndef INTERN_H
#define INTERN_H

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
    public:
        Intern(void);
        Intern(const Intern & i);
        ~Intern(void);
        Intern &operator=(const Intern & i);

        AForm *makeForm(std::string name, std::string target);
        AForm *makeShurberry(std::string target);
        AForm *makePardon(std::string target);
        AForm *makeRobotomy(std::string target);
};

#endif