// Comments
#include <stdio.h>
#include <stdlib.h>

#define FIZZ 3
#define BUZZ 5

void fizzbuzz(int i);

int main(int argc, char* argv[]){
    int num = 1;
    while (num <= 100) {
        fizzbuzz(num);
        num++;
    }
    
    return EXIT_SUCCESS;
}

void fizzbuzz(int i) {
    if ((i % FIZZ == 0) && (i % BUZZ == 0)) {
        printf("Fizz Buzz\n");
    } else if (i % FIZZ == 0) {
        printf("Fizz\n");
    } else if (i % BUZZ == 0) {
        printf("Buzz\n");
    } else {
        printf("%d\n", i);
    }
}