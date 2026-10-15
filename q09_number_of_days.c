#include <stdio.h>

int main(void)
{
    int year, month;

    scanf("%d %d", &year, &month);

    if (year < 1900 || year > 9999 || month < 1 || month > 12) {
        printf("0\n");
        return 0;
    }

    int leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    int days;

    switch (month) {
        case 2:
            days = leap ? 29 : 28;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        default:
            days = 31;
    }

    printf("%d Days\n", days);
    return 0;
}
