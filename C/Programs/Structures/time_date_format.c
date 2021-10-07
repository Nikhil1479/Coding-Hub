#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
} format;
int formatcmp(format d1, format d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }
    if (d1.day > d2.day)
    {
        return 1;
    }
    if (d1.day < d2.day)
    {
        return -1;
    }
    if (d1.hour > d2.hour)
    {
        return 1;
    }
    if (d1.hour < d2.hour)
    {
        return -1;
    }
    if (d1.minute > d2.minute)
    {
        return 1;
    }
    if (d1.minute < d2.minute)
    {
        return -1;
    }
    if (d1.second > d2.second)
    {
        return 1;
    }
    if (d1.second < d2.second)
    {
        return -1;
    }
    return 0;
}
void display(format d)
{
    printf("The date and Time is %d/%d/%d %d:%d:%d\n", d.year, d.month, d.day, d.hour, d.minute, d.second);
}
int main()
{
    format d1 = {2020, 4, 30, 5, 30, 55};
    format d2 = {2020, 4, 30, 5, 30, 55};

    display(d1);
    display(d2);
    int compare = formatcmp(d1, d2);
    printf("Format Comparision returns %d", compare);

    return 0;
}