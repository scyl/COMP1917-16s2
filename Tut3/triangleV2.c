#include <stdio.h>
 
int main(int argc, char* argv[]) {
    int num;
    int row, col;
    int countSpace = 0;
    // Obtain input
    printf("Enter number: ");
    scanf("%d", &num);
    
    countSpace = num -1;
    row = 0;
    while(row < num) {
        col = 0;
        while(col < num) {
            if(col < countSpace) {
                printf(" ");
            } else {
                printf("*");
            }
            col++;
            
        } 
        printf("\n"); // Start a new line
        row++;
        countSpace--;
    }
    
    return 0;
}