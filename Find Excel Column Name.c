## Question: Find Excel Column Name

### Given Problem
Given a positive integer N representing an Excel column number, find its corresponding column title.

### Solution in C

#include <stdio.h>

void excelColumn(long long n)
{
    char result[100];
    int i = 0;

    while (n > 0)
    {
        n--;

        int rem = n % 26;
        result[i] = 'A' + rem;

        i++;
        n = n / 26;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", result[j]);
    }

    printf("\n");
}

int main()
{
    int t;
    long long n;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%lld", &n);
        excelColumn(n);
    }

    return 0;
}

### Explanation

1. Read the number of test cases `t`.
2. Read the column number `n`.
3. Create a character array to store the Excel column name.
4. Subtract 1 from `n` because Excel columns start from 1, not 0.
5. Find the remainder using `n % 26`.
6. Convert the remainder into a character from `A` to `Z`.
7. Divide `n` by 26 and repeat until `n` becomes 0.
8. Print the stored characters in reverse order.

### Example Dry Run

**Input:**
```text
4
1
26
27
28
```

**Conversion:**

| N | Calculation | Excel Column |
|---|---|---|
| 1 | 1 → A | A |
| 26 | 26 → Z | Z |
| 27 | 27 → AA | AA |
| 28 | 28 → AB | AB |

**Output:**
```text
A
Z
AA
AB
```

### Important Logic

Excel columns work like this:

- 1 → A
- 2 → B
- 26 → Z
- 27 → AA
- 28 → AB
- 52 → AZ
- 53 → BA

**Why `n--`?**

Excel uses 1-based numbering, whereas remainders work with 0-based numbering (0 to 25). Subtracting 1 gives the correct alphabet index.

### Time Complexity

O(log₂₆ N) – The number is divided by 26 in each iteration.

### Space Complexity

O(log₂₆ N) – The character array stores the column name.
