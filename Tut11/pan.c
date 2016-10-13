// write a program to detect palindromes
// that is, a word that is the same in regular and reverse order

 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define TRUE 1
#define FALSE 0

int isPalindrome(char array[], int size);

int main(int argc, char* argv[])
{
    
    char* str_1 = "RADAR";
    char* str_2 = "StanisTheManis";
    char* str_3 = "helloh";
    char* str_4 = "jumper";
    char* str_5 = "";
    char* str_6 = "abccba";
    char* str_7 = "------";
    char* str_8 = "1234567890";

   
    printf("Testing isPalindrome() ... ");
    void prepare();
    assert( isPalindrome(str_1, 6) == TRUE );
    void prepare();
    assert( isPalindrome(str_2, 15) == FALSE );
    void prepare();
    assert( isPalindrome(str_3, 7) == FALSE );
    void prepare();
    assert( isPalindrome(str_4, 7) == FALSE );
    void prepare();
    assert( isPalindrome(str_5, 0) == TRUE );
    void prepare();
    assert( isPalindrome(str_6, 7) == TRUE );
    void prepare();
    assert( isPalindrome(str_7, 5) == TRUE );
    void prepare();
    assert( isPalindrome(str_8, 11) == FALSE );
    printf("PASSED!\n");

    return EXIT_SUCCESS;
}

// takes in a string and its size (including NULL byte/character);
int isPalindrome(char array[], int size) {
    int j = strlen(array);
    int isPan = TRUE;
    int i = 0;
    j--;
    while (i <= j && isPan) {
        if(array[i] != array[j]) {
            isPan = FALSE;
        }
        i++;
        j--;
    }
    
    return isPan;
}