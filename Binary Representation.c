## Question: Binary Representation

### Given Problem
Given a positive integer N, print its binary representation.

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

        if (n == 0)
        {
            printf("0\n");
            continue;
        }

        int a[100];
        int i = 0;

        while (n > 0)
        {
            a[i] = n % 2;
            n = n / 2;
            i++;
        }

        for (int j = i - 1; j >= 0; j--)
        {
            printf("%d", a[j]);
        }

        printf("\n");
    }

    return 0;
}

### Explanation

1. Read the number of test cases `t`.
2. Read the integer `n`.
3. If `n == 0`, directly print `0`.
4. Create an array to store binary digits.
5. Divide the number by 2 repeatedly.
6. Store the remainder (`n % 2`) in the array.
7. Update the number using `n = n / 2`.
8. Repeat until `n` becomes 0.
9. Print the stored binary digits in reverse order.

### Example Dry Run

**Input:**
```text
1
10
```

**Conversion:**

| Number | Remainder |
|---|---|
| 10 / 2 | 0 |
| 5 / 2 | 1 |
| 2 / 2 | 0 |
| 1 / 2 | 1 |

Reading remainders from bottom to top:

**1010**

### Sample Input
```text
5
10
15
7
1
120
```

### Sample Output
```text
1010
1111
111
1
1111000
```

### Time Complexity

O(log₂ N) – The number is divided by 2 in every iteration.

### Space Complexity

O(log₂ N) – An array stores the binary digits.

**Important:** We print the array in reverse because binary remainders are obtained from right to left.
