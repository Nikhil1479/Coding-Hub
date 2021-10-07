#include <stdio.h>

int main(){
    int physics, chemistry, maths, total_marks, marks_out_off;
    float total_percent, total_subject_marks;

    printf("Enter Total Marks\n");
    scanf("%d",&total_marks);

    marks_out_off = total_marks/3;

    printf("Enter Physics Marks out of %d\n",marks_out_off);
    scanf("%d",&physics);
    
    printf("Enter Chemistry Marks out of %d\n",marks_out_off);
    scanf("%d",&chemistry);

    printf("Enter Mathematics Marks out of %d\n",marks_out_off);
    scanf("%d",&maths);

    total_subject_marks = physics + chemistry + maths;
    total_percent = total_subject_marks/total_marks*100;  

    if(total_percent<40 || physics < 33 || chemistry < 33 || maths < 33)
    {
        printf("Your total percent is %.2f and you are failed",total_percent);
    }
    else
    {
        printf("Your total percent is %.2f and you have been passed with flying colours",total_percent);
    }
    
return 0;
}