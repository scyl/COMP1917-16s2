#include <stdio.h>

int main(int argc, char* argv[]){
    int num = 0;
    int i = 0;
    printf("Enter numbers: ");
    scanf("%d", &num);
    
    while (i < num) {
        printf("*\n");
        i++;
    }
    
    return 0;
 }