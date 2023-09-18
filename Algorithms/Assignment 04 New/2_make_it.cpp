#include <iostream>
#include <vector>

using namespace std;

vector<int> dp(1005, -1);

bool target(int i, int n) {
    if (i == n) return true;
    else if (i > n) return false;
    if (dp[i] != -1) return dp[i];

    if (target(i + 3, n) || target(i * 2, n))
        return dp[i] = true;
    else
        return dp[i] = false;
}

int main() {
    int test;
    cin >> test;

    for (int t = 0; t < test; t++) {
        int n;
        cin >> n;

        for (int i = 0; i < 1005; i++)
            dp[i] = -1;

        if (target(1, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
