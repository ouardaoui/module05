#include<iostream>
#include "Class.hpp"

int Sample::nbr = 0; 

int Sample::getnbr(void)
{
    return Sample::nbr;
}

Sample::Sample(void)
{
    std::cout<<"hello from constructor"<<std::endl;
    Sample::nbr++;
}

Sample::~Sample(void)
{
    std::cout<<"hello from destructor"<<std::endl;
    Sample::nbr--;
}

void f0()
{
    Sample instance;
    std::cout<<"nbr of instance "<<Sample::getnbr()<<std::endl;
}

void f1()
{
    Sample instance;
    std::cout<<"nbr of instance "<<Sample::getnbr()<<std::endl;
    f0();
}

int main()
{
    std::cout<<Sample::getnbr()<<std::endl;
    f1();
    std::cout<<Sample::getnbr()<<std::endl;
    return 0;
}