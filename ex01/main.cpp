#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat b("jon", 1);
    Form f("form_name", 1,150);
    f.beSigned(b);
    

    return 0;
}