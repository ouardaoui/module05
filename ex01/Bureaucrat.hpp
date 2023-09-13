#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include<iostream>
#include<string>
#include<stdexcept>
#include "Form.hpp"

class Form;
class  Bureaucrat {
    private : 
        std::string _name;
        int _grade;
    public:    
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const & copy);
        ~Bureaucrat(void);
        void increment(void);
        void decrement(void);
        const std::string  getName(void) const;
        int   getGrade(void) const;
        void signForm(Form const &f) const;
        Bureaucrat &operator=(Bureaucrat const & Bureaucrat);
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

std::ostream &operator<<(std::ostream &o, Bureaucrat &b);

#endif
