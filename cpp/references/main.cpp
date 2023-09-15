#include<iostream>
#include<string>

void ft_update_ref(std::string &s)
{
    s += " and others";
}

void ft_update(std::string *s)
{
    *s =  *s + " ,vegetables";
}

int main()
{
    int a = 10;
    std::string str = "i like fruits";
    std::string& ref_s = str;
    ft_update(&str);
    std::cout<<str<<std::endl;
    ft_update_ref(ref_s);
    std::cout<<str<<std::endl;
    int& ref = a;
    std::cout<<ref<< std::endl;
}