#include<stdio.h>
int main(){
    int n , arr[100000];
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i] > 0){
            printf("%d ",1);
        }else if (arr[i] < 0)
        {
            printf("%d ",2);
        }
        else if (arr[i] == 0){
            printf("%d ",0);
        }
        
        else
        {
            scanf("%d ",&arr[i]);
        }
        
        
    }

    return 0;
}