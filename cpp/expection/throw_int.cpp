#include<iostream>
#include<stdexcept>

int main()
{
    int age = 15;
    try{
        if(age > 18)
            std::cout<<"all is right"<< std::endl;   
        else 
            throw(age);
    }
    catch(int num)
    {
        std::cout<< "ur age is too young "<< std::endl;
    }
}
