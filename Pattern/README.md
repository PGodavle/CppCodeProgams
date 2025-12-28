# Patterns (DSA) — Index

This folder groups common algorithmic problem patterns used in data structures & algorithms (DSA). Use the links below to open the pattern-specific README and add problems, solutions, and notes in the corresponding subfolders.

- [sliding_window](sliding_window/README.md) — Sliding window techniques for fixed and variable sized windows (subarray sums, longest substring problems).
- [two_pointers](two_pointers/README.md) — Two-pointer approaches for sorted arrays, pair sums, and partition-style problems.
- [fast_slow_pointers](fast_slow_pointers/README.md) — Fast & slow pointer techniques (cycle detection, middle of list, tortoise & hare).
- [divide_and_conquer](divide_and_conquer/README.md) — Divide-and-conquer strategies (merge sort, quickselect, recursive decomposition).
- [dynamic_programming](dynamic_programming/README.md) — Dynamic programming patterns (memoization, tabulation, knapsack, DP on sequences/grids).
- [backtracking](backtracking/README.md) — Backtracking and search with pruning (permutations, combinations, N-Queens).
- [greedy](greedy/README.md) — Greedy algorithm patterns and proofs of correctness for optimal local choices.
- [graph_algorithms](graph_algorithms/README.md) — General graph algorithms and representations (Dijkstra, Bellman-Ford, MST, connectivity).
- [bfs_dfs](bfs_dfs/README.md) — Breadth-first and depth-first search techniques, traversal templates, and typical problems.
- [binary_search](binary_search/README.md) — Binary search variants (on arrays, on answer, and monotonic functions).
- [bit_manipulation](bit_manipulation/README.md) — Bitwise tricks and manipulations for constant-space solutions.
- [recursion](recursion/README.md) — Recursion fundamentals and transformations to iterative solutions.
- [heap_priority_queue](heap_priority_queue/README.md) — Heaps and priority queue uses (k-largest, merging, event simulation).
- [union_find](union_find/README.md) — Union-Find / Disjoint Set Union patterns for connectivity and component problems.
- [trie](trie/README.md) — Trie (prefix tree) patterns for prefix search, autocomplete, and dictionary problems.
- [prefix_sum](prefix_sum/README.md) — Prefix-sum and difference-array techniques for range queries and updates.
- [matrix](matrix/README.md) — Matrix-specific patterns: traversal, rotation, DP on grids, and submatrix queries.
- [sorting_and_searching](sorting_and_searching/README.md) — Sorting & searching algorithms, custom comparisons, and combined techniques.
- [topological_sort](topological_sort/README.md) — Topological ordering for DAG problems, ordering constraints, and scheduling.

Contributing
- Add problems as C++ source files named with the pattern: <source>_<problem-name>.cpp (e.g. leetcode_3_longest_substring_without_repeating_chars.cpp).
- Keep README notes short and link to the problem statement URL when available.
- Optional: add a tests/ or examples/ folder per pattern for input/output samples.

License / Style
- Follow the repository's existing C++ style. Consider adding a template in Pattern/templates for consistent headers and fast I/O.
