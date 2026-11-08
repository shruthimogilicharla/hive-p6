## Question: Z Pattern

### Given Problem
Print the letter **Z** using `*` for a given size N.

### Solution in C

#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);

    for (int k = 1; k <= t; k++)
    {
        scanf("%d", &n);

        printf("Case #%d:\n", k);

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == 1 || i == n || j == n - i + 1)
                    printf("*");
                else
                    printf(" ");
            }

            printf("\n");
        }
    }

    return 0;
}

### Explanation

1. Read the number of test cases `t`.
2. Read the size `n` for each test case.
3. Print the case number.
4. Use an outer loop to print rows.
5. Use an inner loop to print columns.
6. Print `*` when:
   - `i == 1` → First row.
   - `i == n` → Last row.
   - `j == n - i + 1` → Diagonal line from top-right to bottom-left.
7. Otherwise, print a space.
8. Move to the next line after each row.

### Example Dry Run

**Input:**
```text
1
5
```

**Pattern formation:**

| Row (i) | Star position |
|---|---|
| 1 | All columns |
| 2 | Column 4 |
| 3 | Column 3 |
| 4 | Column 2 |
| 5 | All columns |

**Output:**
```text
Case #1:
*****
   *
  *
 *
*****
```

### Time Complexity

O(N²) – Nested loops check every position in the pattern.

### Space Complexity

O(1) – No extra arrays or data structures are used.
