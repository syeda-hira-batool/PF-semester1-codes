#include <stdio.h>
#include <stdlib.h>

int main() {

    
    int *heartRate = (int*) malloc(sizeof(int));

    if (heartRate == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    
    printf("Enter patient's heart-rate: ");
    scanf("%d", heartRate);

    printf("\nHeart-rate stored temporarily: %d\n", *heartRate);

    //After sending data to long-term storage, memory must be freed
    free(heartRate);

    
       //At this point, heartRate becomes a DANGING POINTER.
       //It still holds the old address, but that memory is no longer valid.


    printf("\n--- UNSAFE BEHAVIOR (DANGLING POINTER) ---\n");
    printf("Trying to access freed memory...\n");

    
    printf("Value at freed pointer (UNSAFE): %d\n", *heartRate);
    // This may print garbage or crash — UNDEFINED behavior!

    
    heartRate = NULL;

    printf("\n--- SAFE BEHAVIOR AFTER FIXING DANGLING POINTER ---\n");

    
    if (heartRate == NULL) {
        printf("Pointer is NULL. Safe: memory was freed and pointer cleared.\n");
    } else {
        printf("Pointer still points somewhere — NOT SAFE!\n");
    }

    return 0;
}
