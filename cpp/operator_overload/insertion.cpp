#include<iostream>
#include<string>

class Sample {
    public: 
        int nbr; 
        std::string name;
        Sample(int n, std::string str) : nbr(n), name(str){ }
        Sample operator+(Sample &other)
        {
            Sample res(nbr - other.nbr,"was sustracted" );
            return res;
        }
        Sample operator-(Sample &other)
        {
            Sample res(nbr + other.nbr,"was added" );
            return res;
        }
        void display(void)
        {
         std::cout<<this->nbr<<"\t"<<this->name<<std::endl;   
        }
};

class Integer {
    public: 
        int nbr;
        Integer(int a) : nbr(a){};
        Integer &operator=(Integer& k) 
        {
            this->nbr = k.nbr;
            return *this;
        };
};

std::ostream& operator<<(std::ostream &a, Sample &sample)
{
    a << "Name : "<<sample.name <<std::endl;
    a << "number is : "<< sample.nbr<<std::endl;
    return a;
}

int main()
{
    Sample sample = Sample(20,"hello");
    Sample sample1 = Sample(100,"something");
    Integer a(2);
    Integer b(3);
    Sample  s = sample + sample1;
    Sample  k = sample - sample1;
    s.display();
    k.display();
    a = b;
    std::cout<<a.nbr<<" "<<b.nbr;
}
