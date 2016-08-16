#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    char in = 0;
    int num = 0;
    in = getchar();
    while(in != '\n') {
        num *= 2;
        num += in - '0';
        in = getchar();
    }
    
    printf("%d\n", num);
    
    return EXIT_SUCCESS;
}