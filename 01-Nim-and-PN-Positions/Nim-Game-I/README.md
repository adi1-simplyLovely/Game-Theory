# Nim Game I — CSES

> **Platform:** [CSES](https://cses.fi/problemset/task/1730)  
> **Difficulty:** 🟢 Easy  
> **Concept:** Bouton's Theorem (XOR-sum)

## Problem Statement

There are `n` piles of sticks. Two players take turns — on each turn, a player picks a pile and removes any number of sticks from it. The player who removes the last stick wins. Who wins with optimal play?

## Approach

This is **standard Nim**. By Bouton's Theorem:

```
XOR all pile sizes.
XOR ≠ 0  →  First player wins
XOR = 0  →  Second player wins
```

### Why?

XOR = 0 means every bit position has an **even count** of 1s across all piles — a perfectly balanced state.

- If balanced (XOR=0): any move **breaks** the balance → opponent gets an unbalanced state
- If unbalanced (XOR≠0): you can always **restore** balance → force opponent into balanced state
- Terminal state [0,0,...,0] is balanced (XOR=0) → whoever's turn it is loses

This cycle continues until the terminal state, which will always be the **losing player's turn**.

## Complexity

- **Time:** O(n) per test case — just XOR all values
- **Space:** O(1)

## Example Trace

```
Piles: [3, 4, 5]

3 = 011
4 = 100  
5 = 101
XOR= 010 = 2 ≠ 0  →  First player wins!

Winning move: Pile 1 → reduce 3 to (3 ⊕ 2) = 1
New piles: [1, 4, 5] → XOR = 1⊕4⊕5 = 0 → opponent in P-position!
```
