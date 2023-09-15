#ifndef CANONIC_H
#define CANONIC_H
#include<iostream>

class Canonic{
    public:
        Canonic(void);
        Canonic(Canonic const & canonic);
        ~Canonic(void);

       Canonic & operator=(Canonic const & canonic) ;
};

#endif