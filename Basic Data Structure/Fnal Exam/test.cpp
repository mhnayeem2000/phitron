#include<bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;
    while (size--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        map<int, int> fr;
        for (int i = 0; i < n; i++) {
            fr[arr[i]]++;
        }
        int maxV = arr[0];
        int maxCt = fr[arr[0]];
        for (int i = 1; i < n; i++) {
            if (fr[arr[i]] > maxCt || (fr[arr[i]] == maxCt && arr[i] > maxV)) {
                maxV = arr[i];
                maxCt = fr[arr[i]];
            }
        }

        cout  << maxV << " "<<  maxCt << endl;
    }
    return 0;
}
