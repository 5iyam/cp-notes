One-line summary

O(1) space means memory stays constant, O(n) space means memory grows with input size, and it is independent from time complexity.
O(n) space means:

“If input size doubles, memory also roughly doubles”
O(n) space complexity means the memory used grows linearly with input size. A vector is a common example because its size increases with n, but O(n) is not limited to vectors — any structure that stores n elements or grows with input is O(n) space.
We use O(1) instead of O(2), O(10), etc. because Big-O ignores constants and only measures how complexity grows with input size.*/
/*

This is why experienced programmers memorize something like:

n	Usually acceptable
10²	O(n³)
10³	O(n²)
10⁵	O(n log n), O(n)
10⁶	O(n)*/
/*
✅ Correct mental model (VERY IMPORTANT)

You should think like this:

Step 1: Find complexity from code
one loop → O(n)
two nested loops → O(n²)
divide in half → O(log n)
Step 2: Plug in constraint
replace n with max value (worst case)
Step 3: Estimate operations

Compare with ~10⁸ per second

📌 CLEAN NOTES (you can copy this)
✔ Time Complexity & Constraints Rule
Time complexity is determined only by the code structure, not by constraints.
Common complexities:
Single loop → O(n)
Nested loops → O(n²)
Halving each step → O(log n)
n log n → sorting, efficient algorithms
Rough speed estimate:
10⁸ operations ≈ 1 second (approximate)
How to check if solution will pass:
Find time complexity from code
Substitute maximum input size (constraint)
Estimate total operations
If operations > ~10⁸ → likely TLE
Example:
n ≤ 10⁵
O(n²) → (10⁵)² = 10¹⁰ → too slow → TLE
O(n log n) → ~10⁵ × 17 ≈ 1.7×10⁶ → safe
Important:
Constraints do NOT change time complexity
Constraints only tell whether an algorithm is fast enough*/