/*
Given a number N and an array A of N numbers. Print the lowest number and its position.

Note: if there are more than one answer print first one's position.

Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers (-105  ≤  Ai  ≤  105).

Output
Print the lowest number and its position (1-index).

*/
#include<stdio.h>
int main(){
    int size , arr[10001], min,posi=0;

    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    

    for(int i=0;i<size;i++){
        
        if(arr[i]<min){
            min=arr[i];
           posi = i;
        
        }
        
    }
      printf("%d %d",min,posi+1);

    return 0;
}



