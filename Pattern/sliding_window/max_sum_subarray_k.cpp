#include <bits/stdc++.h>
using namespace std;

// Problem: Given an array of integers and an integer K, find the maximum sum
// of any contiguous subarray of size K.

// Brute-force: For each start i, compute sum of arr[i..i+K-1]. O(n*K)

int maxSumBrute(const vector<int>& a, int k) {
    int n = a.size();
    if (k > n) return 0; // or handle differently
    int best = INT_MIN;
    for (int i = 0; i + k <= n; ++i) {
        int s = 0;
        for (int j = 0; j < k; ++j) s += a[i + j];
        best = max(best, s);
    }
    return best;
}

// Sliding window: keep running sum of current window of size k. O(n)
int maxSumSliding(const vector<int>& a, int k) {
    int n = a.size();
    if (k > n) return 0;
    int windowSum = 0;
    for (int i = 0; i < k; ++i) windowSum += a[i];
    int best = windowSum;
    for (int i = k; i < n; ++i) {
        windowSum += a[i];
        windowSum -= a[i - k];
        best = max(best, windowSum);
    }
    return best;
}

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;
    cout << "Brute-force max sum (k=" << k << "): " << maxSumBrute(arr, k) << '\n';
    cout << "Sliding-window max sum (k=" << k << "): " << maxSumSliding(arr, k) << '\n';
    return 0;
}
