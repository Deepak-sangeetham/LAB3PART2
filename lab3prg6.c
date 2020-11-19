/* Modify the upc.c program of Section 4.1 so that it checks whether a UPC is valid.
    after the user enters a UPC, the program will display either VALID or NOT VALID.
*/

#include <stdio.h>


int main()
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,j6,
        first_sum, second_sum, total, adjusted_total, remainder, check_digit;

    printf("Enter the first 12 digits : ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &j6);

    first_sum = d + i2 + i4 + j1 + j3 + j5;

    second_sum = i1 + i3 + i5 + j2 + j4;

    total = (3 * first_sum) + second_sum;

    adjusted_total = total - 1;

    remainder = adjusted_total % 10;

    check_digit = 9 - remainder;

    if (check_digit == j6)
        printf("VALID\n");
    else
        printf("NOT VALID\n");

        
    return 0;
}