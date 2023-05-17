#include<stdio.h>
int main(){
    int num,fs,bs,x,j;
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        for(int j=1; j<=num; j++){
            if( i ==  3 && j == 3) {
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