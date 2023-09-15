#include <iostream>

struct mystruct {
    int x;
    float y;
    bool a;
    bool b;
    bool c;
    bool d;
    bool f;
};

int main() {
    //std::cout<<sizeof(float)<<"\t"<<sizeof(mystruct)<<std::endl;
    
   float pi = 3.14f; 

   std::cout<<(int)pi<<std::endl;
    std::cout<< *reinterpret_cast<int*>(&pi)<<std::endl;
    std::cout<< *reinterpret_cast<float*>(&pi) <<std::endl;
    std::cout<< *reinterpret_cast<double*>(&pi) <<std::endl;
    return 0;
}