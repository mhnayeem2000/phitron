#include<stdio.h>
int main(){
    int num,mid;
    scanf("%d",&num);
    mid = (num+1)/2;
    for(int i=1; i<=num; i++){
        for(int j=1; j<=num; j++){
            
            if( i ==  mid && j == mid) {
                printf("X");
            }
            else if(i==j){
                printf("\\");
            } 
            else if ( num == i + j-1 )
            {
                printf("/");
            }
           
            else {
                printf("*");
            }  
        }

        printf("\n");
    }
    return 0;
}