#include <stdio.h>

int main(void)
{
    int answered, remaining, alreadySubmitted;

    scanf("%d %d %d", &answered, &remaining, &alreadySubmitted);

    if (answered >= 1 && remaining > 0 && alreadySubmitted == 0)
        printf("Submission Allowed\n");
    else
        printf("Submission Not Allowed\n");

    return 0;
}
