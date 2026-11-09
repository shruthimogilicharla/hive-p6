## Question: Guess the Problem - 1

### Given Problem

You are given two strings `A` and `B`.

Print the characters of string `B` after **removing all characters that are present in string A**.

### Solution in C

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        char a[5005], b[5005];
        int visited[26] = {0};

        scanf("%s %s", a, b);

        for(int i = 0; a[i] != '\0'; i++) {
            visited[a[i] - 'a'] = 1;
        }

        for(int i = 0; b[i] != '\0'; i++) {
            if(visited[b[i] - 'a'] == 0) {
                printf("%c", b[i]);
            }
        }

        printf("\n");
    }

    return 0;
}

### Explanation

1. Create an array `visited[26]` to mark characters present in string A.
2. Traverse string A and mark each character as `1`.
3. Traverse string B.
4. If a character is not present in A (`visited[b[i]-'a'] == 0`), print it.
5. Print a newline after each test case.

### Example Dry Run

**Input:**
```text
2
data structures
smart interviews
```

**Test Case 1:**

- A = `data`
- B = `structures`
- Characters present in A: d, a, t
- Remove d, a, t from B.

Remaining: `srucures`

**Test Case 2:**

- A = `smart`
- B = `interviews`
- Remove characters s, m, a, r, t from B.

Remaining: `ineview`

### Output
```text
srucures
ineview
```

### Time Complexity
**O(N + M)** per test case, where N and M are the lengths of A and B.

### Space Complexity
**O(1)** – We use a fixed-size array of 26 elements.

**Remember:** We remove characters from B that appear in A. We do not remove duplicate characters from B if they are not present in A.
