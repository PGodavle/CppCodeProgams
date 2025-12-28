#include <bits/stdc++.h>
using namespace std;

// Problem: Given a string s and integer k, find the length of the longest substring that contains at most k distinct characters.

// Brute-force: Check every substring and count distinct characters via a set or frequency map. O(n^2 * alphabet)
int bruteAtMostK(const string& s, int k) {
    int n = s.size();
    int best = 0;
    for (int i = 0; i < n; ++i) {
        unordered_map<char,int> freq;
        for (int j = i; j < n; ++j) {
            freq[s[j]]++;
            if ((int)freq.size() <= k) best = max(best, j - i + 1);
            else break; // once distinct > k, extending won't help
        }
    }
    return best;
}

// Sliding window: expand right and add chars, if distinct > k shrink left until distinct <= k. O(n)
int slidingAtMostK(const string& s, int k) {
    if (k == 0) return 0;
    unordered_map<char,int> freq;
    int left = 0, best = 0;
    for (int right = 0; right < (int)s.size(); ++right) {
        freq[s[right]]++;
        while ((int)freq.size() > k) {
            if (--freq[s[left]] == 0) freq.erase(s[left]);
            left++;
        }
        best = max(best, right - left + 1);
    }
    return best;
}

int main() {
    string s = "eceba";
    int k = 2;
    cout << "Brute-force longest substring with at most " << k << " distinct: " << bruteAtMostK(s, k) << '\n';
    cout << "Sliding-window longest substring with at most " << k << " distinct: " << slidingAtMostK(s, k) << '\n';
    return 0;
}
