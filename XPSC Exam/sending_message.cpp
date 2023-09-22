#include <bits/stdc++.h>
using namespace std;

bool comp(string a, string b) {
    int n = a.size(), m = b.size();
    int dp[n + 1][m + 1];
    
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    
    return (dp[n][m] == m);
}

int main() {
    string word1, word2;
    
    while (cin >> word1 >> word2) {
        if (comp(word1, word2)) {
            cout << "Possible\n";
        } else {
            cout << "Impossible\n";
        }
    }

    return 0;
}
