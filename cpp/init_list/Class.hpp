#ifndef CLASS_H
#define CLASS_H

class Sample {
    char a1;
    int a2;
    float a3;
    void foo(void) const;
    public : 
        Sample(char p1, int p2, float p3);
        ~Sample(void);
        void bar(int p2) const ;
};  

#endif