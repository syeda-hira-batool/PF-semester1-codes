#include <stdio.h>

int main()
{
	int r,g,l;

	printf("--------------------RGB Color --------------------\n\n");


	int layers;

	printf("Enter Number Of Layers: ");
	scanf("%d",&layers);

	while (layers < 1) 
	{
		printf("Invalid input! Enter a positive number: ");
		scanf("%d", &layers);
	}


	int rgb[layers][3][3];


	for ( l=0; l<layers; l++)
	{
		printf("\n--------------------Layer %d--------------------\n", l + 1);

	

		for( r=0; r<3;r++)
	{
		for(g = 0; g < 3; g++)
	{
	printf("Enter RGB value at position [%d][%d]: ", r + 1, g +1);
	scanf("%d", &rgb[l][r][g]);

	}
	}

	}


	printf("\n--------------------RGB Cube Values--------------------\n");
	for (l=0; l<layers; l++)
	{
		printf("\n Layer %d: \n",l+1);
		for( r=0; r<3;r++)
	{
		for( g = 0; g < 3; g++)
	{
	printf("%4d",rgb[l][r][g]);

	}
	printf("\n");
	}

	}

	return 0;
}