#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    scanf("%d",&size);
    for(int i=0; i<size; i++){
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        if( (a + b) == c){
            printf("+\n");
        }else if ((a-b) == c)
        {
            printf("-\n");
        }
        
    }
    return 0;
}