#ifndef FORM_H
#define FORM_H

#include<iostream>
#include<string>
#include<stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;
class  Form {
    private : 
        bool _isSigned;
        const std::string _name;
        const int _gradeSign;
        const int _gradeExec;
        std::string _reason;
    public:    
        Form(void);
        Form(std::string name, int gradeSign , int gradeExec);
        Form(Form const & copy);
        ~Form(void);
        const std::string  getName(void) const;
        int   getGradeSign(void) const;
        int   getGradeExec(void) const;
        bool isSigned(void)const;
        void beSigned(Bureaucrat &b);
        std::string getReason(void)const ;
        Form &operator=(Form const & Form);
        class GradeTooHighException : public std::exception
        {
            public : 
                const char* what() const throw() {
                    return "grade too high";
                }
        };
        class GradeTooLowException : public std::exception
        {
            public : 
                const char* what() const throw()
                {
                    return "grade too low";
                }
        };
};

std::ostream &operator<<(std::ostream &o, Form &b);

#endif
