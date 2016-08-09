#include <stdio.h>

int main(int argc, char* argv[]){
    int first, second, third;
    printf("Enter numbers: ");
    scanf("%d %d %d", &first, &second, &third);
    
    if ((first > second) && (second > third)) {
        printf("Descending\n");
    } else if (first < second) {
        if (second < third) {
            printf("Ascending\n");
        }
    } else {
        printf("Neither\n");
    }
    
    return 0;
 }