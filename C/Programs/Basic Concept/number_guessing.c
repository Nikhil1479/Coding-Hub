#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number, guess, nguess=1;
    srand(time(0));
    number = rand()%100+1;
    do{
    printf("Enter a Number between 1 and 100\n");
    scanf("%d",&guess);
    if(guess>number){
        printf("Lower Number Please\n");
    }
    else if(guess<number){
        printf("Higher Number Please\n");
    }
    nguess++;
    }while(guess!=number);
    printf("You Guessed it in %d attempts\n",nguess);
return 0;
}