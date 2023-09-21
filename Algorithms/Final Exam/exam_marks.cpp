#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool subset_sum(vector<int>& arr, int n, int s) {

    if (s == 0)
        return true;
    if (n == 0)
        return false;

    if(dp[n][s] != -1) return dp[n][s];

    if (arr[n - 1] <= s) {
        return dp[n][s] = subset_sum(arr, n, s - arr[n - 1]) || subset_sum(arr, n - 1, s);
    } else {
        return dp[n][s] = subset_sum(arr, n - 1, s);
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;
        for(int i = 0; i < 1005; i++) {
            for(int j = 0; j <1005; j++) {
                dp[i][j] = -1;
            }
        }

        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        int target = 1000 - M;

        if (subset_sum(arr, N, target))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
