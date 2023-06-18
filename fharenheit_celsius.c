#include <stdio.h>

/* Write a programe that convert fahrenheit to celsius */

int main(void)
{
    float fahr, celsius, upper, lower, step;

    printf("\n");
    printf("Welcome to Programmer IBRAHIM Degree Converter App\n\n");
    printf("This App will help you convert Temperature in Degree Fahrenheit to Celsius\n");
    printf("Enter temperature in Fahrenheit at Lower Limit:  \n");
    scanf("%f", &lower);
    printf("Enter temperature in Fahrenheit at Upper Limit \n");
    scanf("%f", &upper);
    printf("Enter temperature in Fahrenheit at Step/Difference \n");
    scanf("%f", &step);

    fahr = lower;

    printf("Fahrenheit \t\t Celsius\n");
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32);
        printf("%.0f \t\t\t %.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    /* Using for loop */
    printf("\n\n\n");
    printf("Fahrenheit \t\t Celsius\n");
    for (fahr = lower; fahr <= upper; fahr+step)
    {
        celsius = (5.0/9.0) * (fahr-32);
        printf("%.0f \t\t\t %.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    /* The Below Programme is from Higher to Lower */
    printf("\n\n\n");
    printf("The Below Prograame is the Reverse Order of Your Inputs\n");
    printf("Fahrenheit \t\t Celsius\n");
    for (fahr = upper; fahr >= lower; fahr -= step)
    {
        printf("%.0f \t\t\t %.2f\n", fahr, (5.0/9.0) * (fahr-32));
    }
    return 0;
}
