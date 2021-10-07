#include <stdio.h>
#include <stdlib.h>

int main(){
    struct person{int age; double wt;};
    struct person *p1, p2;
    p1 = &p2;
    printf("Enter the age\n");
    scanf("%d",&p1->age);
    printf("Enter the weight\n");
    scanf("%f",&p1->wt);
    printf("Age = %d\n",p1->age);
    printf("wt = %f\n",p1->wt);
return 0;
}