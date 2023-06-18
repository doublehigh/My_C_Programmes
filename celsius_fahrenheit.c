#include <stdio.h>

/* Write a programe that convert fahrenheit to celsius */

int main(void)
{
    float fahr, celsius, upper, lower, step;

    printf("\n");
    printf("Welcome to Programmer IBRAHIM Degree Converter App\n\n");
    printf("This App will help you convert Temperature in Degree Celsius to Fahrenheit\n");
    printf("Enter temperature in Celsius at Lower Limit:  \n");
    scanf("%f", &lower);
    printf("Enter temperature in Celsius at Upper Limit \n");
    scanf("%f", &upper);
    printf("Enter temperature in Celsius at Step/Difference \n");
    scanf("%f", &step);

    /*The Below Programme Convert Celsius to Fahrenheit */
    printf("Celsius \t\t Fahrenheit \n");
    while (celsius <= upper)
    {
        fahr = ((celsius*9.0)/5) + 32;
        printf("%.0f \t\t\t %.0f\n", celsius, fahr);
        celsius = celsius + step;
    }

    /* Using for loop */
    printf("\n\n\n");
    printf("Celsius \t\t Fahrenheit \n");
    for (celsius = lower; celsius <= upper; celsius += step)
    {
        fahr = ((celsius*9.0)/5) + 32;
        printf("%.0f \t\t\t %.0f\n", celsius, fahr);
    }

    /* The Below Programme is from Higher to Lower */
    printf("\n\n\n");
   printf("The Below Prograame is the Reverse Order of Your Inputs\n");
    printf("Celsius \t\t Fahrenheit \n");
    for (celsius = upper; celsius >= lower; celsius -= step)
    {
        printf("%.0f \t\t\t %.0f\n", celsius, ((celsius*9.0)/5) + 32);
    }
    return 0;
}

