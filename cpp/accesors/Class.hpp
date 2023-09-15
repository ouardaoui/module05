#ifndef CLASS_H
#define CLASS_H

class Sample {
    int _foo;
    public: 
        int getnumber(void);
        void setnumber(int n);
        int compare(Sample *other);
};

#endif