#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b = Bureaucrat("morad", 110);
    b.decrement();
    std::cout<<b<<std::endl;
    return 0;
}
