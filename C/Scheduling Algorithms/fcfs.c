#include <stdio.h>
#include <stdlib.h>

struct process_struct
{
    int pid;
    int at;
    int bt;
    int ct, wt, tat, rt, start_time;
} ps[20], temp;

void swap(struct process_struct *ptr1, struct process_struct *ptr2)
{
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int n;
    printf("Enter Total Number of Processes: ");
    scanf("%d", &n);

    float sum_tat = 0, sum_wt = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Enter Process %d Arrival Time: ", i);
        scanf("%d", &ps[i].at);
        ps[i].pid = i;
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Process %d Burst Time: ", i);
        scanf("%d", &ps[i].bt);
    }

    for (int i = 0; i < n; i++)
    {
        ps[i].start_time = (i == 0) ? ps[i].at : max(ps[i].at, ps[i - 1].ct);
        ps[i].ct = ps[i].start_time + ps[i].bt;
        ps[i].tat = ps[i].ct - ps[i].at;
        ps[i].wt = ps[i].tat - ps[i].bt;

        sum_tat = sum_tat + ps[i].tat;
        sum_wt = sum_wt + ps[i].wt;
    }
    // Sorting
    int i, j;
    for (int i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (ps[j].at > ps[j + 1].at)
            {
                swap(&ps[j], &ps[j + 1]);
            }
        }
    }
    printf("\nProcess No. \tAT\tBurst Time\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t\t%d\t%d\t\t%d\t%d\t%d\n", ps[i].pid, ps[i].at, ps[i].bt, ps[i].ct, ps[i].tat, ps[i].wt);
        printf("\n");
    }
    printf("\nAverage Turn Around Time: %.2f", sum_tat / n);
    printf("\nAverage Waiting Time: %.2f", sum_wt / n);
    return 0;
}