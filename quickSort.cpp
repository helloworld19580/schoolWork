#include <bits/stdc++.h>

using namespace std;

int arr[1001];

void quickSort(int begin, int end) {
    if (begin >= end) return;
    int i = begin,
        j = end;
    int x = arr[(begin + end)/2];
    while (i <= j) {
        while (arr[i] < x) i++;
        while (arr[j] > x) j--;
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    if (begin < j) quickSort(begin, j);
    if (i < end) quickSort(i, end);
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i < 1001; i++) {
        arr[i] = INT_MIN;
    }
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    quickSort(1, n);
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
