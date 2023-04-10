#include <stdio.h>

int main() {
   int size, arr[100000],ecount=0,ocount=0,pcount=0,ncount =0;
   scanf("%d", &size);
   
   for(int i = 1; i <= size; i++) {
      scanf("%d", &arr[i]);
   }
   
    //even Calculation.
     for(int i = 1; i <= size; i++) {
        if(arr[i] % 2 == 0){
            ecount++;
        }else{
            ocount++;
        }
        if(arr[i] > 0){
            pcount++;
        }else if(arr[i] < 0){
            ncount++;
        }
     }



   printf("Even: %d\n",ecount);
   printf("Odd: %d\n",ocount);
   printf("Positive: %d\n",pcount);
   printf("Negative: %d\n",ncount);

   return 0;
}
