#include <stdio.h>

int countNZ(int r, int c, int array[][c]);
int sad(int r, int c, int array[][c]);
void showMinor(int r, int c, int array[][c]);
int product(int r, int c, int array[][c]);

int main(){
    int r,c,i,j;
    printf("Enter the number of rows:\t");
    scanf("%d", &r);
    printf("Enter the number of columns:\t");
    scanf("%d", &c);
    int array[r][c];
    printf("Enter The elements of array:-\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d", &array[i][j]);
        }
    }
    int nzCount,sum,pro;
    nzCount = countNZ(r,c,array);
    sum= sad(r,c,array);
    pro=product(r,c,array);
    printf("Number of Non-zero elements are:%d\n", nzCount);
    printf("Sum of elements above main diagonal is:%d\n", sum);
    showMinor(r,c,array);
    printf("\n");
    printf("Product of elements in minor Diagonal is:%d", pro);
    return 0;
}

int countNZ(int r, int c, int array[][c]){
    int ch=0, i, j;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(array[i][j] == 0){
                ch++;
            }
        }
    }
    return ch;
}

int sad(int r, int c, int array[][c]){
    int sum=0,i;
    for(i=0; i<r; i++){
        if(i+1<c){
            sum+=array[i][i+1];
        }
    }
    return sum;
}

void showMinor(int r, int c, int array[][c]){
    int i,j=c-1;
    printf("Elements in Minor Diagonal are: ");
    for(i=0;i<r; i++){
        if(j>=0){
            printf("%d ", array[i][j]);
            j--;
        }
    }
}

int product(int r, int c, int array[][c]){
    int pro=1;
    int i,j=c-1;
    for(i=0;i<r; i++){
        if(j>=0){
            pro*=array[i][j];
            j--;
        }
    }
    return pro;
}