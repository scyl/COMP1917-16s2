#include <stdio.h>

int main(int argc, char* argv[]){
    int num = 0;
    printf("Enter numbers: ");
    scanf("%d", &num);
    
    int counter = 0;
    while (counter < num) {
        printf("*\n");
        counter++;
    }
    return 0;
 }