#include<iostream>

int var = 5;
int func(void)
{
    return 10;
}

namespace Foo {
    int var = 50;
    int func(void){return 100;}
}

int main()
{
    std::cout<<func()<<std::endl;
    std::cout<<Foo::func();
}