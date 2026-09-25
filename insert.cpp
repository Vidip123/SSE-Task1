#include <bits/stdc++.h>
using namespace std;

void insert(vector<int>& arr) {
    int temp;
    for (int i = 1; i < arr.size(); i++) {
        temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    insert(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}