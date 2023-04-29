#include<stdio.h>
int main(){
    int n, arr[100000],min;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    min = arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
            printf("%d ",min);
        }
    }
    return 0;
}