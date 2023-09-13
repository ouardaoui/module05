#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat b("jon", 2);
    Form f("form_name", 1,150);
    //f.beSigned(b);
    b.signForm(f); 

    std::cout<<f<<std::endl;
    std::cout<<b<<std::endl;
    return 0;
}