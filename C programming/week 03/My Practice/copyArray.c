#include<stdio.h>
int main(){
    int size1,size2, size3,arr1[100],arr2[100],arr3[100],i;
    scanf("%d",&size1);
    for(i = 0 ; i < size1; i++){
        scanf("%d",&arr1[i]);
    }

    scanf("%d",&size2);
    for(i = 0 ; i < size2; i++){
        scanf("%d",&arr2[i]);
    }

    for(i = 0 ; i < size1+size2; i++){
        arr3[i] = arr1[i];
    }


    return 0 ; 
}