
/*
Check voter eligibility with three rules: must be 18+ AND a citizen AND not disqualified. Given age A, citizenship C (1/0), and disqualification D (1/0), print an eligibility result with a specific reason for rejection. Practice combining AND with specific failure messages.

Input

Three integers: age A, citizen flag C (1 = citizen, 0 = not) and disqualified flag D (1 = disqualified, 0 = not).

Output

Eligible, or 'Not Eligible - ' followed by every failed rule, comma-separated, in the order: Too young, Not a citizen, Disqualified.

Constraints

0 ≤ A ≤ 150
C, D ∈ {0, 1}*/