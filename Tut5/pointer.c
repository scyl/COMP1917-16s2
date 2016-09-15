#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int     n;
    int    *p, *q;
    double  x;
    double *r;
    
    p = &n;
    *p =  5;
    //*q = 17;
    q =  p;
    *q =  8;
    r = &x;
    *r = 3.0;
    *p = *r;
    //p =  r;
    *p =  n;
    n =  x;
    
    printf("n = %d\n", n);
    printf("x = %lf\n", x);
    printf("&n = %p\n", &n);
    printf("p = %p\n", p);
    printf("q = %p\n", q);
    printf("&x = %p\n", &x);
    printf("r = %p\n", r);
    
    return EXIT_SUCCESS;
}