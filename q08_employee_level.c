#include <stdio.h>

int main(void)
{
    int experience, performance;

    scanf("%d %d", &experience, &performance);

    if (experience < 3)
        printf("Level: Junior\n");                       /* can never be Senior */
    else if (experience <= 7) {
        if (performance >= 80)
            printf("Level: Mid-Level\n");
        else
            printf("Level: Junior\n");
    } else {                                             /* more than 7 years */
        if (performance >= 85)
            printf("Level: Senior\n");
        else if (performance >= 80)
            printf("Level: Mid-Level\n");
        else
            printf("Level: Junior\n");
    }

    return 0;
}
