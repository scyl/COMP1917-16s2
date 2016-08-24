#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int     n;
    int    *p, *q;
    double  x;
    double *r;
    
    p = &n;
    *p =  5;
    *q = 17;
    q =  p;
    *q =  8;
    r = &x;
    *r = 3.0;
    *p = *r;
    p =  r;
    *p =  n;
    n =  x;
    
    return EXIT_SUCCESS;
}