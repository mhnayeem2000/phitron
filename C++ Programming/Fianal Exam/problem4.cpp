#include <bits/stdc++.h>
using namespace std;
class student {
    public:
        string nm;
        int cls;
        string s;
        int id;
};
int main(){
    int n ; cin >> n;
    student a[n];
    for(int i = 0; i < n; i++){
        //getline(cin,a[i].nm);
        cin >> a[i].nm;
        cin >> a[i].cls >> a[i].s >> a[i].id;
        //cin.ignore();
    }
    for(int i = 0; i < n-1 ; i++){
        for(int j = i+1; j < n ; j++){
            int temp = a[i].id;
            a[i].id =   a[j].id;
            a[j].id = temp;
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }
    return 0;
}