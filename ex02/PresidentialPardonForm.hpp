#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "AForm.hpp"

class PresidentialPardonForm: public AForm{
    private : 
        std::string _target;
    public : 
        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm(void);
        PresidentialPardonForm(PresidentialPardonForm const & copy);  
        PresidentialPardonForm &operator=(PresidentialPardonForm  const & sh);
        const std::string getTarget(void)const;
        void executeForm(AForm const & form) const ;
};

#endif
