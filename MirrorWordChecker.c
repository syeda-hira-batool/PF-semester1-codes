#include <stdio.h>
#include <string.h>
#include <ctype.h>


int isPalindrome(char str[], int start, int end) {
    
    if (start >= end)
        return 1; 

  
    if (tolower(str[start]) != tolower(str[end]))
        return 0; 

    
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char word[100];

    printf("Welcome to the Mirror Word Checker!\n");
    printf("Enter a word to check: ");
    scanf("%s", word);

    int length = strlen(word);

    if (isPalindrome(word, 0, length - 1))
        printf("%s is a palindrome!\n", word);
    else
        printf("%s is NOT a palindrome.\n", word);

    return 0;
}
