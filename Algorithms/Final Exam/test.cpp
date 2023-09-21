#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int minMarksToReachTarget(vector<int>& marksList, int target) {
    int n = marksList.size();

    // Initialize a DP table to store the minimum number of marks needed for each target value
    vector<int> dp(target + 1, INT_MAX);

    // Base case: 0 marks needed to achieve a target of 0
    dp[0] = 0;

    // Fill the DP table
    for (int i = 1; i <= target; i++) {
        for (int j = 0; j < n; j++) {
            if (marksList[j] <= i) {
                dp[i] = min(dp[i], dp[i - marksList[j]] + 1);
            }
        }
    }

    // If it's not possible to achieve the target score
    if (dp[target] == INT_MAX)
        return -1;

    return dp[target];
}

int main() {
    int target = 999; // Zarif's target score
    vector<int> marksList = {1, 3, 4,5,6}; // List of available marks

    int minMarks = minMarksToReachTarget(marksList, target);

    if (minMarks == -1)
        cout << -1 << endl;
    else
        cout << minMarks << endl;

    return 0;
}
