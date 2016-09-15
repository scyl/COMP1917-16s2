#include <stdio.h>
#include <stdlib.h>

int len_str(char *str);
void reverse_string(char s[]);
void swap(char* first, char* second);
void substr(char s[], char d[], int lo, int hi);
char* strstr(char s[], char d[]);

int main(int argc, char* argv[]){
    char* str = "Hello";
    char arr[] = {"Hello"};
    printf("length of str is :%d\n", len_str(str));
    reverse_string(arr);
    printf("reverse of arr is :%s\n", arr);
    if(argc > 1) {
        printf("length of argv[1] is :%d\n", len_str(argv[1]));
        reverse_string(argv[1]);
        printf("reverse of argv[1] is :%s\n", argv[1]);
    }
    
    char in[100] = {"How are you going today?"};
    char out[100];
    substr(in, out, 4, 6);
    printf("substr :%s\n", out);
    
    printf("sub found at :%s\n", strstr(in, "you"));

    return EXIT_SUCCESS;
}

int len_str(char *str) {
    int count = 0;
    while(str[count] != '\0') {
        count++;
    }
    return count;
}

void reverse_string(char s[]) {
    int i = 0;
    int j = len_str(s)-1;
    while (i < j) {
        swap(&s[i], &s[j]);
        i++;
        j--;
    }
}

void swap(char* first, char* second) {
    char temp = *first;
    *first = *second;
    *second = temp;
}

void substr(char s[], char d[], int lo, int hi){
    if ((lo <= 0) && (lo >= len_str(s)) && (lo > hi)) {
        d[0] = '\0';
    } else {
        int i = 0;
        while (lo <= hi) {
            d[i] = s[lo];
            i++;
            lo++;
        }
        d[i] = '\0';
    }
}

char* strstr(char s[], char d[]) {
    int matched = 0;
    int i = 0;
    int j = 0;
    char* returnValue = NULL;
    
    while ((i < len_str(s)) && (returnValue == NULL)) {
        if (s[i] == d[j]) {
            matched++;
            j++;
            if (matched == len_str(d)) {
                returnValue = &s[i-(len_str(d)-1)];
            }
        } else {
            j = 0;
            matched = 0;
            if (s[i] == d[j]) {
                matched++;
                j++;
            }
        }
        i++;
    }
    
    return returnValue;
}