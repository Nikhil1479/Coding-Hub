#include <stdio.h>
int main()
{
    struct address
    {
        char phone[15];
        char city[25];
        int pin;
    };
    struct emp
    {
        char name[25];
        struct address adr;
    };
    struct emp e = {"Nikhil", "8273011131", "Dehradun", 248003};
    printf("\nName=%s Phone= %s", e.name, e.adr.phone);
    printf("\nCity=%s", e.adr.city);
    printf("\nPin=%d", e.adr.pin);
    return 0;
}
