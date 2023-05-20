#include<stdio.h>
int main(){
    int n,age[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&age[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(age[i] > age[j]){
                int temp = age[i];
                age[i] = age[j];
                age[j] = temp;    
            }
        }
        
    }
    if(n % 2 != 0){
        int mid = ((n+1) / 2);
        printf("%d \n",age[mid-1]);
    }
    else if (n % 2 == 0)
    {
        int mid1,mid2;
        mid1 = (n/2);
        mid2 = (n/2)+1;
        printf("%d %d\n",age[mid1-1],age[mid2-1]);
    }
    

    return 0;
}