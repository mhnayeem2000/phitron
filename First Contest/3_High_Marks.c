#include <stdio.h>
int main()
{
    int size,arr[10000];
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
int max = arr[0];
    for( int i=0;i<size;i++){

         if( arr[i] > max ){
            max = arr[i];
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",max - arr[i]);
    }

        
   return 0;
}