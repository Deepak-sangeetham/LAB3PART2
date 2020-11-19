/* Modify the broker.c program of section 5.2 by making both of the following changes:

a. Ask the user to enter the number of shares and the price per share, instead of the value of the trade.
b. Add statements that compute the commission charged by a rival broker. Display the rival's commission as well
   as the commission charged by the original broker.
*/

#include <stdio.h>

int main()
{
    float commission, value, Share_price, rival;
    int shares;

    printf("Enter no.of Shares : ");
    scanf("%d", &shares);

    printf("Enter price of share : ");
    scanf("%f", &Share_price);

    value = shares * Share_price;


    if (value < 2500.00f)
        commission = 30.00f + 0.017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + 0.0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + 0.00034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + 0.0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + 0.0011f * value;
    else
        commission = 255.00f + 0.0009 * value;

    if (commission < 39.00f)
        commission = 39.00f;


    printf(" commission: $%.2f\n", commission);

    if (shares < 2000)
        rival = 33.00f + .03f * shares;
    else
        rival = 33.00f + .02f * shares;

    printf("Rival commission : $%.2f\n", rival);

    return 0;

}