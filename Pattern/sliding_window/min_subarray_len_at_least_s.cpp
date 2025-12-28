#include <bits/stdc++.h>
using namespace std;

// Problem: Given an array of positive integers and target S, find the minimal
// length of a contiguous subarray of which the sum >= S. If there isn't one, return 0.

// Brute-force: try every start and end, compute sums O(n^2) (or O(n^2) with prefix sums O(1)).
int minLenBrute(const vector<int>& a, int S) {
    int n = a.size();
    int best = INT_MAX;
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = i; j < n; ++j) {
            sum += a[j];
            if (sum >= S) best = min(best, j - i + 1);
        }
    }
    return (best == INT_MAX) ? 0 : best;
}

// Sliding window: expand right until sum >= S, then shrink left to minimize length. Works because array elements are positive.
int minLenSliding(const vector<int>& a, int S) {
    int n = a.size();
    int left = 0, sum = 0, best = INT_MAX;
    for (int right = 0; right < n; ++right) {
        sum += a[right];
        while (sum >= S) {
            best = min(best, right - left + 1);
            sum -= a[left++];
        }
    }
    return (best == INT_MAX) ? 0 : best;
}

int main() {
    vector<int> arr = {2, 3, 1, 2, 4, 3};
    int S = 7;
    cout << "Brute-force min length >= " << S << ": " << minLenBrute(arr, S) << '\n';
    cout << "Sliding-window min length >= " << S << ": " << minLenSliding(arr, S) << '\n';
    return 0;
}
