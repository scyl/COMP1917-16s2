#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE 100
#define LINES_TO_READ 10

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("ERROR\n");
        exit(1);
    }
    
    FILE *fp = fopen(argv[1], "r");
    
    int i = 0;
    char line[MAX_LINE] = {0};
    char* success = fgets(line, MAX_LINE, fp);
    
    while (i < LINES_TO_READ && success != NULL) {
        printf("%s", line);
        success = fgets(line, MAX_LINE, fp);
        i++;
    }
    
    return EXIT_SUCCESS;
}








/*
    FILE *fp = fopen("1000.txt", "r");
    char line[MAX_LINE] = {0};
    char* success = fgets(line, MAX_LINE, fp);
    int i = 0;
    
    while (i < LINES_TO_READ && success != NULL) {
        printf("%s", line);
        success = fgets(line, MAX_LINE, fp);
        i++;
    }
*/