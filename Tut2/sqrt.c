// Stephen 2/08/2016
// A program to square root a number

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int in = 0;
    
    double root = 0;
    printf("Enter a number: ");
    scanf("%d", &in);
    printf("The number you typed is: %lf\n", root);
    if (in < 0) {
        printf("ERROR: nagative input\n");
    }
    root = pow(argc, 1.0/2);
    printf("The square root of %d is %9.2lf \n", in, root);
    return 0;
}