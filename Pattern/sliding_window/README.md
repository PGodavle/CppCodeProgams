Sliding Window Pattern

This directory contains examples demonstrating the sliding window algorithmic pattern.
Each example includes:
- A commented brute-force solution (for clarity and correctness).
- A working sliding-window solution (optimized for the sliding window applicable cases).

Contents:

- max_sum_subarray_k.cpp: Maximum sum of any subarray of fixed size K.
- min_subarray_len_at_least_s.cpp: Smallest-length subarray with sum >= S (positive integers).
- longest_substring_no_repeating.cpp: Longest substring without repeating characters.
- longest_substring_at_most_k_distinct.cpp: Longest substring containing at most K distinct characters.
- find_all_anagrams.cpp: Find start indices of anagrams of a pattern in a string.
- minimum_window_substring.cpp: Smallest window substring that contains all characters of a target string.

Notes:
- Sliding window usually applies to arrays/strings when you can expand and shrink a contiguous range while maintaining an invariants (counts, sums, etc.).
- Problems with negative numbers or non-monotonic properties often require different techniques (prefix sums, hashes, or two-pointer variations with additional logic).

How to build and run one of the examples (example uses g++):

  g++ -std=c++17 -O2 max_sum_subarray_k.cpp -o max_sum_subarray_k
  ./max_sum_subarray_k

Each example's main() runs a small test case and prints results.