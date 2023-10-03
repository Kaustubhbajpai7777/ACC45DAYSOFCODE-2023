#include <stdio.h>

int main()
{
    int percent;
    printf("enter the percentage\n");
    scanf("%d",&percent);
    if(percent>=90){
        printf("your Grade is 'A'");
    }
    else if(percent>=75){
        printf("your Grade is 'B'");
    }
    else if(percent>=60){
        printf("your Grade is 'C'");
    }
    else if(percent>=50){
        printf("your Grade is 'D'");
    }
    else if(percent>=40){
        printf("your Grade is 'E'");
    } 
    else{
        printf("your grade is 'F'");
    }
    return 0;
}
