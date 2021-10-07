#include<stdio.h>
struct detail
{
    char name[100],gender[100],des[100],dep[100];
    float bp;
};
void main()
{
    int n,i;
    float hr,da,gp;
    printf("Enter the Number of Employees\n");
    scanf("%d",&n);
    struct detail a[n];
    for(i=0;i<n;i++)
    {
      printf("Enter Name\n");  
      scanf("%s",&a[i].name);
      printf("Enter Gender\n "); 
      scanf("%s",&a[i].gender);
      printf("Enter Designation\n "); 
      scanf("%s",&a[i].des);
      printf("Enter Department- "); 
      scanf("%s",&a[i].dep);
      printf("Enter Basic Pay "); 
      scanf("%f",&a[i].bp);
    }
    for(i=0;i<n;i++)
    {
        hr=a[i].bp*0.25;
        da=a[i].bp*0.75;
        gp=a[i].bp+hr+da;
        printf("Gross Pay of %s -> %0.2f\n",a[i].name,gp);
    }
}