#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE 100
#define LINES_TO_READ 10

int main(int argc, char* argv[]) {
    FILE* fp = fopen(argv[1], "r");
    
    int i = 0;
    char line[MAX_LINE] = {0};
    char* end = fgets(line, MAX_LINE, fp);
    
    while (i < LINES_TO_READ && end != NULL) {
        printf("%s", line);
        end = fgets(line, MAX_LINE, fp);
        i++;
    }
    
    return EXIT_SUCCESS;
}