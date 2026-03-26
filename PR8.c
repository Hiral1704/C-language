#include <stdio.h>
int cube(int *p, int r, int c)
{
    int i, j;

printf("Cubes of array elemrnts:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            int value = *(p + i * c + j);
            printf("%d\n", value * value * value);
        }
        printf("\n");
    }
}

int main()
{
    // Question 1//
    int i, len = 0;
    char str[20];
    char *ptr;

    printf("enter the string:");
    fgets(str, 20, stdin);

    ptr = str;

    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
        ptr++;
    }
    printf("length:%d", len);
    printf("\n");

    // Question 2//
    int j, r, c;

    printf("enter the row:");
    scanf("%d", &r);

    printf("enter the colus:");
    scanf("%d", &c);

    int a[r][c];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    cube(&a[0][0], r, c);

    return 0;
}
