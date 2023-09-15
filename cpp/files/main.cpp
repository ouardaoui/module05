#include<iostream>
#include<fstream>

int main()
{
    std::ifstream ifs("numbers");
    std::ofstream ofs("test");
    unsigned int a,b,c, d;
    
    ifs >> a >> b >> c>> d;
    std::cout<< a << b << c << d << std::endl;// d take garbage value
    ofs<< "hello there";
    ofs<< " im ragnar";
    ofs.close();
    ifs.close();
}
