#include <stdio.h>

int main(void)
{
    int units;
    double bill;

    scanf("%d", &units);

    if (units <= 200)
        bill = units * 0.50;
    else if (units <= 400)
        bill = units * 0.65 + 100;
    else if (units <= 600)
        bill = units * 0.80 + 200;
    else
        bill = units * 1.25 + 425;

    /* print "Rs.100" for whole amounts, otherwise two decimals */
    if (bill == (long long)bill)
        printf("Rs.%lld\n", (long long)bill);
    else
        printf("Rs.%.2f\n", bill);

    return 0;
}
