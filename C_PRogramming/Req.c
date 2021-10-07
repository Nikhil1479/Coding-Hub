#include <stdio.h>
int main()
{
    int r1, r2, r3, reqs, reqp, cur, vol;
    printf("Enter Value of R1:");
    scanf("%d", &r1);
    printf("Enter Value of R2");
    scanf("%d", &r2);
    printf("Enter Value of R3");
    scanf("%d", &r3);
    reqp = 1 / r1 + 1 / r2 + 1 / r3;
    printf("Req for Parallel Combination is : %d\n", reqp);
    reqs = r1 + r2 + r3;
    printf("Req For Series Combination is : %d\n", reqs);
    printf("Enter Voltage ");
    scanf("%d", &vol);
    cur = vol / reqs;
    printf("Current Across Circuit is : %d", cur);
    return 0;
}
