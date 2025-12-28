#include <bits/stdc++.h>
using namespace std;

// Problem: Given a string s and a non-empty string p, find all the start indices of p's anagrams in s.
// The order of output does not matter. Example: s = "cbaebabacd", p = "abc" -> [0,6]

// Brute-force: For each window of length p.size(), check if its frequency equals p's frequency. O(n * alphabet)
vector<int> bruteFindAnagrams(const string& s, const string& p) {
    vector<int> res;
    int n = s.size(), m = p.size();
    if (m > n) return res;
    vector<int> pf(26,0);
    for (char c: p) pf[c - 'a']++;
    for (int i = 0; i + m <= n; ++i) {
        vector<int> sf(26,0);
        for (int j = 0; j < m; ++j) sf[s[i+j] - 'a']++;
        if (sf == pf) res.push_back(i);
    }
    return res;
}

// Sliding window: maintain frequency difference as window slides. O(n)
vector<int> slidingFindAnagrams(const string& s, const string& p) {
    vector<int> res;
    int n = s.size(), m = p.size();
    if (m > n) return res;
    vector<int> pf(26,0), sf(26,0);
    for (char c: p) pf[c - 'a']++;
    for (int i = 0; i < n; ++i) {
        sf[s[i]-'a']++;
        if (i >= m) sf[s[i-m]-'a']--;
        if (i >= m-1 && sf == pf) res.push_back(i - m + 1);
    }
    return res;
}

int main() {
    string s = "cbaebabacd";
    string p = "abc";
    auto b = bruteFindAnagrams(s, p);
    auto sw = slidingFindAnagrams(s, p);
    cout << "Brute-force anagram indices: ";
    for (int x: b) cout << x << ' ';
    cout << '\n';
    cout << "Sliding-window anagram indices: ";
    for (int x: sw) cout << x << ' ';
    cout << '\n';
    return 0;
}
