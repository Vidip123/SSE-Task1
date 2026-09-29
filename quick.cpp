#include <bits/stdc++.h>
using namespace std;

int part(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int index = low;

    for (int i = low; i < high; i++) {
        if (arr[i] < pivot) {
            swap(arr[i], arr[index]);
            index++;
        }
    }
    swap(arr[index], arr[high]);
    return index;
}

void quick(vector<int>& arr, int low, int high) {
    if (low >= high) {
        return;
    }
    int pivot = part(arr, low, high);
    quick(arr, low, pivot - 1);
    quick(arr, pivot + 1, high);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    quick(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}