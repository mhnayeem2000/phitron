#include<stdio.h>

int main(){
    int size,arr[1000000];
    long long int sum = 0;
    
    scanf("%d",&size);

    for(int i = 0; i < size;i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    if(sum < 0){
      sum = sum * (-1);
    }
    printf("%lld\n",sum);
    
    return 0;
}