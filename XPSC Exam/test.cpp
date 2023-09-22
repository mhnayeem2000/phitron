#include <bits/stdc++.h>
using namespace std;

int calculateZazaDrinks(const string& binaryString) {
    int n = binaryString.length();
    vector<int> dp(n + 1, 0);

    for (int i = 1; i <= n; ++i) {
        
        if (binaryString[i - 1] == '1') {
            
            dp[i] = max(dp[i - 1] + 1, i % 2 == 0 ? dp[i - 2] + 1 : 0);
        } else {
            dp[i] = 0;
        }
    }

    return dp[n];
}

int main() {
    string binaryString = "0101010101";
    int zazaDrinks = calculateZazaDrinks(binaryString);

    cout << "Zaza drank " << zazaDrinks << " bottles of blood.\n";

    return 0;
}
