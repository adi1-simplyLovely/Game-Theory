# 🚀 Advanced Game Theory

## Core Concept

This section contains games that go beyond standard impartial games and the Sprague-Grundy theorem.

### Coin-Turning Games
A line of coins (Heads or Tails). Players turn over 1, 2, or more coins based on specific rules. The crucial rule is usually that the rightmost flipped coin must go from Heads to Tails.
- **Insight:** The Grundy value often relates directly to the binary representation of the position or uses "Odious" and "Evil" numbers.

### Green Hackenbush
A graph drawn with green edges. Players take turns removing an edge. Any edges no longer connected to the "ground" fall away and are removed.
- **Insight:** Use the **Colon Principle** to evaluate complex trees and graphs by replacing them with equivalent single stalks.

### Partizan Games
Games where the two players (Left and Right) have **different** sets of allowed moves from the same state.
- **Insight:** Sprague-Grundy doesn't apply! We use **Surreal Numbers** (fractional values like `1/2`, `3/4`) to evaluate states.

### Nim Multiplication
Required for 2D games like "Tartan Games". Uses the Nim-product (⊗) where non-negative integers form a field.
- **Insight:** Very advanced topic, mostly for research or the hardest CP problems.

---

## Problems in this folder

| # | Problem | Platform | Difficulty | Key Insight |
|---|---------|----------|:---:|------------ |
