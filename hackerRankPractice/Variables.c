#include <stdio.h>

int main() {
    int n;
    long long lln;
    float f;
    char ch;
    
    scanf(" %d %lld %f %c",&n,&lln,&f,&ch);
    printf("%d \n",n);
    printf("%lld \n",lln);
    printf("%.2f \n",f);
    printf("%c ",ch);
    return 0;
}