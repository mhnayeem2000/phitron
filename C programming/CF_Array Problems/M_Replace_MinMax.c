#include<stdio.h>
#include<string.h>
int main(){

    int size , arr[1001],max , min;

    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    max = min = arr[0];
    

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }

    printf("%d %d",max,min);

    /*   

    for(int i=0;i<size;i++){
        if(arr[i] == max){
            printf("%d ",min);
        }else if (arr[i] == min)
        {
            printf("%d ",max);
        }
        else{
            printf("%d ",arr[i]);
        }
        
    }
    */
    
    return 0;
}