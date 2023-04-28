#include<stdio.h>

int main(){
    int size,sum = 0;
    static int arr[10000000];
    scanf("%d",&size);

    for(int i = 0; i < size;i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    if(sum < 0){
      sum = sum * (-1);
    }
    printf("%d\n",sum);
    
    return 0;
}