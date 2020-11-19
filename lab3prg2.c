/* Write a program that asks the user fpr a 24-hour time, then displays the time in 12-hour
    form.
    Be careful not to display as 12:00 as 0:00.
*/

#include <stdio.h>

int main()
{
    int i, j, k ;
    

    printf("Enter a 24-hour time: ");
    scanf("%2d : %2d", &i, &j);

    if (i == 12 && j > 0)

        k = (i -12);

    else if (i > 12)

        k = (i -12);

    else
        k = i;

    printf("Equivalent 12-hour time : %2d:%2d\n", k, j);

    return 0;
}