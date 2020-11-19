/* Write a program that calculates how many digits a number contains: 
   The number shouldn't have more than 4 digits.
*/

#include <stdio.h>

int main()

{
    int N, d ;

    printf("Enter a number : ");
    scanf("%d", &N);

    if (N < 10)
        d = 1;
        
    else if (N < 100)
        d =2 ;

    else if (N < 1000)
        d = 3;

    else if (N < 10000)
        d = 4;

    printf("The number  %d has %d digits.\n ", N, d);
    
    return 0;
    
}