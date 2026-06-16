# 🌀 Nim Variations

## Core Concept

There are many well-known variations of Nim. Each comes with its own unique theorem or twist. You don't need Grundy for these if you know the theorem.

### Staircase Nim
Coins are placed on the steps of a staircase. A move consists of picking a step `i` and moving coins to step `i-1`. Coins on step 0 are removed.
- **Trick:** Treat the game as normal Nim played *only on the odd-indexed steps*.

### Wythoff's Game
Two piles of stones. A player can take any amount from one pile, OR the same amount from both piles.
- **Trick:** The losing positions are intimately tied to the **Golden Ratio** ($$\phi = \frac{1 + \sqrt{5}}{2}$$). The $$n$$-th losing position is `(floor(n * φ), floor(n * φ^2))`.

### Moore's Nim_k
You can remove stones from up to $$k$$ piles at the same time.
- **Trick:** Write pile sizes in binary. Add up each column separately. If every column sum is a multiple of $$k+1$$, it's a P-position.

### Lasker's Nim
You can remove stones from a pile, OR split a pile into two non-empty piles.
- **Trick:** Compute the first few Grundy numbers and find the pattern.

---

## Problems in this folder

| # | Problem | Platform | Difficulty | Key Insight |
|---|---------|----------|:---:|------------ |
