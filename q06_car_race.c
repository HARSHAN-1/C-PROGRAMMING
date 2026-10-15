#include <stdio.h>

/* A car can travel on a road if the road number is divisible by the car number. */
int main(void)
{
    int a, b, c, car;

    scanf("%d %d %d %d", &a, &b, &c, &car);

    if (car != 0 && a % car == 0)
        printf("Car 1 goes into road A\n");
    else if (car != 0 && b % car == 0)
        printf("Car 1 goes into road B\n");
    else if (car != 0 && c % car == 0)
        printf("Car 1 goes into road C\n");
    else
        printf("No path exists\n");

    return 0;
}
