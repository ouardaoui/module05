#include<iostream>

class Animal {
    public: 
       virtual void print(){std::cout<<"Animal !!!"<<std::endl;}
};

class Cat :public Animal {
    public: 
        void print(){std::cout<<"Cat !!!"<<std::endl;}
};

class Dog : public Animal {
    public: 
        void print(){std::cout<<"Dog !!!"<<std::endl;}
};

int main()
{
    Animal *an = new Animal();
    Cat *cat = new Cat();
    Animal *a = new Cat();
    std::cout<<typeid(Cat)<<std::endl;

    //up
    Animal *animal = dynamic_cast<Animal *>(cat);
    animal->print();    

    //down 
    Cat *catt = dynamic_cast<Cat*>(a);
    catt->print();

    //wrong casting
    Animal *dog = new Dog();
    Cat *pt = dynamic_cast<Cat *>(dog);
    if(!pt)
        std::cout<<"type cast failled !!"<< std::endl;
    else 
        pt->print();
    Cat *pts = dynamic_cast<Cat *>(an);
   if(!pt)
        std::cout<<"type cast failled !!"<< std::endl;
    else 
        pt->print(); 
}