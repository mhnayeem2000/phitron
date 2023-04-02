//Arithmtic Operation
#include<stdio.h>
int main(){
    int n1,n2,choice;
    int sum = 0 ; 
    printf("Enter Your First Number : ");
    scanf("%d",&n1);
    printf("Enter Your Second Number : ");
    scanf("%d",&n2);

    while (1)
    {
        printf("\n\nPlease Choose an Option (1/2/3/4) Which Operation you want To perform : \n1.Summetion \n2.Subtraction \n3.Multiplication \n4.Divide \n\n");
        printf("Your Choice : ");
        scanf("%d",&choice);
        if(choice == 1){
            sum = n1+n2;
            printf("Sum of %d and %d is : %d.",n1,n2,sum);
        }
        else if(choice == 2){
            int sub = n1-n2;
            printf("Subtraction of %d and %d is : %d.",n1,n2,sub);
        }
        else if(choice == 3){
            int mul = n1*n2;
            printf("Sum of %d and %d is : %d.",n1,n2,mul);
        }
        else if(choice == 4){
            int div = n1/n2;
            printf("Sum of %d and %d is : %d.",n1,n2,div);
        }
        else if(choice > 4){
            
            printf("Please Enter Correct Option.");
        }
    }
    
   
}