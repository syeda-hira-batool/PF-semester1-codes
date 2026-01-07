#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* Con(char *oldString, char *newInput);

int main() {
    char input[200];
    char *result = NULL;

    while (1) {

        printf("Enter a string (or Q to stop): ");

        if (fgets(input, sizeof(input), stdin) == NULL) {
            printf("Error reading input! Exiting.\n");
            free(result);
            return 1;
        }
        
        input[strcspn(input, "\n")] = '\0';

        if (input[0] == '\0') {
            printf("Empty input! Please enter a valid string.\n\n");
            continue;
        }

        if (input[0] == 'Q' && input[1] == '\0') {
            break;
        }

        result = Con(result, input);
        if (result == NULL) {
            printf("Memory allocation failed! Exiting.\n");
            return 1;
        }

        printf("Current concatenated string: %s\n\n", result);
    }

    if (result != NULL) {
    printf("\nFinal Result: %s\n", result);
	} 
	else {
    	printf("\nFinal Result: (EMPTY)\n");
	}	

    free(result);
    return 0;
}

char* Con(char *oldString, char *newInput) {

    int oldLen;

	if (oldString == NULL) {
    	oldLen = 0;
	} 
	else {
    	oldLen = strlen(oldString);
	}

    int newLen = strlen(newInput);

    if (oldLen + newLen + 1 <= oldLen) {
        printf("Overflow error! Cannot concatenate.\n");
        return NULL;
    }

    char *newString = realloc(oldString, oldLen + newLen + 1);
    
    if (newString == NULL) {
        printf("Realloc failed! Cannot continue.\n");
        free(oldString);
        return NULL;
    }
    
    if (oldLen == 0) {
        newString[0] = '\0';
    }
    
    strcat(newString, newInput);

    return newString;
}
