# Sliding Window (Easy → Hard)

This folder contains notes and example problems that demonstrate the sliding window pattern, progressing from easy to hard. Each example is accompanied by a commented brute-force approach and a working sliding-window solution in C++.

What is the sliding window?
- Imagine a fixed-size or variable-size "window" that slides across an array or string.
- The window covers a contiguous region; as it moves (expands or contracts), we update bookkeeping (sum, counts, max/min, etc.) incrementally instead of recomputing from scratch.
- Analogy: scanning a moving window of fixed width over a long banner to compute the average color — instead of re-reading every pixel inside the window each time, you update by removing the left pixel and adding the new right pixel.

Why it helps
- Many naive solutions recompute results for every candidate subarray (O(n * k) or O(n^2)). Sliding window maintains the result as the window moves, often reducing complexity to O(n) or O(n log k).
- Two main variants:
  - Fixed-size window: maintain aggregate over exactly `k` elements (e.g., sum, max).
  - Variable-size window: expand until a condition is met, then contract until condition fails (e.g., minimum subarray with sum >= S).

When to use it (practical patterns)
- Problems asking about contiguous subarrays or substrings (sum, average, max/min, counts, distinctness).
- Streaming or online scenarios where input is processed sequentially and memory should be small.
- Use-cases: network packet/windowed metrics, moving averages, sliding-window statistics, substring search (anagrams), frequency tracking.

How it solves problems (general recipe)
1. Identify that the problem asks about contiguous region (subarray or substring).
2. Decide fixed vs variable window.
   - Fixed: use queue or indices to maintain exactly k elements.
   - Variable: maintain left and right pointers (expand right; while condition satisfied, shrink left).
3. Maintain needed bookkeeping incrementally when moving pointers.
4. Update best/answer at each step.

Tips & pitfalls
- For variable windows, be careful to update counts/sums when shrinking.
- When storing frequencies of chars/elements, prefer an array (small alphabets) or unordered_map.
- For problems requiring order statistics (median), combine sliding window with balanced trees/heaps (log n per update).
- Some problems require tracking a "max count so far" (non-decreasing) rather than exact counts in window to keep O(n).

Complexities
- Fixed/variable simple window: O(n) time, O(1) or O(alphabet) extra space.
- When using heaps / balanced trees for medians: O(n log k) time.

Example problems in this folder
- sliding_window_max_sum_k.cpp (easy) — max sum subarray of size k (fixed window)
- sliding_window_longest_unique_substring.cpp (medium) — no repeating characters
- sliding_window_min_subarray_len.cpp (medium) — smallest length with sum >= S
- sliding_window_find_all_anagrams.cpp (medium) — find all starting indices of anagrams
- sliding_window_longest_repeating_replacement.cpp (medium-hard) — longest substring after replacing ≤ k chars
- sliding_window_median.cpp (hard) — median in each sliding window (multiset/heap approach)

Contributing
- Add problems as `source_problemname.cpp` or descriptive names as above.
- Keep brute-force approach commented and the optimized sliding-window approach active.
- Add input/output samples in comments (including multiple test cases variations).
