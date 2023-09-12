#include "AForm.hpp"

AForm::AForm():_isSigned(false),_name("default"),_gradeSign(1),_gradeExec(1)
{
    return;
}

AForm::AForm(std::string name,  const int gradeSign, const int gradeExec):_isSigned(false),_name(name),_gradeSign(gradeSign),_gradeExec(gradeExec)
{
    try
    {
        if(gradeSign  < 1 || gradeExec < 1)
            throw AForm::GradeTooHighException();
        if(gradeSign > 150 || gradeExec > 150 )
            throw AForm::GradeTooLowException();
    }
    catch(AForm::GradeTooHighException &e) 
    {
        std::cout << e.what() <<std::endl;
    }
    catch(AForm::GradeTooLowException &e)
    {
        std::cout << e.what() <<std::endl;
    }
    return;
}

AForm::AForm(AForm const & form):_isSigned(form.isSigned()),_name(form.getName()),_gradeSign(form.getGradeSign()),_gradeExec(form.getGradeExec())
{

    *this = form;
    return;
}

AForm::~AForm()
{

}

bool AForm::isSigned() const
{
    return this->_isSigned;
}

AForm & AForm::operator=(AForm const & form)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
        if(this != &form)
        {
            this->_isSigned= form.isSigned();
        }
    return *this;
}

void AForm::beSigned(Bureaucrat &b) 
{
    try
    { 
    if(this->getGradeSign() < 1 || b.getGrade() < 1)
        throw AForm::GradeTooHighException();
    else if(this->getGradeSign() > 150 || b.getGrade() > 150)
    {
        throw AForm::GradeTooLowException();
    }
    else if(this->getGradeSign() >= b.getGrade() )
    {
        this->_isSigned = true;
        std::cout<<b.getName()<<" sign "<<this->getName()<<" ."<<std::endl;
    }
    else 
        std::cout<<b.getName()<<" couldn t sign "<<this->getName()<<" because "<<b.getName()<<"'s grad is too low ."<< std::endl;
    }
    catch(AForm::GradeTooHighException &e)
    {
        std::cout<<e.what() << std::endl;
    }
    catch(AForm::GradeTooLowException &e)
    {   
        std::cout<<e.what() << std::endl;
    }
}

const std::string  AForm::getName() const{
    return this->_name;
}

int AForm::getGradeExec() const {
    return this->_gradeExec;
}

int AForm::getGradeSign() const {
    return this->_gradeSign;
}

std::ostream &operator<<(std::ostream &o, AForm &b)
{
    if(b.isSigned())
        std::cout<<"form "<< b.getName()<<" was signed .";
    else 
        std::cout<<"form "<< b.getName()<<" didn t signed .";
    return o;
}

void AForm::execute(Bureaucrat const & executor) const
{   
        if(this->isSigned())
        {
            try
            {
                {
                    if(executor.getGrade() > 150 || executor.getGrade()  > this->getGradeExec()) 
                        throw AForm::GradeTooLowException();
                    else if(executor.getGrade() )
                        throw AForm::GradeTooHighException();
                    else 
                    {
                        this->executeForm(*this);
                        std::cout<<executor.getName()<<" executed "<<this->getName()<<std::endl;
                    }
                }
            }
            catch(AForm::GradeTooHighException &e)
            {
                    std::cout<<e.what() << std::endl;
            }
            catch(AForm::GradeTooLowException &e)
            {   
                    std::cout<<e.what() << std::endl;
            }            
        }
}   