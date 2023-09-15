#include<stdio.h>

int main()
{
    int a = 5;
    float b = 19.934568468;
    float c = a + b; // implicit 
    int d = a + b;

    printf("%f\t%f\t%f\t%d\n", (float)a,b,c,d); // explicit 
    printf("%d\t%d\n", a,(int)b);
}