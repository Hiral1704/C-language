#include <stdio.h>
int main()
{
    //que 1//
    float celsius, fahrenheit;
    int bs, hra, da, ta, gs;
    int angle1, angle2, angle3;

    printf("Enter the celsius temperature:- ");
    scanf("%f", &celsius);

    fahrenheit = (9.0 / 5.0 * celsius) + 32;

    printf("temperature fahrenheit: %f\n", fahrenheit);

    // que 2//
    printf("Enter the Basesalary:-");
    scanf("%d", &bs);

    printf("Enter the HRA Percentge:-");
    scanf("%d", &hra);

    printf("Enter the DA Percentge:-");
    scanf("%d", &da);

    printf("Enter the TA Percentge:-");
    scanf("%d", &ta);

    gs = bs + (bs * hra / 100) + (bs * da / 100) + (bs * ta / 100);

    printf("Gross salary:- RS. %d\n", gs);

    //que 3//

    printf("Enter First Angle: ");
    scanf("%d", &angle1);
    
    printf("Enter Second Angle: ");
    scanf("%d", &angle2);
    
    angle3 = 180 - (angle1 + angle2);
    
    printf("Third Angle: %d", angle3);
    return 0;
}