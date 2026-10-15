#include <stdio.h>

int main(void)
{
    long long total, x, y;

    scanf("%lld %lld %lld", &total, &x, &y);

    long long longBen = total * x / 100;          /* x% of the whole treasure */
    long long remaining = total - longBen;

    long long blackbeard = remaining * y / 100;   /* y% of what is left */
    remaining -= blackbeard;

    long long each = remaining / 3;               /* 3 other pirates; leftover coins go to the sea */

    printf("%lld\n%lld\n%lld\n", longBen, blackbeard, each);
    return 0;
}
