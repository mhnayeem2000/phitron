#include <stdio.h>
int main()
{
     int size,arr[10000],val,count = 0;
        scanf("%d",&size);
        for(int i=1;i<=size;i++){
            scanf("%d",&arr[i]);
        }
        scanf("%d",&val);
        for(int i=1;i<=size;i++){
           if( arr[i] == val ){
            printf("Case : %d",i);
            count ++;
           }
        }
        if( count == 0 ){
            printf("Not Found");
        }
    
   return 0;
}