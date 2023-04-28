#include<stdio.h>
int arr[100000000];
int main(){
    int size,sum = 0;

    scanf("%d",&size);

    for(int i = 0; i < size;i++){
        scanf("%lld",&arr[i]);
        sum = sum + arr[i];
    }
    if(sum < 0){
      sum = sum * (-1);
    }
    printf("%d\n",sum);
    
    return 0;
}