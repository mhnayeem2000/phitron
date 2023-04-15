#include<stdio.h>
int main(){
    int size,arr[100],pos,val;
    printf("Enter size : \n");
    scanf("%d",&size);
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Your array is : \n");
    for(int i= 0; i < size; i++){
        printf("%d ",arr[i]);
    }

    printf("\nEnter the position : \n");
    scanf("%d",&pos);
    printf("Enter the value : ");
    scanf("%d",&val);

    for(int i = size ;  i >= pos;  i--){
        arr[i+1] =  arr[i];
        
    }
    arr[pos] = val;
    
    printf("Your Updated  array is : \n");
    for(int i= 0; i <= size; i++){
        printf("%d ",arr[i]);
    }
    


    return 0;
}