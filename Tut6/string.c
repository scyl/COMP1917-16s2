#include <stdio.h>
#include <stdlib.h>

int len_str(char *str);
void reverse_string(char s[]);
void swap(char* first, char* second);
void substr(char s[], char d[], int lo, int hi);
char* strstr( char s[], char d[] );

int main(int argc, char* argv[]){
    char* str = "Hello";
    char arr[] = {"How are you!?"};
    char in[100] = {"How are yyyyyyyou going today?"};
    char out[100]= {0};
    
    printf("str's length is %d\n", len_str(str));
    printf("arr's length is %d\n", len_str(arr));
    reverse_string(arr);
    printf("reverse of arr :%s\n", arr);
    
    substr(in, out, 4, 6);
    printf("substr :%s\n", out);
    
    printf("sub found at :%s\n", strstr(in, "yyyou"));
    
    return EXIT_SUCCESS;
}

int len_str(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    
    return i;
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
    if ((lo > len_str(s)-1) && (lo > hi) && (lo < 0)) {
        d[0] = '\0';
    } else {
        int i = 0;
        while(lo <= hi && s[lo] != '\0') {
            d[i] = s[lo];
            lo++;
            i++;
        }
        d[i] = '\0';
    }
}

char* strstr(char s[], char d[]) {
    int i = 0;
    int j = 0;
    int matched = 0;
    char* returnValue = NULL;
    
    while ((returnValue == NULL) && (i < len_str(s)-1)) {
        if (s[i] == d[j]) {
            matched++;
            j++;
            if (matched == len_str(d)) {
                returnValue = &s[i-j+1];
            }
        } else {
            i-= j-1;
            j = 0;
            matched = 0;
            
        }
        i++;
    }
}