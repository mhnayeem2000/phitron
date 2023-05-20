#include<stdio.h>
int main(){

    int size, arr[100],posi,val;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    for(int i = 0 ; i < size;  i++){
        printf("Enter valu of  [%d] :  ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Your Current Array Is : ");
    for(int i = 0 ; i < size; i++){
        printf("%d ",arr[i]);
    }


    printf("\nEnter the position you want to added :  ");
    scanf("%d",&posi);
    printf("\nEnter the Value you want to push :");
    scanf("%d",&val);


    for(int i = size; i>= posi ; i--){
        arr[i+1] = arr[i];
    }

    arr[posi] = val;
    printf("Your Updated Array Is : ");
    for(int i = 0 ; i <= size; i++){
        printf("%d ",arr[i]);
    }



    return 0 ; 
}