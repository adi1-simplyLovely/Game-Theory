# 🧩 Sum of Games

## Core Concept

When a game consists of **multiple independent subgames** (one move affects only one subgame):

```
G(combined) = G(game₁) ⊕ G(game₂) ⊕ ... ⊕ G(gameₙ)
```

### How to Identify Independence
- Moving in one subgame does NOT change any other subgame
- Each subgame has its own separate state

### Common Patterns
- Multiple coins on a board → each coin = independent subgame
- Multiple piles with custom rules → each pile = independent subgame
- Tree with separate branches → each branch can be independent

---

## Problems in this folder

| # | Problem | Platform | Difficulty | Key Insight |
|---|---------|----------|:---:|------------ |
