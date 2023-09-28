#include <iostream>
using namespace std;
int main()
{
 string word;
 int r=0,l=0,c=0,start=0;
 cin>>word;
 while(word[c]!='\0'){
   if(word[c]=='L'){
     l++;
   }if(word[c]=='R'){
     r++;
   }
     if(r==l){
       for(int i=start;i<=c;i++){
         cout<<word[i];
       }
       cout<<endl;
       start=r+l;
       r=l=0;
     }
   c++;
 }
}