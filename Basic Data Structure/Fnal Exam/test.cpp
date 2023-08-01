#include<bits/stdc++.h>
using namespace std;

   pair<int, int> most_frequent_value(std::vector<int>& arr) {
    std::unordered_map<int, int> counts;
    for (int num : arr) {
        counts[num]++;
    }

    int max_count = 0;
    int most_frequent = 0;
    for (const auto& entry : counts) {
        if (entry.second > max_count || (entry.second == max_count && entry.first > most_frequent)) {
            max_count = entry.second;
            most_frequent = entry.first;
        }
    }

    return std::make_pair(most_frequent, max_count);
}

int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; ++t) {
        int N;
        std::cin >> N;
        std::vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            std::cin >> arr[i];
        }

        std::pair<int, int> result = most_frequent_value(arr);
        std::cout << result.first << " " << result.second << std::endl;
    }

    return 0;
}
