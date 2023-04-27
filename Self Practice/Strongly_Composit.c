#include<stdio.h>
int main(){

    int n, k;
    scanf("%d",&n);
    for(int i=1; i<50; i++){
        if(i % n != 0){
            printf("%d ",i);
           
        }
        
    }
    


    return 0;
}