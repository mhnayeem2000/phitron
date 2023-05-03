/*
problem description: 
Given a number N. Print a face down right angled triangle that has N rows.

*/

#include<stdio.h>
int main(){

    int n,s,k;
    scanf("%d",&n);
    k = n;
    s = 0;
    for(int i = 0; i < n; i++){
        for(int j = k; j > 0; j--){
            printf("*");
        }
        for(int j = i; j < s; j++){
            printf(" ");
        }
        printf("\n");
        s++;
        k--;

    }
    return 0;
}