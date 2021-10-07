#include <stdio.h>  
void swap(int *, int *,int *); 
int main()  
{  
    int a = 10;  
    int b = 20; 
    int c = 30;  
    
    printf("Before swapping the values in main a = %d, b = %d, c = %d\n",a,b,c); 
    
    swap(&a,&b,&c);  
    printf("After swapping values in main a = %d, b = %d,c = %d\n",a,b,c);  
}  
void swap (int *a, int *b,int*c)  
{  
    int temp;   
    temp = *a;  
    *a=*b;  
    *b=*c;
    *c = temp;  
    printf("After swapping values in function a = %d, b = %d,c = %d\n",*a,*b,*c); 
}  
