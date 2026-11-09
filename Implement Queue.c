## Question: Implement Queue

### Given Problem
Implement the Queue data structure and perform Enqueue and Dequeue operations without using any inbuilt queue functions or libraries.

### Solution in C

#include <stdio.h>

int main()
{
    int t, x;
    int queue[10000];
    int front = 0, rear = -1;
    char op[20];

    scanf("%d", &t);

    while (t--)
    {
        scanf("%s", op);

        if (op[0] == 'E')
        {
            scanf("%d", &x);
            rear++;
            queue[rear] = x;
        }
        else
        {
            if (front > rear)
            {
                printf("Empty\n");
            }
            else
            {
                printf("%d\n", queue[front]);
                front++;
            }
        }
    }

    return 0;
}

### Explanation

1. Read the number of operations `t`.
2. Create an array `queue[10000]` to store elements.
3. Initialize:
   - `front = 0` – Points to the first element.
   - `rear = -1` – Indicates that the queue is empty.
4. Read each operation.
5. If the operation is `Enqueue`:
   - Read the element `x`.
   - Increment `rear`.
   - Insert the element at `queue[rear]`.
6. If the operation is `Dequeue`:
   - Check whether `front > rear`.
   - If true, print `Empty`.
   - Otherwise, print `queue[front]` and increment `front`.

### Example Dry Run

**Input:**
```text
8
Enqueue 5
Dequeue
Dequeue
Enqueue 10
Enqueue -15
Dequeue
Enqueue -10
Dequeue
```

**Queue Operations:**

| Operation | Queue | Output |
|---|---|---|
| Enqueue 5 | 5 | |
| Dequeue | Empty | 5 |
| Dequeue | Empty | Empty |
| Enqueue 10 | 10 | |
| Enqueue -15 | 10, -15 | |
| Dequeue | -15 | 10 |
| Enqueue -10 | -15, -10 | |
| Dequeue | -10 | -15 |

### Sample Output
```text
5
Empty
10
-15
```

### Important Concepts

- **Enqueue:** Adds an element at the rear.
- **Dequeue:** Removes an element from the front.
- **FIFO:** First In, First Out.
- `front` points to the first element.
- `rear` points to the last element.

### Time Complexity

- Enqueue: O(1)
- Dequeue: O(1)

### Space Complexity

O(T) – Array stores the queue elements.

**Remember:**
- Stack → LIFO (Last In, First Out).
- Queue → FIFO (First In, First Out).
