/* Write a program that asks the user to enter the amount of taxable income, then displays
    the tax due.
*/

#include <stdio.h>

int main()
{
    float income, tax;

    printf("Enter the amount of income : $ ");
    scanf("%f", &income);
 
    if (income < 750.00f)
        tax = 0.01f * income;
    else if (income >= 750.00f && income < 2250.00f)
        tax = 7.50f + 0.02f * 750.00f;
    else if (income >= 2250.00f && income < 3750.00f)
        tax = 37.50f + 0.03f * 2250.00f;
    else if (income >= 3750.00f && income < 5250.00f)
        tax = 82.50f + 0.04f * 3750.00f;
    else if (income >= 5250.00f && income < 7000.00f)
        tax = 142.50f + 0.05 * 5250.00f;
    else 
        tax = 230.00f + 0.06 * 7000.00f;

    printf("The tax due : %.2f\n", tax);

    return 0;

}