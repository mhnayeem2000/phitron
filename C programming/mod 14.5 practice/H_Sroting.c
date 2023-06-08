#include<stdio.h>
int main(){
    int n,arr[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ar[1000];
    for(int i=0;i<n;i++){
        ar[i]=arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
      
    }
    bool flag = false;
    for(int i = 0 ; i < n ; i++){
       
       if( ar[i] == arr[i] ){
        flag = true;
       }
    }
    if( flag == false ){
        printf("NO");
    }
    else printf("YES");
    return 0;
}