#include <stdio.h>

#define PRODUCTS 2
#define BRANCHES 3
#define WEEKS 4

int main()
{
    float sales[PRODUCTS][BRANCHES][WEEKS];
    float total[PRODUCTS] = {0};
    int p, b, w;

    printf("Retail Store Sales Tracker: \n\n");

    
    for (p = 0; p < PRODUCTS; p++)
    {
        printf("Enter sales data for Product %d:\n", p + 1);
        for (b = 0; b < BRANCHES; b++)
        {
            printf("  Branch %d:\n", b + 1);
            for (w = 0; w < WEEKS; w++)
            {
                printf("    Week %d sales: $", w + 1);
                scanf("%f", &sales[p][b][w]);
            }
        }
        printf("\n");
    }

    
    for (p = 0; p < PRODUCTS; p++)
    {
        float sum = 0;
        for (b = 0; b < BRANCHES; b++)
        {
            for (w = 0; w < WEEKS; w++)
            {
                sum += sales[p][b][w];
            }
        }
        total[p] = sum;
    }

   
    printf("Total Sales Report: \n");
    for (p = 0; p < PRODUCTS; p++)
    {
        printf("Product %d Total Sales: $%.2f\n", p + 1, total[p]);
    }
    printf("================================\n");

    return 0;
}