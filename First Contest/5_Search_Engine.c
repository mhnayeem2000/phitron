#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int j=1;j<=num;j++){
        int size,arr[10000],val,count = 0;
        scanf("%d",&size);
        for(int i=1;i<=size;i++){
            scanf("%d",&arr[i]);
        }
        scanf("%d",&val);
        for(int i=1;i<=size;i++){
           if( arr[i] == val ){
            printf("Case %d: %d\n",j,i);
            count ++; 
            break;
           }
        }
        if( count == 0 ){
            printf("Case %d: Not Found\n",j);
        }
    }
    
   return 0;
}