#include<iostream>
#include <stdexcept>

int main()
{
    int x = 4;
    int t = 0;
    try {
        if(t == 0)
            throw "division by 0";
        else 
            std::cout<<"all is right"<<std::endl;
    }
    catch(const char *msg)
    {
        std::cout<<msg<<std::endl;
        std::cout<< "something wrong"<<std::endl;
    }
}