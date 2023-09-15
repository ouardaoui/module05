#include<iostream>
#include "Class.hpp"

Sample::Sample(void) :foo(0)
{
    std::cout<<"hello from constructor"<< std::endl;
}

void Sample::bar(void) const
{
    std::cout<<"hello from bar"<< std::endl;
}



int main()
{
    Sample instacne;
    Sample *instacnep;

    instacnep = &instacne;
    int Sample::*p = NULL;
    void (Sample::*f)(void) const;

    p = &Sample::foo;
    std::cout<<instacne.foo<<std::endl;
    instacne.*p = 1;
    std::cout<<instacne.foo<<std::endl;
    instacne.foo = 2;
    std::cout<<instacne.foo<<std::endl;
    instacnep->*p = 3;
    std::cout<<instacne.foo<<std::endl;
    instacnep->foo = 4;
    std::cout<<instacne.foo<<std::endl;

    f = &Sample::bar;
    (instacne.*f)();
    (instacnep->*f)();
    return 0;
}