#include <bits/stdc++.h>
using namespace std;
int search(int value, const vector<int>& arr) {
    int lower = 0;
    int higher = arr.size() - 1;
    while (lower <= higher) {
        int mid = (lower + higher) / 2;
        if (arr[mid] == value) {
            return mid;
        }
        else if (arr[mid] < value) {
            lower = mid + 1;
        }
        else {
            higher = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int find;
    cin >> find;
    int result = search(find, arr);
    if (result == -1) {
        cout << "Element not found\n";
    }
    else {
        cout << "Element found at index " << result << '\n';
    }
}