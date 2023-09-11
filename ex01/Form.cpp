#include "Form.hpp"

Form::Form():_isSigned(false),_name("default"),_gradeSign(1),_gradeExec(1)
{
    return;
}

Form::Form(std::string name,  const int gradeSign, const int gradeExec):_isSigned(false),_name(name),_gradeSign(gradeSign),_gradeExec(gradeExec)
{
    try
    {
        if(gradeSign  < 1 || gradeExec < 1)
            throw Form::GradeTooHighException();
        if(gradeSign > 150 || gradeExec > 150 )
            throw Form::GradeTooLowException();
    }
    catch(Form::GradeTooHighException &e) 
    {
        std::cout << e.what() <<std::endl;
    }
    catch(Form::GradeTooLowException &e)
    {
        std::cout << e.what() <<std::endl;
    }
    return;
}

Form::Form(Form const & form):_isSigned(form.isSigned()),_name(form.getName()),_gradeSign(form.getGradeSign()),_gradeExec(form.getGradeExec())
{

    *this = form;
    return;
}

Form::~Form()
{

}

bool Form::isSigned() const
{
    return this->_isSigned;
}

Form & Form::operator=(Form const & form)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
        if(this != &form)
        {
            this->_isSigned= form.isSigned();
        }
    return *this;
}

void Form::beSigned(Bureaucrat &b)
{
    try
    { 
    if(this->getGradeSign() < 1 || b.getGrade() < 1)
        throw Form::GradeTooHighException();
    else if(this->getGradeSign() > 150 || b.getGrade() > 150)
    {
        throw Form::GradeTooLowException();
    }
    else if(this->getGradeSign() >= b.getGrade() )
    {
        this->_isSigned = true;
        std::cout<<b.getName()<<" sign "<<this->getName()<<" ."<<std::endl;
    }
    else 
        std::cout<<b.getName()<<" couldn t sign "<<this->getName()<<" because "<<b.getName()<<"'s grad is too low ."<< std::endl;
    }
    catch(Form::GradeTooHighException &e)
    {
        std::cout<<e.what() << std::endl;
    }
    catch(Form::GradeTooLowException &e)
    {   
        std::cout<<e.what() << std::endl;
    }
}

const std::string  Form::getName() const{
    return this->_name;
}

int Form::getGradeExec() const {
    return this->_gradeExec;
}

int Form::getGradeSign() const {
    return this->_gradeSign;
}

std::ostream &operator<<(std::ostream &o, Form &b)
{
    if(b.isSigned())
        std::cout<<"form "<< b.getName()<<" was signed .";
    else 
        std::cout<<"form "<< b.getName()<<" didn t signed .";
    return o;
}