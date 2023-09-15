#include<iostream>

class Foo {
    private : 
        float _v;
    public : 
        Foo (float v):_v(v){}
        float getv(void){return this->_v;}
        operator float() {return this->_v;}
        operator int(){return static_cast<int>(this->_v);}
};

int main()
{
    Foo foo(4.34586f);
    int k = foo;
    std::cout<<k<<std::endl;
}