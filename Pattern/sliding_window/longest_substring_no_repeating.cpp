#include <bits/stdc++.h>
using namespace std;

// Problem: Given a string, find the length of the longest substring without repeating characters.

// Brute-force: Check all substrings and test for uniqueness using a set. O(n^2 * alphabet) worst-case.
int bruteLongestUnique(const string& s) {
    int n = s.size();
    int best = 0;
    for (int i = 0; i < n; ++i) {
        unordered_set<char> seen;
        for (int j = i; j < n; ++j) {
            if (seen.count(s[j])) break;
            seen.insert(s[j]);
            best = max(best, j - i + 1);
        }
    }
    return best;
}

// Sliding window: two pointers + set/map of counts. Move right to expand, and move left when duplicate seen. O(n)
int slidingLongestUnique(const string& s) {
    vector<int> last(256, -1); // or unordered_map<char,int>
    int left = 0, best = 0;
    for (int right = 0; right < (int)s.size(); ++right) {
        left = max(left, last[(unsigned char)s[right]] + 1);
        best = max(best, right - left + 1);
        last[(unsigned char)s[right]] = right;
    }
    return best;
}

int main() {
    string s = "abcabcbb";
    cout << "Brute-force longest unique substring: " << bruteLongestUnique(s) << '\n';
    cout << "Sliding-window longest unique substring: " << slidingLongestUnique(s) << '\n';
    return 0;
}
