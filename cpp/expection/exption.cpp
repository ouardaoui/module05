#include<iostream>
#include<stdexcept>

int main()
{
    int t = 0;
    try
    {
        if(t)
            std::cout<< (float)1/(float)t << std::endl;
        else 
            throw std::exception();       
    }
    catch(std::exception e)
    { 
        std::cout<<e.what() << std::endl;
    }
}