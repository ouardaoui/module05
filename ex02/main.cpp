#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    ShrubberyCreationForm form("home");
    RobotomyRequestForm r("target");
    PresidentialPardonForm k("abass");
    Bureaucrat b("omar", 1);
    k.beSigned(b);
    r.beSigned(b);
    form.beSigned(b);
    b.signForm(form);
    form.execute(b);
    k.execute(b);
    r.execute(b);
    return 0;   
}