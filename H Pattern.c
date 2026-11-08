
## Question: H Pattern

### Given Problem
Given N (height) and M (width), print the letter **H** using `*`.

### Solution in C

#include <stdio.h>

int main()
{
    int t, n, m;
    scanf("%d", &t);

    for (int k = 1; k <= t; k++)
    {
        scanf("%d %d", &n, &m);

        printf("Case #%d:\n", k);

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (i == (n + 1) / 2 || j == 1 || j == m)
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
2. Read height `n` and width `m` for each test case.
3. Print the case number.
4. Use an outer loop to print each row.
5. Use an inner loop to print each column.
6. Print `*` when:
   - `j == 1` (first column).
   - `j == m` (last column).
   - `i == (n + 1) / 2` (middle row).
7. Otherwise, print a space.
8. Move to the next line after each row.

### Example Dry Run

**Input:**
```text
3
3 3
6 5
5 3
```

**For N = 5, M = 3:**

| Row (i) | First column | Middle row | Last column |
|---|---|---|---|
| 1 | * | | * |
| 2 | * | | * |
| 3 | * | * | * |
| 4 | * | | * |
| 5 | * | | * |

**Output:**
```text
Case #1:
* *
***
* *

Case #2:
*   *
*   *
*****
*   *
*   *
*   *

Case #3:
* *
* *
***
* *
* *
```

### Time Complexity

O(N × M) – Each row and column is checked once.

### Space Complexity

O(1) – No extra arrays or data structures are used.
