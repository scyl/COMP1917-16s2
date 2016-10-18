#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if (argc != 4) {
        printf("ERROR\n");
        exit(1);
    }
    
    FILE *fp = fopen(argv[3], "w");
    int i = atoi(argv[1]);
    int end = atoi(argv[2]);
    
    while (i <= end) {
        fprintf(fp, "%d\n", i);
        i++;
    }
    
    return EXIT_SUCCESS;
}











/*
    if (argc != 4) {
        printf("Incorrect number of arguements!\n");
        exit(1);
    }
    int i = atoi(argv[1]);
    int end = atoi(argv[2]);
    
    FILE *fp = fopen(argv[3], "w");
    
    while (i <= end) {
        fprintf(fp, "%d\n", i);
        i++;
    }
*/