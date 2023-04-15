// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
   int arr[100],size,i,pos,val;
   scanf("%d",&size);
   for(i = 0 ; i < size;i++){
       scanf("%d",&arr[i]);
   }
   scanf("%d",&pos);
   scanf("%d",&val);
   for(i = size; i>= pos;i--){
       arr[i+1] = arr[i];
   }
   arr[pos] = val;
   for(i = 0 ; i <= size; i++){
       printf("%d ",arr[i]);
   }

    return 0;
}