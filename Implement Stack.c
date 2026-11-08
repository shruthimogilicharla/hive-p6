## Question: Implement Stack

### Given Problem
Implement the Stack data structure and perform push and pop operations without using any inbuilt stack functions or libraries.

### Solution in C

#include <stdio.h>

int main()
{
    int t, x;
    int stack[10000];
    int top = -1;
    char op[10];

    scanf("%d", &t);

    while (t--)
    {
        scanf("%s", op);

        if (op[1] == 'u')
        {
            scanf("%d", &x);
            top++;
            stack[top] = x;
        }
        else
        {
            if (top == -1)
            {
                printf("Empty\n");
            }
            else
            {
                printf("%d\n", stack[top]);
                top--;
            }
        }
    }

    return 0;
}

### Explanation

1. Read the number of operations `t`.
2. Create an array `stack[10000]` to store elements.
3. Initialize `top = -1`, which indicates that the stack is empty.
4. Read each operation.
5. If the operation is `push`:
   - Read the element `x`.
   - Increment `top`.
   - Insert the element into the stack.
6. If the operation is `pop`:
   - Check whether `top == -1`.
   - If true, print `Empty`.
   - Otherwise, print `stack[top]` and decrement `top`.

### Example Dry Run

**Input:**
```text
8
push 5
pop
pop
push 10
push -15
pop
push -10
pop
```

**Stack Operations:**

| Operation | Stack | Output |
|---|---|---|
| push 5 | 5 | |
| pop | Empty | 5 |
| pop | Empty | Empty |
| push 10 | 10 | |
| push -15 | 10, -15 | |
| pop | 10 | -15 |
| push -10 | 10, -10 | |
| pop | 10 | -10 |

**Output:**
```text
5
Empty
-15
-10
```

### Important Concepts

- **Push:** Adds an element to the top of the stack.
- **Pop:** Removes the top element.
- **LIFO:** Last In, First Out.
- `top = -1` means the stack is empty.

### Time Complexity

- Push: O(1)
- Pop: O(1)

### Space Complexity

O(T) – Array stores up to T elements.
