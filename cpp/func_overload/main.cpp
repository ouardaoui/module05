#include<iostream>
#include<string>

class Sample{
    public :
        void bar(int const i) 
        {
            std::cout<<"overload in"<<i<<std::endl;
        }   
        void bar(Sample const & i)  
        {
            std::cout<<"overload"<<std::endl;   
        }
};

int main()
{
    Sample instance;
    instance.bar(instance);
    instance.bar(5);
}