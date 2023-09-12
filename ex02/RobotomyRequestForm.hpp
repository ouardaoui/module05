#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "AForm.hpp"

class RobotomyRequestForm: public AForm{
    private : 
        std::string _target;
    public : 
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm(void);
        RobotomyRequestForm(RobotomyRequestForm const & copy);  
        RobotomyRequestForm &operator=(RobotomyRequestForm  const & sh);
        const std::string getTarget(void) const;
        void execute(Bureaucrat const & executor) const; 
        void executeForm(AForm const & form) const ;
};

#endif
