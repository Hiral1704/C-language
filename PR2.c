#include <stdio.h>

int main()
{
    int marks;
    // que 1//
    printf("Enter your marks (out of 100): ");
    scanf("%d", &marks);

    (marks >= 90) ? printf("Your Grade is: 'A'") : (marks >= 80) ? printf("Your Grade is: 'B'")
                                               : (marks >= 70)   ? printf("Your Grade is: 'C'")
                                               : (marks >= 60)   ? printf("Your Grade is: 'D'")
                                               : (marks >= 50)   ? printf("Your Grade is: 'E'")
                                                                 : printf("Your Grade is: 'F'");
    printf("\n\n");

    // que 2//
    printf("Enter your marks (out of 100): ");
    scanf("%d", &marks);

    switch ((marks / 10) * 10)
    {
    case 100:
    case 90:
        printf("Your Grade is: A. Excellent Work");
        break;

    case 80:
        printf("Your Grade is: B.Well done");
        break;

    case 70:
        printf("Your Grade is: C.Good job");
        break;

    case 60:
        printf("Your Grade is: D.You Passed");
        break;

    case 50:
        printf("Your Grade is: E");
        break;

    default:
        printf("Your Grade is: F");
    }
    printf("\n");

    // que 3//
    printf("Enter your marks (out of 100): ");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Your Grade is A. Excellent Work! You are eligible for the next level.");
    }
    else if (marks >= 80)
    {
        printf("Your Grade is B. Good Work! You are eligible for the next level.");
    }
    else if (marks >= 70)
    {
        printf("Your Grade is C. You are eligible for the next level.");
    }
    else if (marks >= 60)
    {
        printf("Your Grade is D. You are eligible for the next level.");
    }
    else
    {
        printf("Your Grade is F. Please try again next time.");
    }

    return 0;
}