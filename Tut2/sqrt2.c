#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int input = 0;
    double result = 0;
    
    printf("Enter a number: ");
    scanf("%d", &input);
    
    result = sqrt(input);
    
    printf("The square root of %d is %lf\n", input, result);
    return 0;
}