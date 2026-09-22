#include <bits/stdc++.h>
using namespace std;
int search(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
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
    int find;
    cin >> find;
    int result = search(arr, find);
    if (result == -1) {
        cout << "Element not found\n";
    }
    else {
        cout << "Element found at index " << result << '\n';
    }
}