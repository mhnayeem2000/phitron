#include<stdio.h>
int main(){
    int n,arr[100],esum = 0  , osum = 0;
    scanf("%d",&n);
    for(int i = 0 ; i < n; i++){
        scanf("%d",&arr[i]);

        if(arr[i] % 2 == 0){
            esum = esum + arr[i];
        }else{
            osum = osum + arr[i];
        }
    }
    printf("%d %d",esum,osum);

    

}