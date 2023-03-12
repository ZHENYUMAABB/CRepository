#include <stdio.h>
double  sum (double a,double b){

    double c;
    c = a + b;
    return c;
}


double minus (double a, double b){

    double c;
    c = a-b;

    return c;
}


double multiply (double a, double b){

    double c;
    c = a * b ;

    return c;
}

double divide (double a, double b){

    double c;
    c = a / b ;
    if(b == 0)
         printf("divien can not be zero!\n");
    return c;
}