#include<bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;
    for (int i = 0; i < size; i++) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        map<int, int> freq;
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }
        int thiefPearl = -1;
        for (const auto p : freq) {
            if (p.second % 2 != 0) {
                thiefPearl = p.first;
                break;
            }
        }

        cout << "Thief's Pearl Code: " << thiefPearl << endl;
    }
    return 0;
}
