#include <stdio.h>

int main() {
	
	char username[999];
	
	printf("Enter your username: ");
	scanf("%[A-Za-z]" , username);
	
	printf("Username entered by the user is: %s\n" , username);
	printf("It is successfully accepted");
	
	return 0;	
	
}