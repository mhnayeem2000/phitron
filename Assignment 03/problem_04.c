#include<stdio.h>

int sum(int x,int y){
    return x+y;
}

int sub(){
    int x,y;
    printf("Enter Two numbers for Sub (has R & No P) : ");
    scanf("%d %d",&x,&y);
    return x-y;
}

void mul(int x,int y){
    int mul = x*y;
    printf("Mlltiplication is : %d\n",mul);
   
}

void div(){
    int x,y;
    printf("Enter Two numbers for dividion (No R & No P) : ");
    scanf("%d %d",&x,&y);
    float div = x/y;
    printf("Division is : %f\n",div);
}

int main(){

    int a,b;
    printf("Enter Two numbers for Sum and Mul (has R & Has P) : ");
    scanf("%d %d",&a,&b);
    //Function has return type and also take parameter
    printf("Sum is :  %d\n",sum(a,b));
    //Function has No return type But  take parameter
    mul(a,b);
    //Function has return type But don't take parameter
    printf("Sub is : %d\n",sub());
    //Function has No return type and don't take parameter
    div();
   

}