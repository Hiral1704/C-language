#include <stdio.h>

int main()
{
    // Question 1//
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is a Vowel.\n", ch);
        break;
    default:

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            printf("%c is a Consonant.\n", ch);
        else
            printf("%c is not an alphabet.\n", ch);
    }
   
    return 0;
}
// Question 2//
#include <stdio.h>

int main() {
    int n, i, arr[100], min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Smallest element = %d", min);

    return 0;
}

// Question 3//
#include <stdio.h>

int revNum(int num)
{
    int rev = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    return rev;
}

int main()
{
    int num;
    printf("Enter a 3 digit number: ");
    scanf("%d", &num);

    int revnum = revNum(num);

    printf("Reverse number: %d\n", revnum);

    return 0;
}

// Question 4//
#include <stdio.h>

int main()
{

    int arr[10][10], temp = 0, i, n, j;

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
    printf("The square of an array:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//Question 5//
#include <stdio.h>

int main() {
    int i, j,k;
    
    for (i = 10; i >= 6; i--) {
        
        for (j = 1; j <= (11 - i); j++) {
            printf("%d ", i * i);
        }
        for (k = i; k <= 5; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}