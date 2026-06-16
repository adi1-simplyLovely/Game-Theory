# 🕸️ Games on Graphs

## Core Concept

Game states form a **directed acyclic graph (DAG)**. A token sits on a node — players move it along edges. Can't move = lose.

### Two Approaches

**1. Grundy via DFS** — When you need Grundy values (for combining games)
```
G(node) = mex({ G(child) for all children })
```

**2. Reverse BFS** — When you only need P/N (faster, O(n+m))
```
Terminal nodes → P
Any parent that can reach P → N  
Parent where ALL children are N → P
```

---

## Problems in this folder

| # | Problem | Platform | Difficulty | Key Insight |
|---|---------|----------|:---:|------------ |
