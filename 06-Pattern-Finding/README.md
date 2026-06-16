# 📐 Pattern Finding & Periodicity

## Core Concept

When constraints are large (n ≤ 10⁹), you can't compute Grundy for every state. Instead:

1. **Compute** Grundy for the first ~100-200 states
2. **Find** the repeating period in the sequence  
3. **Use** modulo to answer in O(1)

### Sprague-Grundy Periodicity Theorem
> For subtraction games (fixed move set), Grundy values are **eventually periodic** — guaranteed!

### Example
```
Subtraction set = {2, 5}
Grundy: 0 0 1 1 0 2 1 | 0 0 1 1 0 2 1 | ...
Period = 7
G(n) = precomputed[n % 7]  → O(1)!
```

---

## Problems in this folder

| # | Problem | Platform | Difficulty | Key Insight |
|---|---------|----------|:---:|------------ |
