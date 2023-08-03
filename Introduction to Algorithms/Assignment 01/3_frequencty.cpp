#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int num, int val) {
    int left = 0; 
    int right = num - 1;
    int count = 0;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == val) {
            count++;
            int left = mid - 1;
            while (left >= 0 && arr[left] == val) {
                count++;
                left--;
            }
            int rigth = mid + 1;
            while (rigth < num && arr[rigth] == val) {
                count++;
                rigth++;
            }

            return count;
        } else if (arr[mid] < val) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
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
    int val;
    cin >> val;

    int res = binarySearch(arr, num, val);
    if (res > 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
