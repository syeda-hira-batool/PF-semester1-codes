#include <stdio.h>

#define MAX 100  

int Numbers[MAX];
int StackPointer = 0;
int Index;


void Push(int value) {
    if (StackPointer >= Index) {
        printf("Stack is Full!\n");
    } else {
        Numbers[StackPointer] = value;
        StackPointer++;
        printf("%d pushed onto the stack.\n", value);
    }
}


int Pop() {
    if (StackPointer == 0) {
        printf("Stack is Empty!\n");
        return -1;
    } else {
        StackPointer--;
        int poppedValue = Numbers[StackPointer];
        printf("%d popped from the stack.\n", poppedValue);
        return poppedValue;
    }
}


void Peek() {
    if (StackPointer == 0) {
        printf("Stack is Empty!\n");
    } else {
        printf("Top element is: %d\n", Numbers[StackPointer - 1]);
    }
}


void Display() {
	int i;
    if (StackPointer == 0) {
        printf("Stack is Empty!\n");
    } else {
        printf("Current stack elements:\n");
        for (i = StackPointer - 1; i >= 0; i--) {
            printf("%d\n", Numbers[i]);
        }
    }
}


int main() {
    int i, value, WantPop, count;

    printf("Enter the size of stack you want (max %d): ", MAX);
    scanf("%d", &Index);

    
    for (i = 0; i < Index; i++) {
        printf("Enter value to push: ");
        scanf("%d", &value);
        Push(value);
    }

    printf("\nHere is your stack\n");
    Display();

    printf("\nPeek at Top Element: ");
    Peek();

    printf("How many items you have to pop?: ");
    scanf("%d" , &WantPop);
    
    for(count=0; count<WantPop; count++){
    	Pop();
	}

    printf("\nStack After Pop: ");
    Display();

    printf("\nProgram Finished");

    return 0;
}