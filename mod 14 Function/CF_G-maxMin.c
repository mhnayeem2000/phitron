#include<stdio.h>
void maxmin(){
    int n , arr[100000],max,min;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max = min = arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("%d %d",min,max);
}
int main(){
    maxmin();
    return 0;
}