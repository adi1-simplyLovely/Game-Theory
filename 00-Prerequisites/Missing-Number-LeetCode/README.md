# Missing Number — LeetCode

> **Platform:** [LeetCode (268)](https://leetcode.com/problems/missing-number/)  
> **Difficulty:** 🟢 Easy  
> **Concept:** XOR Self-Cancellation & Introduction to `mex`

## Problem Statement

Given an array `nums` containing `n` distinct numbers in the range `[0, n]`, return the only number in the range that is missing from the array.

## The Game Theory Connection (`mex`)

Finding the missing number in a continuous range from `0` to `n` is the **exact definition of `mex` (Minimum Excludant)**, which is the foundational concept of the Sprague-Grundy theorem in Game Theory.

`mex(S)` = The smallest non-negative integer that is NOT in set `S`.

If `nums = [3, 0, 1]`, then `mex({3, 0, 1}) = 2`.

## Approach (The XOR Magic)

To find the missing number (or `mex`) without using extra space or sorting, we use the self-canceling property of XOR:
`X ⊕ X = 0`

If we take the XOR of all expected numbers from `0` to `n`, and then XOR that result with all the actual elements in the array, every number that is present will cancel itself out. The only number left will be the one that is missing!

```text
Expected: 0 ⊕ 1 ⊕ 2 ⊕ 3
Actual:   0 ⊕ 1 ⊕   ⊕ 3
--------------------------
Result:   0 ⊕ 0 ⊕ 2 ⊕ 0 = 2
```

## Complexity
- **Time:** O(N)
- **Space:** O(1)
