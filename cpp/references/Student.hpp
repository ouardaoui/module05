#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<string>

class Student{
    private: 
        std::string _login;
    public:
        Student(std::string str);
        std::string *get_address();
        std::string& get_byRef();
};
#endif