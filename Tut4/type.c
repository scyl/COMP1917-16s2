#include <stdio.h>
#include <stdlib.h>

#define TRUE 457
#define FALSE 0

int isdigit(int ch);
int islower(int ch);
int toupper(int ch);

int main(int argc, char* argv[]){
    printf("%d\n", isdigit('4'));
    printf("%d\n", isdigit(57));
    printf("%d\n", isdigit('g'));
    
    printf("%d\n", islower('g'));
    printf("%d\n", islower('T'));
    printf("%d\n", islower('5'));
    
    printf("%c\n", toupper('d'));
    printf("%c\n", toupper('5'));
    printf("%d\n", toupper('h'));
    
    if (islower('g')) {
        printf("YES\n");
    }
    
    return EXIT_SUCCESS;
}

int isdigit(int ch) {
    int returnValue = FALSE;
    if((ch >= '0') && (ch <='9')) {
        returnValue = TRUE;
    }
    return returnValue;
}

int islower(int ch) {
    int returnValue = FALSE;
    if((ch >= 'a') && (ch <='z')) {
        returnValue = TRUE;
    }
    return returnValue;
}

int toupper(int ch) {
    if (islower(ch)) {
        ch -= 32;
    }
    return ch;
}