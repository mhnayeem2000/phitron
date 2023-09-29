#include <bits/stdc++.h>
using namespace std;
const int  N  = (int) 1e7+5;
#define ll  long long int
#define forn(i, n) for (int i = 0; i < int(n); i++)
 
vector<int>noldbach_number(1000+1,false);
vector<int>primes;
 
int a[N];
map<int,int>mp;
int main()
{
    int n;
    cin>>n;
 
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    
    int cnt=0;
 
    for(auto u:mp)
    {
        
        if(u.second>=u.first)
        {
            cnt+=u.second-u.first;
        }
        else
        {
            cnt+=u.second;
        }
    }
    cout<<cnt<<endl;
 
}