/* Write a program that finds the largest and smallest of four integers entered by the user: */

#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, larg1, larg2, small1, small2, large, small;

    printf("Enter four integers : ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 >= n2){
       larg1 = n1;
       small1 = n2;
    }   
    else{
        larg1 = n2;
        small1 = n1;
    }

    if (n3 >= n4){
        larg2 = n3;
        small2 = n4;
    }
    else{
        larg2 = n4;
        small2 = n3;

    }
    if (larg1 > larg2){
        large = larg1;
    }
    else{
        large = larg2;
    }
    if (small1 > small2)
        small = small2;
    else 
        small = small1;

    printf("Largest : %d\n", large);
    printf("Smallest : %d\n", small);

    return 0;
        
}