#include <stdio.h>
#include <stdlib.h>

#define THOUSAND 1000

int main(int argc, char* argv[]) {
    FILE* fp = fopen("1000.txt", "w");
    int i = 0;
    while (i < THOUSAND) {
        fprintf(fp, "%d\n", i);
        i++;
    }
    fclose(fp);
    
    return EXIT_SUCCESS;
}