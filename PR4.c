#include <stdio.h>
int main()
{
    // que 1//
    int i, j, n = 11, k;
    for (i = 41; i <= 45; i++)
    {
        for (j = 41; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");

    // que 2//
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
    printf("\n");

    // que 3//
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (k = i; k <= 5; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    printf("\n");

    // que 4//
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (k = i; k <= 5; k++)
        {
            if (k % 2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
    printf("\n");

    // que 5//
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (k = i; k <= 5; k++)
        {
            printf("%d", k);
        }
        for (j = 5 - 1; j >= i; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }
    printf("\n");

    // que 6//
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (j = 1; j <= (5 - i) * 2; j++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    printf("\n");

    // que 7//
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 3)
            {
                printf("* ");
            }
            else if (i == 2 && (j == 1 || j == 5))
            {
                printf("* ");
            }
            else if (i >= 4 && j == 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}