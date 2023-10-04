#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b = Bureaucrat("morad", 110);
    Bureaucrat a = Bureaucrat("ahmed", 90);
    a = b;
    std::cout<<a<<std::endl;
    return 0;
}
