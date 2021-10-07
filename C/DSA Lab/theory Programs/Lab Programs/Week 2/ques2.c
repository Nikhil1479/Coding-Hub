#include <stdio.h>
struct distance{
    int km;
    int metre;
}d, d1, d2, total;   

void add_dist(struct distance d1, struct distance d2);

void main()
{
    
    printf("Enter the distance 1 km then metre : ");
    scanf("%d %d", &d1.km, &d1.metre);
    printf("Enter the distance 2 km then metre : ");
    scanf("%d %d", &d2.km, &d2.metre);
    add_dist(d1,d2);    

}

void add_dist(struct distance d1, struct distance d2)
{   
    total.km = d1.km + d2.km;
    total.metre = d1.metre + d2.metre;
    if(total.metre >= 1000)
    {
        total.metre = total.metre - 1000;
        ++total.km;
    }
    printf("\nTotal distance = %dkm %dm", total.km, total.metre);
}