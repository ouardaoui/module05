#include<iostream>

class Charcter {
    public: 
       virtual void seyHello(const std::string& target)  = 0;
        /*{
            std::cout<<"hey "<<target<<std::endl;
        }*/
};
 
class Warrior : public Charcter {
    public: 
        virtual void seyHello(const std::string & target)
        {
            std::cout<<"hello "<<target<<std::endl;
        }
};

int main()
{
    Charcter *a =new Warrior();
    Warrior *b = new Warrior();
    a->seyHello("some one");
    b->seyHello("some one");
}

//virtual --> reduce dynamic dispatch ---> V table  (contain mapping all virtual functions ) 
// or overriden by derived class