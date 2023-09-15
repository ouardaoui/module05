//run time

#include<iostream>

class Increace
{
    protected: 
        int i ;
    public:
        Increace ():i(1)
        {
        };
        virtual void  getInt (void )const  {
        std::cout<<this->i<<std::endl;
       }
};

class MoreIncreace : public Increace
{
    private: 
        int i ;
    public:
        MoreIncreace ():i(4)
        {
        };
       void  getInt (void ) const{
        std::cout<<"h"<<this->i <<std::endl;
       };
};

int main()
{
    Increace *z = new Increace();
    Increace a = MoreIncreace();

    MoreIncreace b;
    //z = b;
    //Increace *a  = new Increace();
    //Increace *c = &b;
    MoreIncreace *k = static_cast<MoreIncreace *>(z);
    //c->getInt();
    b.getInt();
    a.getInt();
    k->getInt();
}