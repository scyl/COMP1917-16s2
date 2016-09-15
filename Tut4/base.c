#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    char in = 0;
    int num = 0;
    int base = 0;
    printf("Enter Base: ");
    scanf("%d", &base);
    printf("Enter number: \n");
    getchar();
    in = getchar();
    while(in != '\n') {
        num *= base;
        num += in - '0';
        in = getchar();
    }
    
    printf("%d\n", num);
    
    return EXIT_SUCCESS;
}