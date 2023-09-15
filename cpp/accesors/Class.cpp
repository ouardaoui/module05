#include<iostream>
#include "Class.hpp"

void Sample::setnumber(int v)
{
    this->_foo = v;
}

int Sample::getnumber(void)
{
    return (this->_foo);
}

int Sample::compare(Sample *other)
{
    if(this->_foo >= other->getnumber())
        return 1;
    else
        return -1;   
}

int main()
{
    Sample instance;
    Sample instance1;

    instance.setnumber(100);
    instance1.setnumber(50);
    std::cout<<instance.compare(&instance1)<<std::endl;
    return 0;
}