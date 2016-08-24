#include <stdio.h>
#include <stdlib.h>

void swap (int first, int second);

int main(int argc, char* argv[]){
    int num1 = 3;
    int num2 = 5;
    printf("Before: %d %d\n", num1, num2);
    swap(num1, num2);
    printf("After : %d %d\n", num1, num2);
    
    return EXIT_SUCCESS;
}

void swap (int first, int second) {
    int temp = first;
    first = second;
    second = temp;
    printf("Within : %d %d\n", first, second);
}