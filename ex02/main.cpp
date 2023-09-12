#include "ShrubberyCreationForm.hpp"

int main()
{
    ShrubberyCreationForm form("home");
    Bureaucrat b("omar", 1);
    form.beSigned(b);
    //form.execute(b);
    return 0;   
}