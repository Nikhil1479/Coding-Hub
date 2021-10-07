 #include <stdio.h>
 
 int main(){
    int principle, rate, years, simple_interest;
    printf("Enter the value of Principle\n");
    scanf("%d",&principle);
    printf("Enter the value of rate\n");
    scanf("%d",&rate);
    printf("Enter the time period(in years)\n");
    scanf("%d",&years);
    simple_interest = (principle * rate * years)/100;
    printf("Simple Interest = %d\n",simple_interest);
    printf("Total Amount with Interest = %d",principle+simple_interest);
   return 0;
 }
 