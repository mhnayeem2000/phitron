#include<stdio.h>
int main(){
    int n, arr[1000],ver,cngv;
    scanf("%d",&n);
    for(int i  = 0 ; i < n; i++){
        scanf("%d",&arr[i]);
    }
   scanf("%d %d",&ver,&cngv);
    for(int i  = 0 ; i < n; i++){
       arr[ver] = cngv;
        
    }

    for(int i  = n-1 ; i >= 0; i--){
        
        printf("%d ",arr[i]);
    }
  
     
    

    return 0 ; 
}