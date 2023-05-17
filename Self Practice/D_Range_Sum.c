#include <stdio.h>
#include <math.h>

int main()
{
    int size;
    scanf("%d", &size);

    for(int i = 0; i < size; i++){
        long long int n1,n2, sum = 0;
        scanf("%lld %lld",&n1,&n2);
        for(int i = n1; i <= n2; i++){
            sum = sum + i;
        }
        printf("%lld\n",sum);
    }    
    
   return 0;
}