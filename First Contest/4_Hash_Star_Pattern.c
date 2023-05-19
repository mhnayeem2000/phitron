#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n); //taking size of pattern
    int mid = (n -1)/2; // finding mid point
    for(int i = 0; i < n; i++){ // loop for row index
        for(int j = 0; j < n; j++){ // loop for column index
            if( i == mid){ // checking mid row and print #
                printf("#");
            }else if ( j == mid ) // checking mid column and print #
            {
                printf("#");
            }
            else 
            {
               printf("*");
            }  
        }
        printf("\n");
    }
    
   return 0;
}