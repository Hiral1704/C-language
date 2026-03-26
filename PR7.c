#include <stdio.h>
#include <string.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divi(int a, int b);
int mod(int a, int b);

int main()
{
    int choice, a, b;

    while (1)
    {
        printf("Press 1 for +");
        printf("\nPress 2 for -");
        printf("\nPress 3 for *");
        printf("\nPress 4 for /");
        printf("\nPress 5 for %%");
        printf("\nPress 0 for exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Exiting program...\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);

        printf("\n");

        switch (choice)
        {
        case 1:
            printf("Addition of %d and %d is %d\n", a, b, add(a, b));
            break;

        case 2:
            printf("Subtraction of %d and %d is %d\n", a, b, sub(a, b));
            break;

        case 3:
            printf("Multiplication of %d and %d is %d\n", a, b, mul(a, b));
            break;

        case 4:
            if (b != 0)
                printf("Division of %d and %d is %.2f\n", a, b, divi(a, b));
            else
                printf("Error! Division by zero\n");
            break;

        case 5:
            if (b != 0)
                printf("Modulus of %d and %d is %d\n", a, b, mod(a, b));
            else
                printf("Error! Modulus by zero\n");
            break;

        default:
            printf("Invalid choice!\n");
        }
        printf("\n");
    }

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float divi(int a, int b)
{
    return (float)a / b;
}

int mod(int a, int b)
{
    return a % b;
}