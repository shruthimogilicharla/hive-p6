## Question: Find Excel Column Number

### Given Problem
Given a column title as it appears in a standard Excel sheet, find its corresponding column number.

### Solution in C

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    char s[11];

    scanf("%d", &t);

    while (t--)
    {
        scanf("%s", s);

        long long num = 0;

        for (int i = 0; s[i] != '\0'; i++)
        {
            num = num * 26 + (s[i] - 'A' + 1);
        }

        printf("%lld\n", num);
    }

    return 0;
}

### Explanation

1. Read the number of test cases `t`.
2. Read the Excel column name as a string.
3. Initialize `num = 0`.
4. Traverse each character in the string.
5. Convert the character into its corresponding number:
   - A = 1
   - B = 2
   - ...
   - Z = 26
6. Multiply the previous number by 26 and add the current character value.
7. Print the final column number.

### Example Dry Run

**Input:**
```text
5
A
Z
AA
AB
ABC
```

**For ABC:**

| Character | Calculation | Result |
|---|---|---:|
| A | 0 × 26 + 1 | 1 |
| B | 1 × 26 + 2 | 28 |
| C | 28 × 26 + 3 | 731 |

Therefore, **ABC = 731**.

**Output:**
```text
1
26
27
28
731
```

### Important Logic

Excel column names follow a base-26 system:

- A = 1
- Z = 26
- AA = 27
- AB = 28
- AZ = 52
- BA = 53

### Time Complexity

O(N) – Each character in the string is visited once.

### Space Complexity

O(1) – Only a few variables are used, excluding the input string.
