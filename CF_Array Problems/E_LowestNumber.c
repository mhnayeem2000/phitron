#include<stdio.h>
int main(){
    int size , arr[10001], min,posi=0;

    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    

    for(int i=0;i<size;i++){
        
        if(arr[i]<min){
            min=arr[i];
           posi = i;
        
        }
         //printf("%d %d",min,i);
        
    }
      printf("%d %d",min,posi+1);

    return 0;
}