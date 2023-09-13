#include "Intern.hpp"

int main()
{
    Intern i;
    ShrubberyCreationForm form("home");
    RobotomyRequestForm r("target");
    AForm *k = i.makeForm("Pardon form","abass");
    Bureaucrat b("omar", 1);
    k->beSigned(b);
    r.beSigned(b);
    form.beSigned(b);
    b.signForm(form);
    form.execute(b);
    k->execute(b);
    r.execute(b);
    return 0;   
}