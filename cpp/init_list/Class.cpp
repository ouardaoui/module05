#include<iostream>
#include "Class.hpp"

Sample::Sample(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
    std::cout<<"Constructor called"<<std::endl;
    std::cout<<this->a1<<std::endl;
    std::cout<<this->a2<<std::endl;
    std::cout<<this->a3<<std::endl;
    this->foo();
}
Sample::~Sample()
{
    std::cout<<"destructor"<<std::endl;   
}



void Sample::bar(int p2) const 
{
    p2 = this->a2;
    std::cout<<p2<<std::endl;
}

void Sample::foo(void )const {
    std::cout<<"hello from m pruvate"<<std::endl;
}
int main()
{
    Sample instance('c', 10, 54.66);
    instance.bar(22);
    return (0);
}