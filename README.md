# Second-Largest Unique Number

## Nexura Tech Team Recruitment — Round 3

### Problem Statement

Given an array/list of numbers, find the **second-largest unique number** in the array.

The solution should **not simply sort the entire array** to find the answer.

For example, given:

```text
10 5 8 10 3 8 7 5
```

The unique numbers are:

```text
10 5 8 3 7
```

The largest unique number is `10`, so the **second-largest unique number is `8`**.

### Requirements

* Accept an array of numbers as input.
* Find the second-largest **unique** number.
* Handle duplicate values correctly.
* Do not sort the entire array.
* Handle the case where fewer than two unique numbers exist.

### Approach

The program traverses the array once while maintaining two values:

* `largest` — the largest unique number found so far.
* `secondLargest` — the second-largest unique number found so far.

During the traversal, duplicate values are ignored and the two values are updated whenever a larger number is encountered.

### Algorithm

1. Initialize `largest` and `secondLargest`.
2. Traverse every element of the array.
3. Ignore values that are already equal to `largest` or `secondLargest`.
4. If the current number is greater than `largest`, update both values.
5. Otherwise, if it is greater than `secondLargest`, update `secondLargest`.
6. After traversal, display the second-largest unique number.
7. If there are fewer than two unique numbers, display an appropriate message.

### Example

**Input**

```text
Enter number of elements: 8
Enter the elements: 10 5 8 10 3 8 7 5
```

**Output**

```text
Second-largest unique number: 8
```

### Complexity

* **Time Complexity:** O(n)
* **Extra Space:** O(1)

The array is traversed once and the complete array is not sorted.

### Challenges Faced

* Handling duplicate values correctly.
* Finding the second-largest value without sorting.
* Updating `largest` and `secondLargest` in the correct order.
* Handling cases with fewer than two unique numbers.
* Testing the program with different inputs and edge cases.

### Language

**C++**

### Task

Nexura Tech Team Recruitment — Round 3
**Language Task 2 — Second-Largest Unique Number**

