## Question: Implement Deque

### Given Problem
Implement a **DEQUE (Double Ended Queue)** using an array.

A deque allows us to:
- `push_front x` – Insert an element at the front.
- `push_back x` – Insert an element at the back.
- `pop_front` – Remove an element from the front.
- `pop_back` – Remove an element from the back.

If the deque is empty during a pop operation, print `Empty`.

### Solution in C

#include <stdio.h>
#include <string.h>

int main() {
    int deque[10005];
    int front = 5000, rear = 4999;

    int t, x;
    char op[20];

    scanf("%d", &t);

    while (t--) {
        scanf("%s", op);

        if (strcmp(op, "push_front") == 0) {
            scanf("%d", &x);
            front--;
            deque[front] = x;
        }
        else if (strcmp(op, "push_back") == 0) {
            scanf("%d", &x);
            rear++;
            deque[rear] = x;
        }
        else if (strcmp(op, "pop_front") == 0) {
            if (front > rear) {
                printf("Empty\n");
            }
            else {
                printf("%d\n", deque[front]);
                front++;
            }
        }
        else if (strcmp(op, "pop_back") == 0) {
            if (front > rear) {
                printf("Empty\n");
            }
            else {
                printf("%d\n", deque[rear]);
                rear--;
            }
        }
    }

    return 0;
}

### Explanation

1. **Array:** We use an array to store deque elements.
2. **Front and Rear:** Initially, `front = 5000` and `rear = 4999`, meaning the deque is empty.
3. **push_front:** Decrease `front` and insert the element.
4. **push_back:** Increase `rear` and insert the element.
5. **pop_front:** Print the front element and increase `front`.
6. **pop_back:** Print the rear element and decrease `rear`.
7. **Empty condition:** If `front > rear`, the deque is empty.

### Example Dry Run

Input:
```text
10
push_back 5
pop_front
pop_front
push_back 10
push_front -15
pop_back
push_back -10
push_back 20
pop_front
pop_front
```

| Operation | Deque | Output |
|---|---|---|
| push_back 5 | [5] | |
| pop_front | [] | 5 |
| pop_front | [] | Empty |
| push_back 10 | [10] | |
| push_front -15 | [-15, 10] | |
| pop_back | [-15] | 10 |
| push_back -10 | [-15, -10] | |
| push_back 20 | [-15, -10, 20] | |
| pop_front | [-10, 20] | -15 |
| pop_front | [20] | -10 |

### Output
```text
5
Empty
10
-15
-10
```

### Time Complexity
- Push Front: **O(1)**
- Push Back: **O(1)**
- Pop Front: **O(1)**
- Pop Back: **O(1)**

### Space Complexity
**O(T)** – We use an array to store the deque elements.

**Important:** This solution uses a simple array with space on both sides of the initial position, so it supports insertion and deletion at both ends without shifting elements.
