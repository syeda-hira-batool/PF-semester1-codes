#include<stdio.h>

int main () {
	
	int n;
	int i;
	int j;
	
	printf("Enter the value of n: ");
	scanf("%d" , &n);
	
	//  run this loop n times (this is for the number  of lines)
	for (i=0; i<n; i++) {
		
		// print (i+1) stars
		for (j = 0; j<i+1; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}