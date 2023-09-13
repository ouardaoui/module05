#ifndef SHRUBBERYCREATIONFORM_H 
#define SHRUBBERYCREATIONFORM_H 

#include "AForm.hpp"

class ShrubberyCreationForm: public AForm{
    private : 
        std::string _target;
    public : 
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm(void);
        ShrubberyCreationForm(ShrubberyCreationForm const & copy);  
        ShrubberyCreationForm &operator=(ShrubberyCreationForm  const & sh);
        const std::string getTarget(void) const;
        virtual void executeForm(AForm const & form) const ;
};

#endif
