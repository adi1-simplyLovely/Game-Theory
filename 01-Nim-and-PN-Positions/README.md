# 🔴🟢 Nim & P/N Positions

## Core Concept

In a **combinatorial game** (two players, perfect info, no chance, finite), every position is either:

| Position | Meaning | For Current Player |
|----------|---------|-------------------|
| **P-position** | **P**revious player wins | You **LOSE** 😰 |
| **N-position** | **N**ext player wins | You **WIN** 💪 |

## Three Golden Rules

```
Rule 1: Terminal state (no moves possible)  →  P-position
Rule 2: Can move to at least one P-position →  N-position  
Rule 3: Every move goes to N-position       →  P-position
```

## Bouton's Theorem (Nim)

In the game of **Nim** (n piles, take any amount from one pile, last stone wins):

```
XOR-sum = a₁ ⊕ a₂ ⊕ ... ⊕ aₙ

XOR-sum = 0   →  P-position (current player LOSES)
XOR-sum ≠ 0   →  N-position (current player WINS)
```

### Why XOR works:
- **Rule 1 ✅**: All piles zero → XOR = 0 → P-position
- **Rule 2 ✅**: XOR ≠ 0 → can always find a move to make XOR = 0
- **Rule 3 ✅**: XOR = 0 → any move makes XOR ≠ 0

## Winning Strategy

When in N-position (XOR ≠ 0):
1. Compute `X = XOR of all piles`
2. Find pile `aᵢ` where `aᵢ ⊕ X < aᵢ`
3. Reduce that pile to `aᵢ ⊕ X`
4. New XOR = 0 → opponent is now in P-position!

---

## Problems in this folder

| # | Problem | Platform | Difficulty | Key Insight |
|---|---------|----------|:---:|------------ |
| 1 | [Nim Game I](./Nim-Game-I/) | CSES | 🟢 | Direct XOR of piles |
