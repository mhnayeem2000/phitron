#include<stdio.h>
int main(){

    int num;
    scanf("%d",&num);
    int arr[num][num];
    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int flag = 1;

    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
             if( i == j){
                if(arr[i][j] != 1){
                    flag = 0;
                }
                continue;
            }
           
            if( arr[i][j] != 0 ){
               flag = 0;
            }
            
        }
    }
    if( flag == 0 ){
        printf("NO");
    }
    else if (flag == 1)
    {
        printf("YES");
    }
    
   


    return 0;
}