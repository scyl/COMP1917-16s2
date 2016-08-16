#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]){
    srand(time(NULL));
    int num1 = (rand() % 107) +1;
    int num2 = (rand() % 107) +1;
    
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    if (num2 % num1 == 0) {
        printf("%d is a factor of %d\n", num1, num2);
    } else {
        printf("%d is NOT a factor of %d\n", num1, num2);
    }
    
    return 0;
}

//https://github.com/scyl/COMP1917-16s2
//scyl@cse.unsw.edu.au