# 🎮 Game Theory — Solutions & Concepts

A structured collection of **Combinatorial Game Theory** problems, solved and explained concept-by-concept.

> Every solution includes the underlying theory, intuition, and complexity analysis — not just code.

---

## 📚 Concept Map

| # | Concept | Key Idea | Folder |
|---|---------|----------|--------|
| 1 | [P/N Positions & Nim](./01-Nim-and-PN-Positions/) | XOR of pile sizes. XOR=0 → Lose, XOR≠0 → Win | `01-Nim-and-PN-Positions/` |
| 2 | [Sprague-Grundy & mex](./02-Sprague-Grundy/) | `G(s) = mex({G(children)})`. Every game → Nim | `02-Sprague-Grundy/` |
| 3 | [Sum of Games](./03-Sum-of-Games/) | Independent subgames → XOR their Grundy values | `03-Sum-of-Games/` |
| 4 | [Games on Graphs](./04-Graph-Games/) | Grundy via DFS on DAG, Reverse BFS for P/N | `04-Graph-Games/` |
| 5 | [Misère Nim](./05-Misere/) | Last move = lose. Same XOR, flip when all piles ≤ 1 | `05-Misere/` |
| 6 | [Pattern & Periodicity](./06-Pattern-Finding/) | Compute Grundy → find period → O(1) answer | `06-Pattern-Finding/` |
| 7 | [Nim Variations](./07-Nim-Variations/) | Staircase, Wythoff, Moore's, Lasker's, Fibonacci | `07-Nim-Variations/` |
| 8 | [Advanced](./08-Advanced/) | Coin-turning, Hackenbush, Partizan games | `08-Advanced/` |

---

## 🧠 Quick Theory Reference

### Three Golden Rules
```
1. Terminal state (no moves) → P-position (current player loses)
2. Can reach at least one P-position → N-position (current player wins)
3. Every move leads to N-position → P-position (current player loses)
```

### Bouton's Theorem (Nim)
```
XOR of all pile sizes = 0  →  P-position (Lose)
XOR of all pile sizes ≠ 0  →  N-position (Win)
```

### Sprague-Grundy
```
G(state) = mex({G(reachable states)})
Combined game: G₁ ⊕ G₂ ⊕ ... ⊕ Gₙ
```

---

## 📊 Progress Tracker

### Stage 1: Foundation
- [x] Nim Game I — CSES
- [ ] Nim Game — LeetCode
- [ ] Game of Stones — HackerRank
- [ ] A Game of Nim — HackerRank
- [ ] Tower Breakers — HackerRank

### Stage 2: Grundy & mex
- [ ] S-NIM — Kattis
- [ ] Grundy's Game — CSES
- [ ] Tower Breakers, Revisited! — HackerRank
- [ ] Tower Breakers, Again! — HackerRank
- [ ] Dividing Game — HackerRank

### Stage 3: Combining Games
- [ ] Chessboard Game, Again! — HackerRank
- [ ] Staircase Nim — CSES
- [ ] Game on Graph — CSES

### Stage 4: Hard
- [ ] Arpa & Game — Codeforces
- [ ] Strange Nim — AtCoder
- [ ] Fibonacci Nim — CodeChef

---

## 🛠️ How to Use

Each problem folder contains:
```
Problem-Name/
├── README.md       ← Concept explanation, approach, complexity
├── solution.cpp    ← Clean, commented C++ solution
└── input.txt       ← Sample test cases (optional)
```

## 📖 Learning Resources

- [Winning Ways for Your Mathematical Plays](https://en.wikipedia.org/wiki/Winning_Ways_for_your_Mathematical_Plays) — The bible of combinatorial game theory
- [CP-Algorithms: Game Theory](https://cp-algorithms.com/game_theory/) — Concise reference
- [CSES Problem Set](https://cses.fi/problemset/) — Best practice problems
