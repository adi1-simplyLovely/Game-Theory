# 🧮 Sprague-Grundy & mex

## Core Concept

The **Sprague-Grundy Theorem** generalizes Nim to ALL impartial games.

### mex (Minimum Excludant)
```
mex(S) = smallest non-negative integer NOT in set S

mex({0, 1, 2}) = 3
mex({0, 1, 3}) = 2
mex({1, 2})    = 0
mex({})        = 0
```

### Grundy Number
Every game state has a **Grundy number** (aka nimber):
```
G(state) = mex({ G(s) | s is reachable from state in one move })
```

- `G = 0` → P-position (Lose)
- `G ≠ 0` → N-position (Win)

### Key Insight
In standard Nim, `G(pile of size n) = n`. That's why XOR of pile sizes works!

For custom games (restricted moves), Grundy values differ — but the XOR principle still applies when combining independent subgames.

---

## Problems in this folder

| # | Problem | Platform | Difficulty | Key Insight |
|---|---------|----------|:---:|------------ |
