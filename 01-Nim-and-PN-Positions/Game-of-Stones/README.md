# Game of Stones — HackerRank

> **Platform:** [HackerRank](https://www.hackerrank.com/challenges/game-of-stones-1)  
> **Difficulty:** 🟢 Easy  
> **Concept:** Bottom-Up P/N Positions & Periodicity

## Problem Statement

Two players (First and Second) are playing a game with `n` stones. Players move in alternating turns. On each turn, a player can remove either **2, 3, or 5** stones from the game board. The player who is unable to make a move loses. Given `n`, determine the winner of the game if both play optimally.

## Approach (P/N Analysis)

We can solve this by determining the **P-positions** (Losing) and **N-positions** (Winning) from the bottom up.

The rules are simple:
1. If a state has *no valid moves*, it's a **P-position**.
2. If from a state you can reach *at least one* **P-position**, the current state is an **N-position**.
3. If from a state *all* possible moves lead to **N-positions**, the current state is a **P-position**.

### State Trace
- `n = 0, 1`: No valid moves possible. **P-position (Second Wins)**
- `n = 2, 3, 4, 5, 6`: We can always remove 2, 3, or 5 stones to land on `0` or `1` (which are P-positions). Therefore, these are all **N-positions (First Wins)**.
- `n = 7`: We can remove 2, 3, or 5 stones, leaving 5, 4, or 2 stones. All of these are N-positions! Since all moves lead to an N-position, 7 is a **P-position (Second Wins)**.
- `n = 8`: We can leave 6, 5, or 3 stones (all N-positions). Thus, 8 is a **P-position (Second Wins)**.
- `n = 9`: We can remove 2 stones to leave 7 (a P-position). Thus, 9 is an **N-position (First Wins)**.

### The Pattern
The sequence of P/N positions repeats every **7** stones:
`P, P, N, N, N, N, N`

| n % 7 | State | Winner |
|-------|-------|--------|
| 0 | P | Second |
| 1 | P | Second |
| 2, 3, 4, 5, 6 | N | First |

## Code Logic
```cpp
if (n % 7 < 2) {
    return "Second";
} else {
    return "First";
}
```

## Complexity
- **Time:** O(1) per test case using the periodic formula.
- **Space:** O(1).
