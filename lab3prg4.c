/* Write a program that asks the user to enter a wind speed(in knots), then displays the corresponding description.*/

#include <stdio.h>

int main()
{
    int speed ;
    

    printf("Enter a wind speed (in knots) : ");
    scanf("%d", &speed);
    printf("Description of wind :");

    if (speed < 1)
        printf(" Calm\n");
    else if (speed >= 1 && speed <= 3)
        printf(" Light air\n");
    else if (speed >= 4 && speed <= 27)
        printf(" Breeze\n");
    else if (speed >= 28 && speed <= 47)
        printf(" Gale\n");
    else if (speed >= 48 && speed <= 63)
        printf(" Storm\n");
    else  
        printf(" Hurricane\n");

    return 0;
        


}