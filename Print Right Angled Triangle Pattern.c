Question: Print Right Angled Triangle Pattern
Given Problem
Print a mirror image of a right-angled triangle using *.
Solution in C
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
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
            }

            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }

            printf("\n");
        }
    }

    return 0;
}
Explanation
1. Read the number of test cases t.
2. Read the size n for each test case.
3. Print the case number using printf("Case #%d:\n", k);.
4. Use an outer loop to print each row.
5. Print n-i spaces before the stars.
6. Print i stars in each row.
7. Move to the next line after printing each row.
Example Dry Run
Input:
1
5

Pattern formation:
Row (i)	Spaces (n-i)	Stars (i)
1	4	1
2	3	2
3	2	3
4	1	4
5	0	5


Output:
Case #1:
    *
   **
  ***
 ****
*****

Time Complexity
O(N²) – Nested loops are used to print spaces and stars for each row.
Space Complexity
O(1) – No extra arrays or data structures are used.
