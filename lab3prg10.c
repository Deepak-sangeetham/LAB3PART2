/* Using the switch statement, write a program that converts a numerical grade into a letter
    grade:
*/

#include <stdio.h>

int main()
{
    int marks;
    char grade;

    printf("Enter numerical grade : ");
    scanf("%d", &marks);

    if (marks > 100 || marks < 0)
        grade = -11;

    switch(marks/10){

        case 0: case 1: case 2: case 3: case 4: case 5:
            printf("Letter grade : F\n");
            break;
        case 6:
            printf("Letter grade : D\n");
            break;
        case 7: 
            printf("Letter grade : C\n");
            break;
        case 8:
            printf("Letter grade : B\n");
            break;
        case 9: case10:
            printf("Letter grade : A\n");
            break;
        default :
            printf("Numerical error, marks is out of range\n");
            break;
    }

    return 0;
}