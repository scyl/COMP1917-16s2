#include <stdio.h>

int main(int argc, char* argv[]){
    int first, second, third;
    printf("Enter numbers: ");
    scanf("%d %d %d", &first, &second, &third);
    
    if ((first > second) && (second > third)) {
        printf("descending order\n");
    } else if ((first < second) && (second < third)) {
        printf("ascending order\n");
    } else {
        printf("Random order\n");
    }
    
    return 0;
 }