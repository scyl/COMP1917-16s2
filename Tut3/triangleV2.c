#include <stdio.h>
 
int main(int argc, char* argv[]) {
    int num;
    int row, col;
    int count = 0;
    // Obtain input
    printf("Enter number: ");
    scanf("%d", &num);
    count = num;
    
    row = 0;
    while(row < num) {
        col = 0;
        while(col <= num) {
            if(col < count) {
                printf("*");
            } else {
                printf(" ");
            }
            col++;
        } 
        printf("\n"); // Start a new line
        row++;
        count--;
    }
    
    return 0;
}