#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if (argc != 4) {
        printf("Incorrect number of arguements!\n");
        exit(1);
    }
    
    int start = atoi(argv[1]);
    int end = atoi(argv[2]);
    
    FILE* fp = fopen(argv[3], "w");
    while (start <= end) {
        fprintf(fp, "%d\n", start);
        start++;
    }
    fclose(fp);
    return EXIT_SUCCESS;
}