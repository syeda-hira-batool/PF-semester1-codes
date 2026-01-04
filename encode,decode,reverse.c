#include <stdio.h>
#include <string.h> 

void encode(char message[]);
void decode(char message[]);
void reverse(char message[]);
void input(char message[]);


int main()
{
    int choice, Encoded = 0, hasInput = 0;
    char message[255];

    do
    {
        printf("\nChoose:\n");
        printf("Press 1 to Encode a Message\n");
        printf("Press 2 to Decode the Message\n");
        printf("Press 3 to Reverse the Message\n");
        printf("Press 4 to Exit\n\n");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                input(message);
                encode(message);
                Encoded = 1;
                hasInput = 1;
                break;

            case 2:
                if (Encoded)
                {
                    decode(message);
                }
                else
                {
                    printf("Please encode a message first!\n");
                }
                break;

            case 3:
                input(message);
                reverse(message);

            case 4:
                printf("\nExiting The Program\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    }
    while(choice != 4);

    return 0;
}


void input(char message[])
{
	int i=0;
	char ch;
	
	printf("\nEnter The Message: ");
	scanf("%c",&ch);
	
	while(ch == '\n')
	{
		scanf("%c",&ch);
	}
	
	while(ch != '\n' && i<254)
	{
		message[i++] = ch;
		scanf("%c",&ch);
	}
	
	message[i] = '\0';
}

void reverse(char message[]) 
{
    int i;
    int length = strlen(message);

    for (i = 0; i < length / 2; i++)
    {
        char temp = message[i];
        message[i] = message[length - i - 1];
        message[length - i - 1] = temp;
    }

    printf("Reversed String: %s\n", message);
}


void encode(char message[]) {
	
	int mask;
	int i;
	
	reverse(message);

	mask = (1<<1) | (1<<4);
	
	for(i=0; message[i] != '\0'; i++)
	{
		message[i] = message[i] ^ mask;
	}
	
	printf("Encoded Message: %s\n",message);
}

void decode(char message[]) {
	
	int mask;
	int i;
	
	mask = (1<<1) | (1<<4);
	
	for(i=0; message[i] != '\0'; i++)
	{
		message[i] = message[i] ^ mask;
	}
	
	reverse(message);
	printf("Decoded Message: %s\n",message);
}