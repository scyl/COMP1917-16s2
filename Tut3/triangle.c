#include <stdio.h>
 
int main(int argc, char* argv[]) {
    int num;
    int row, col;
    // Obtain input
    printf("Enter number: ");
    scanf("%d", &num);
    // Print a row a num stars
    col = 1;
    while(col <= num){
        printf("*");
        col++;
    }
    printf("\n");
    
    row = 2;
    while(row < num) {
        col = 1;
        while(col <= num) {
            if(col == 1 || col == num){
                printf("*");
            } else {
                printf(" ");
            }
            col++;
        } 
        printf("\n"); // Start a new line
        row++;
    }
    
    col = 1;
    while(col <= num){
        printf("*");
        col++;
    }
    printf("\n");
    
    return 0;
}