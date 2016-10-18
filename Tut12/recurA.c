#include <stdio.h>
#include <stdlib.h>

int sum(int a[], int start, int num);
int max(int a[], int start, int num);

int main(int argc, char* argv[]) {
    int a1[10] = {23,5,2,7,1,54,26,36,64,25};
    int a2[10] = {25,73,43,234,65,76,432,7543,243,3};
    
    printf("Sum a1: %d\n", sum(a1, 0, 10));
    printf("Sum a2: %d\n", sum(a2, 0, 10));
    printf("Max a1: %d\n", max(a1, 0, 10));
    printf("Max a2: %d\n", max(a2, 0, 10));
    
    return EXIT_SUCCESS;
}

int sum(int a[], int start, int num) {
    int returnValue = 0;
    if (num != 0) {
        returnValue = a[start] + sum(a, start+1, num-1);
    }
    
    return returnValue;
}

int max(int a[], int start, int num) {
    int returnValue = a[start];
    if (num != 1) {
        int temp = max(a, start+1, num-1);
        if (a[start] < temp) {
            returnValue = temp;
        }
    }
    
    return returnValue;
}
