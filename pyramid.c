#include <stdio.h>

int main() {
    int rows;
    int i;
    int star;
    int space;

    
    printf("Enter number of rows for the pyramid: ");
    scanf("%d", &rows);

   
    for (i = 1; i <= rows; i++) {
        
       
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        
        for (star = 1; star <= (2 * i - 1); star++) {
            printf("*");
        }

        
        printf("\n");
    }

    return 0;
}