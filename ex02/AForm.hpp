#ifndef FORM_H
#define FORM_H

#include<iostream>
#include<string>
#include<stdexcept>
#include "Bureaucrat.hpp"

class  AForm {
    private : 
        bool _isSigned;
        const std::string _name;
        const int _gradeSign;
        const int _gradeExec;
    public:    
        AForm(void);
        AForm(std::string name, int gradeSign , int gradeExec);
        AForm(AForm const & copy);
        ~AForm(void);
        const std::string  getName(void) const;
        int   getGradeSign(void) const;
        int   getGradeExec(void) const;
        bool isSigned(void)const;
        void beSigned(Bureaucrat &b);
        AForm &operator=(AForm const & AForm);
        virtual void executeForm(AForm const & form) const = 0 ;
        void execute(Bureaucrat const & executor) const;
        class GradeTooHighException : public std::exception
        {
            public : 
                const char* what() const throw() {
                    return "grade too high!!!";
                }
        };
        class GradeTooLowException : public std::exception
        {
            public : 
                const char* what() const throw()
                {
                    return "grade too low!!!";
                }
        };
};

std::ostream &operator<<(std::ostream &o, AForm &b);

#endif
