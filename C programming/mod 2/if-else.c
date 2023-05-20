#include<stdio.h>
int main(){

    int marks;
    printf("Please Enter Your Marks: ");
    scanf("%d",&marks);
    if(marks > 100){
        printf("please Enter Valied Number .");
    }
    else if(marks > 95 && marks <= 100){
        printf("You Got A+ in your Examination.");
    }
    else if( marks < 95 && marks > 80){
        printf("You Got A in your Examination.");
    }
    else if(marks < 80 && marks > 70){
        printf("You Got A- in your Examination.");
    }
    else if(marks < 70 && marks > 65){
        printf("You Got B+ in your Examination.");
    }else if(marks < 65 && marks > 60){
        printf("You Got B in your Examination.");
    }
    else if(marks < 60 && marks > 50){
        printf("You Got C in your Examination.");
    }else
    printf("You fail");
}