#include <stdio.h>
#include <ctype.h>   

int countupper(char str[], int index) {
    
    if (str[index] == '\0')
        return 0;

    int count;

    if (isupper(str[index])) {
        count = 1;
    } else {
        count = 0;
    }

    return count + countupper(str, index + 1);
}

int countlower(char str[], int index) {
    
    if (str[index] == '\0')
        return 0;

    int count;

    if (islower(str[index])) {
        count = 1;
    } else {
        count = 0;
    }

    return count + countlower(str, index + 1);
}

int main() {
    char word[100];

    printf("Enter a word: ");
    gets(word);  

    int result = countupper(word, 0);
    int result2 = countlower(word, 0);

    printf("Number of uppercase letters: %d\n", result);
    printf("Number of lowercase letters: %d\n", result2);

    return 0;
}
