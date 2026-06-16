# Nim Game — LeetCode

> **Platform:** [LeetCode (292)](https://leetcode.com/problems/nim-game/)  
> **Difficulty:** 🟢 Easy  
> **Concept:** Basic P/N Positions

## Problem Statement

You are playing the following Nim Game with your friend:
- Initially, there is a heap of `n` stones on the table.
- You and your friend will alternate turns, and you go first.
- On each turn, the person whose turn it is will remove 1 to 3 stones from the heap.
- The one who removes the last stone is the winner.

Given `n`, the number of stones in the heap, return `true` if you can win the game assuming both you and your friend play optimally, otherwise return `false`.

## Approach

This is a classic take-away game that can be solved by analyzing P/N positions from the bottom up.

Since you can take 1, 2, or 3 stones:
- `n = 1, 2, 3` → You win by taking all stones (N-position 🟢).
- `n = 4` → No matter what you take (1, 2, or 3), you leave 3, 2, or 1 stones for your friend, who will then take the rest and win. So, 4 is a losing position (P-position 🔴).
- `n = 5, 6, 7` → You can take 1, 2, or 3 stones to leave exactly 4 stones for your friend. Since 4 is a P-position, you force your friend to lose, meaning you win (N-position 🟢).
- `n = 8` → Any move leaves 5, 6, or 7 stones (all N-positions), so your friend will win. (P-position 🔴).

### Pattern
The losing positions (P-positions) are all multiples of 4.
If `n` is a multiple of 4, you lose. Otherwise, you win.

## Complexity
- **Time:** O(1)
- **Space:** O(1)
