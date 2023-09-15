#ifndef CLASS_H
#define CLASS_H

class Sample {
    public :
        Sample(void);
        ~Sample(void);
        static int getnbr(void);
    private :
        static int nbr;
};

#endif