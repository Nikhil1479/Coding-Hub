#include <stdio.h>

int main(){
    int i = 0;
    do{
        printf("Value id %d\n",i);
        i++;
        if (i==4){
            break;
        }
    }
    while(i<10);
return 0;
}