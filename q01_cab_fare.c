#include <stdio.h>
#include <string.h>

int main(void)
{
    int distance;
    char memberStr[16];

    scanf("%d", &distance);
    scanf("%15s", memberStr);

    int isMember = (strcmp(memberStr, "true") == 0 || strcmp(memberStr, "1") == 0);

    int fare = 100;                       /* base fare */
    if (distance > 10)
        fare += 20 * (distance - 10);     /* Rs.20 per km beyond 10 km */

    if (isMember)
        fare = fare - fare / 10;          /* 10% membership discount */

    printf("Final Fare: \u20B9%d\n", fare);
    return 0;
}
