//complilation time 

#include <iostream>

class Animal {
    public:
        Animal(){};
            virtual void print(void){std::cout <<"Animal !!!"<<std::endl;}
};

class Dog:public Animal
{
    public: 
        Dog(){};
        void print(void){std::cout<<"Dog !!!"<<std::endl;}
};

class Cat:public Animal
{
    public: 
        Cat(){};
        void print(void){std::cout<<"Cat !!!"<<std::endl;}
};

int main()
{
    Animal *animal = new Animal();
    Animal *cat = new Cat();
    cat->print();
    Cat *catt = static_cast<Cat *>(cat);
    catt->print();
    Cat *cattt = static_cast<Cat *>(animal);
    cattt->print();
}