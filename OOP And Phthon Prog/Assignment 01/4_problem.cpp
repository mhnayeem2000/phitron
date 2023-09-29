#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int num) {
    int count = 0;
    bool isEven = true;
    for (int i = 0; i < num; i++) {
        if (arr[i] % 2 != 0) {
            isEven = false;
            break;
        }
    }
    if (isEven) {
        for (int i = 0; i < num; i++) {
            arr[i] = arr[i] / 2;
        }
        count++;
    }

    return count;
}

int main() {
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }
    cout << solve(arr, num);
    return 0;
}
