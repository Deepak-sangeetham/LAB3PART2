/* Write a program that asks the user for a two-digit number, then prints the English Word for the number: */

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a two-digit number :");
    scanf("%d", &n);

    switch (n / 10){
        case 1:
            switch (n % 10){
                case 0:
                    printf("You entered the number Ten.\n");
                    break;
                case 1:
                    printf("You entered the number Eleven.\n");
                    break;
                case 2:
                    printf("You entered the number Twelve.\n");
                    break;
                case 3:
                    printf("You entered the number Thirteen.\n");
                    break;
                case 4:
                    printf("You entered the number Fourteen.\n");
                    break;                   

                case 5:
                    printf("You entered the number Fifteen.\n");
                    break;
                case 6:
                    printf("You entered the number Sixteen.\n");
                    break;
                case 7:
                    printf("You entered the number Seventeen.\n");
                    break;
                case 8:
                    printf("You entered the number Eighteen.\n");
                    break;
                case 9:
                    printf("You entered the number Nineteen.\n");
                    break;
                default:
                    break;
            
            }
            break;
        case 2:
            printf("You entered the number Twenty");
            break;
        case 3:
            printf("You entered the number Thirty");
            break;
        case 4:
            printf("You entered the number Fourty");
            break;
        case 5:
            printf("You entered the number Fifty");
            break;
        case 6:
            printf("You entered the number Sixty");
            break;
        case 7:
            printf("You entered the number Seventy");
            break;
        case 8:
            printf("You entered the number Eighty");
            break;
        case 9:
            printf("You entered the number Ninty");
            break;
        default:
            printf("Your number is out of range.\n");
            break;

            return 0;             
    }

    if (n / 10 != 1){
        switch (n % 10) {
            case 0:
                printf(".\n");
                break;
            case 1:
                printf("-one.\n");
                break;
            case 2:
                printf("-two.\n");
                break;
            case 3:
                printf("-three.\n");
                break;
            case 4:
                printf("-four.\n");
                break;
            case 5:
                printf("-five.\n");
                break;
            case 6:
                printf("-six.\n");
                break;
            case 7:
                printf("-seven.\n");
                break;
            case 8:
                printf("-eight.\n");
                break;
            case 9:
                printf("-nine.\n");
                break;
            defult:
                break;


        }
    }

    return 0;
}