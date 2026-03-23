#include <stdio.h>

int main()
{
    // Question 1//
    int n, a[10], i, largest;

    printf("enter the number:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            printf("Negative elements from an array:%d\n", a[i]);
        }
    }
    printf("\n");

    // Question 2//
    printf("enter the number:");
    scanf("%d", &n);

    printf("enter the element:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    printf("the largest element =%d\n", largest);

    printf("\n");

    // Question 3//
    int arr[10][10], temp = 0, j;

    printf("Enter a Value of row: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    printf("The transpose matrix of an array:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Question 4//
    int r, c,sum;

    printf("Enter the row : ");
    scanf("%d", &r);

    printf("Enter the col : ");
    scanf("%d", &c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++)
    {
        sum = 0;
        for (j = 0; j < c; j++)
        {
            sum = sum + arr[i][j];
        }
        printf("Sum of row = %d\n", sum);
    }

    for (j = 0; j < c; j++)
    {
        sum = 0;
        for (i = 0; i < r; i++)
        {
            sum = sum + arr[i][j];
        }
        printf("Sum of col = %d\n", sum);
    }
    return 0;
}