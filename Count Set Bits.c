## Question: Count Set Bits

### Given Problem
Given a number N, find the number of bits that are set to `1` in its binary representation.

### Solution in C

#include <stdio.h>

int main()
{
    int t;
    long long n;

    scanf("%d", &t);

    while (t--)
    {
        scanf("%lld", &n);

        int count = 0;

        while (n > 0)
        {
            if (n % 2 == 1)
            {
                count++;
            }

            n = n / 2;
        }

        printf("%d\n", count);
    }

    return 0;
}

### Explanation

1. Read the number of test cases `t`.
2. Read the number `n`.
3. Initialize `count = 0`.
4. Divide the number by 2 repeatedly.
5. Check the remainder using `n % 2`.
6. If the remainder is 1, increment the count.
7. Update `n = n / 2`.
8. Repeat until `n` becomes 0.
9. Print the total count.

### Example Dry Run

**Input:**
```text
1
15
```

**Conversion:**

Binary representation of 15 = `1111`

| Number | Remainder | Count |
|---|---|---|
| 15 | 1 | 1 |
| 7 | 1 | 2 |
| 3 | 1 | 3 |
| 1 | 1 | 4 |

Therefore, the total number of set bits = **4**.

### Sample Input
```text
3
4
15
10
```

### Sample Output
```text
1
4
2
```

### Time Complexity

O(log₂ N) – The number is divided by 2 in every iteration.

### Space Complexity

O(1) – Only a few variables are used.

**Important Logic:**
- `n % 2` gives the last binary bit.
- `n / 2` removes the last binary bit.
- Whenever the remainder is 1, increase the count.
