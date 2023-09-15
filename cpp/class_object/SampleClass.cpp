#include<iostream>
#include "SampleClass.hpp"


Sample::Sample()
{
    this->foo = 10;
    std::cout<<"constructer is called and foo is : "<<this->foo<<std::endl;  
    this->bar(); 
    return;
}

Sample::~Sample()
{
    std::cout<<"destructer is called"<<std::endl;  
    return; 
}
void Sample::bar()
{
    std::cout<<"hello from bar"<<std::endl; 
    return; 
}


int main()
{
    Sample instance;
    return 0;
}