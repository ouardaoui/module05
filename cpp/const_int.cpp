#include<iostream>

const int a = 5;

const std::string  ft_fun()
{
    const std::string s = "hello";
    return s;
}

const int fun(void) 
{
    const int a = 5;
    return a; 
}

int main()
{
    std::cout<<fun()<<std::endl;
    std::cout<<ft_fun()<<std::endl;
}