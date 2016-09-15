#include <stdio.h>
#include <stdlib.h>

int max_value(int n, int a[]);
int non_decreasing(int a[], int n);
int findIndex(int x, int a[], int n);

int main(int argc, char* argv[]){
    int arr1[10] = {2, 4, 7, 8, 9, 14, 18, 34, 60, 89};
    int arr2[5] = {3, 6, 78, 0, 2};
    
    printf("Max value of arr1: %d\n", max_value(10, arr1));
    printf("Max value of arr2: %d\n", max_value(5, arr2));
    
    printf("Is arr1 non-deseanding: %d\n", non_decreasing(arr1, 10));
    printf("Is arr2 non-deseanding: %d\n", non_decreasing(arr2, 5));
    
    printf("Index of 7 in arr1: %d\n", findIndex(7, arr1, 10));
    printf("Index of 2 in arr2: %d\n", findIndex(2, arr2, 5));
    printf("Index of 4 in arr2: %d\n", findIndex(4, arr2, 5));
    
    return EXIT_SUCCESS;
}

int max_value(int n, int a[]) {
    int i = 0;
    int max = a[0];
    
    while (i < n) {
        if (a[i] > max) {
            max = a[i];
        }
        i++;
    }
    
    return max;
}

int non_decreasing(int a[], int n) {
    int i = 0;
    int returnValue = 1;
    
    while (i < n-1) {
        if (a[i] > a[i+1]) {
            returnValue = 0;
        }
        i++;
    }
    
    return returnValue;
}

int findIndex(int x, int a[], int n){
    int i = 0;
    int returnValue = -1;
    
    while(i < n && returnValue == -1) {
        if (a[i] == x) {
            returnValue = i;
        }
        i++;
    }
    
    return returnValue;
}