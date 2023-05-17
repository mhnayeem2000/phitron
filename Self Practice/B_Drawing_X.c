#include<stdio.h>
int main(){
    int num,fs,bs,x,j;
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        for(int j=1; j<=num; j++){
            //int r = 1;
            int c = num;
            if(i==j){
                printf("\\");
            } 
            else if ( i == c )
            {
                printf("/");
            }
            
            else {
                printf("*");
            }
            r++;
            c--;
        }

        printf("\n");
    }
    return 0;
}