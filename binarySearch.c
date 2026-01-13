#include <stdio.h>

int main() {
    int marks[7] = {4, 2, 15, 6, 120, 94, 78}; 
    int user;
    int lowerbound = 0;
    int upperbound = 6;  
    int mid;
    char found = 'F';
    int boundary = 7;
    char NoSwaps= 'T';
    int j; // taken as an index to sort the array
    int temp;
    int i;
    
    // first we will sort the algorithm using the efficient bubble sort
    
    while (NoSwaps == 'T'){
    	NoSwaps = 'F';
    	for(j=0; j<boundary; j++) {
    		if (marks[j] > marks[j+1]){
    			temp = marks[j];
    			marks[j] = marks[j+1];
    			marks[j+1] = temp;
    			NoSwaps = 'T';
    			
			}
		boundary = boundary - 1;
		}
    	
	}
	
	printf("Array elements are: ");
	while (i < 7) {
    printf("%d ", marks[i]);
    printf("\t");
    i = i + 1;
	}

    printf(" \n Enter the marks you want to find: ");
    scanf("%d", &user);


    while (lowerbound <= upperbound && found == 'F') {
        mid = (lowerbound + upperbound) / 2;

        if (marks[mid] == user) {
            found = 'T';
            break;
        }
        else if (user > marks[mid]) {
            lowerbound = mid + 1;
        }
        else {
            upperbound = mid - 1;
        }
    }

    if (found == 'T') {
        printf("Marks %d found at position: %d \n", user, mid + 1);
    } else {
        printf("Marks %d not found in the list.\n", user);
    }

    return 0;
}