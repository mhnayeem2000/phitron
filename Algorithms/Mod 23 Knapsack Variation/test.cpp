#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1005;
const int MAX_S = 1005;
int dp[MAX_N][MAX_S];

int subset_sum(int arr[], int n, int s) {
    // Base cases
    if (s == 0)
        return 1;
    if (n == 0)
        return 0;

    if (dp[n][s] != -1)
        return dp[n][s];

    if (arr[n - 1] <= s) {
        int opt1 = subset_sum(arr, n - 1, s - arr[n - 1]);
        int opt2 = subset_sum(arr, n - 1, s);
        return dp[n][s] = opt1 + opt2;
    } else {
        return dp[n][s] = subset_sum(arr, n - 1, s);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int s;
    cin >> s;

    // Initialize dp array with -1
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= s; j++) {
            dp[i][j] = -1;
        }
    }

    cout << subset_sum(arr, n, s) << endl;
    return 0;
}
