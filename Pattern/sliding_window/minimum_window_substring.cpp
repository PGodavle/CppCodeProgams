#include <bits/stdc++.h>
using namespace std;

// Problem: Given strings s and t, return the minimum window in s which will contain all the characters in t.
// If there is no such window, return an empty string.
// Example: s = "ADOBECODEBANC", t = "ABC" -> "BANC"

// Brute-force: Check every substring of s and test whether it contains t (by frequency). O(n^2 * alphabet)
string bruteMinWindow(const string& s, const string& t) {
    int n = s.size(), m = t.size();
    if (m > n) return "";
    vector<int> tf(128,0);
    for (char c: t) tf[c]++;
    string best = "";
    for (int i = 0; i < n; ++i) {
        vector<int> sf(128,0);
        for (int j = i; j < n; ++j) {
            sf[s[j]]++;
            bool ok = true;
            for (int c = 0; c < 128; ++c) if (tf[c] > sf[c]) { ok = false; break; }
            if (ok) {
                string cand = s.substr(i, j - i + 1);
                if (best.empty() || cand.size() < best.size()) best = cand;
                break; // shorter j for this i already found
            }
        }
    }
    return best;
}

// Sliding window: typical two-pointer with counts. Expand right to include chars, and shrink left to remove unnecessary chars while maintaining all required counts.
string slidingMinWindow(const string& s, const string& t) {
    int n = s.size();
    if (t.empty() || n == 0) return "";
    vector<int> need(128,0);
    for (char c: t) need[c]++;
    int required = 0; // number of unique chars with positive need
    for (int c = 0; c < 128; ++c) if (need[c] > 0) ++required;

    vector<int> window(128,0);
    int formed = 0; // how many characters have desired frequency in current window
    int l = 0, r = 0;
    int bestLen = INT_MAX, bestL = 0;

    while (r < n) {
        char c = s[r++];
        window[c]++;
        if (need[c] > 0 && window[c] == need[c]) ++formed;

        while (l < r && formed == required) {
            if (r - l < bestLen) {
                bestLen = r - l;
                bestL = l;
            }
            char d = s[l++];
            if (need[d] > 0 && window[d] == need[d]) --formed;
            window[d]--;
        }
    }
    return (bestLen == INT_MAX) ? string("") : s.substr(bestL, bestLen);
}

int main() {
    string s = "ADOBECODEBANC";
    string t = "ABC";
    cout << "Brute-force min window: " << bruteMinWindow(s, t) << '\n';
    cout << "Sliding-window min window: " << slidingMinWindow(s, t) << '\n';
    return 0;
}
