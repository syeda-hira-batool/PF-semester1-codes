#include <stdio.h>

#define SCREENS 2
#define DAYS 3
#define SHOWS 3

int main()
{
    float revenue[SCREENS][DAYS][SHOWS];
    float total[SCREENS] = {0};
    float average[SCREENS];
    int s, d, sh;

    printf("Cinema Revenue Analysis: \n");

    
    for (s = 0; s < SCREENS; s++)
    {
        printf("\nEnter data for Screen %d:\n", s + 1);
        for (d = 0; d < DAYS; d++)
        {
            printf("  Day %d\n", d + 1);
            for (sh = 0; sh < SHOWS; sh++)
            {
                printf("    Enter revenue for Show %d: $", sh + 1);
                scanf("%f", &revenue[s][d][sh]);
            }
        }
    }

    
    for (s = 0; s < SCREENS; s++)
    {
        float sum = 0;
        for (d = 0; d < DAYS; d++)
        {
            for (sh = 0; sh < SHOWS; sh++)
            {
                sum += revenue[s][d][sh];
            }
        }
        total[s] = sum;
        average[s] = sum / (DAYS * SHOWS);
    }

    
    printf("\nRevenue Report: \n");
    for (s = 0; s < SCREENS; s++)
    {
        printf("\nScreen %d\n", s + 1);
        printf("  Total Revenue   : $%f\n", total[s]);
        printf("  Average per Show: $%f\n", average[s]);
    }

    printf("\n==================================\n");

    return 0;
}