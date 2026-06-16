# Nim Game II — CSES

> **Platform:** [CSES (1098)](https://cses.fi/problemset/task/1098/)  
> **Difficulty:** 🟢 Easy  
> **Concept:** Sprague-Grundy Theorem

## Problem Statement

There are `n` heaps of sticks. Two players move alternately. On each move, a player chooses a non-empty heap and removes **1, 2, or 3** sticks. The player who removes the last stick wins the game. Who wins with optimal play?

## Approach

This is a combination of the standard **Nim Game** and a **Subtraction Game**. Because the move set is restricted (you can't take any amount you want, only 1, 2, or 3), we cannot just XOR the pile sizes directly. 

Instead, we must use the **Sprague-Grundy Theorem**.
1. Treat each pile as an **independent game**.
2. Find the **Grundy Number (mex)** for each pile size.
3. Combine the games by taking the **XOR-sum** of their Grundy Numbers.

### Calculating Grundy Numbers (`mex`)

Let's find the Grundy number `G(x)` for a single pile of size `x` where valid moves are removing 1, 2, or 3 sticks:

- `G(0) = mex({}) = 0`
- `G(1) = mex({ G(0) }) = mex({0}) = 1`
- `G(2) = mex({ G(1), G(0) }) = mex({1, 0}) = 2`
- `G(3) = mex({ G(2), G(1), G(0) }) = mex({2, 1, 0}) = 3`
- `G(4) = mex({ G(3), G(2), G(1) }) = mex({3, 2, 1}) = 0`
- `G(5) = mex({ G(4), G(3), G(2) }) = mex({0, 3, 2}) = 1`

**Pattern:** The sequence of Grundy numbers is `0, 1, 2, 3, 0, 1, 2, 3...`
This means `G(x) = x % 4`.

### Combining the Games

To find the state of the entire board:
```cpp
XOR-sum = G(x₁) ⊕ G(x₂) ⊕ ... ⊕ G(xₙ)
XOR-sum = (x₁ % 4) ⊕ (x₂ % 4) ⊕ ... ⊕ (xₙ % 4)
```

- If `XOR-sum == 0`, it's a **P-position** (Second player wins).
- If `XOR-sum != 0`, it's an **N-position** (First player wins).

## Complexity
- **Time:** O(n) per testcase.
- **Space:** O(1).
