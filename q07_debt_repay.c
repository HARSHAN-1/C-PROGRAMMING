#include <stdio.h>

int main(void)
{
    int principal, rate, years;

    scanf("%d %d %d", &principal, &rate, &years);

    double interest = principal * rate * years / 100.0;
    double amount = principal + interest;
    double discount = interest * 0.02;          /* 2% discount on total interest */
    double settlement = amount - discount;

    printf("%.2f\n%.2f\n%.2f\n%.2f\n", interest, amount, discount, settlement);
    return 0;
}
