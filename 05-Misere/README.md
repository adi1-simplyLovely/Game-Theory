# 🔄 Misère Nim

## Core Concept

**Standard Nim:** Last stone taker **WINS**  
**Misère Nim:** Last stone taker **LOSES**

### Rule

```cpp
if (all piles <= 1) {
    // Trivial: odd number of piles with 1 = you take last = LOSE
    xorSum == 0 ? "first wins" : "second wins"   // FLIPPED!
} else {
    // Same as normal Nim
    xorSum != 0 ? "first wins" : "second wins"
}
```

### Intuition
When at least one pile > 1, play like normal Nim. At the very end, adjust so opponent takes the last stone.

---

## Problems in this folder

| # | Problem | Platform | Difficulty | Key Insight |
|---|---------|----------|:---:|------------ |
