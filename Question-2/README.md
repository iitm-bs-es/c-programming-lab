# 2D Matrix Row-and-Column Dominant Cells

## Project Overview

In matrix processing, it is often useful to identify elements that are significant with respect to both their row and their column.

In this lab, students will implement a C program that reads a matrix from a file, identifies all **row-and-column dominant cells**, and writes the results into an output file.

A cell is called a **row-and-column dominant cell** if its value is **strictly greater than every other value in its row and strictly greater than every other value in its column**.

Students will practice:

- File input/output in C
- Two-dimensional arrays
- Nested loops
- Functions
- Traversing rows and columns
- Comparing an element against other elements in the same row and column
- Handling matrix boundary cases
- Formatted output

---

## Problem Statement

Given a matrix of size `N x M`, determine every cell that is strictly greater than all other elements in:

1. its row, and
2. its column.

For a cell `A[i][j]`, it is a dominant cell if:

```text
A[i][j] > A[i][k]    for every k != j
```

and

```text
A[i][j] > A[k][j]    for every k != i
```

In other words, the cell must be the **unique maximum of its row** and the **unique maximum of its column**.

### Important

Equality is not sufficient.

For example:

```text
5  9  9
2  4  1
```

Neither `(0,1)` nor `(0,2)` is dominant because `9` is not strictly greater than the other `9` in its row.

---

## Example

Consider:

```text
3 3
4 2 7
3 9 5
8 1 6
```

Check `(1,1) -> 9`:

Row 1:

```text
3 9 5
```

`9` is strictly greater than `3` and `5`.

Column 1:

```text
2
9
1
```

`9` is strictly greater than `2` and `1`.

Therefore:

```text
(1, 1) -> 9
```

is a dominant cell.

Check `(2,0) -> 8`:

Row 2:

```text
8 1 6
```

`8` is strictly greater than `1` and `6`.

Column 0:

```text
4
3
8
```

`8` is strictly greater than `4` and `3`.

Therefore:

```text
(2, 0) -> 8
```

is also a dominant cell.

---

## Input File Format (`matrix.txt`)

```text
N M
row_1_values
row_2_values
...
row_N_values
```

Where:

- `N` = number of rows
- `M` = number of columns

Matrix values are integers from `0` to `99`.

### Example Input

```text
3 3
4 2 7
3 9 5
8 1 6
```

---

## Output File Format (`output.txt`)

```text
Dominant cells:
(1, 1) -> 9
(2, 0) -> 8
```

Coordinates are **zero-based**, so the first row and first column are `(0, 0)`.

---

## Student Tasks

### Task 1: Read Matrix from File

Implement:

```c
readMatrix()
```

This function must:

- Read `N` and `M`
- Read all matrix elements into the two-dimensional array

---

### Task 2: Check Whether a Cell Is Dominant

Implement:

```c
isDominant()
```

The function receives:

```c
A, N, M, i, j
```

and must return:

- `1` if `A[i][j]` is strictly greater than every other value in its row and column
- `0` otherwise

You should:

1. Compare `A[i][j]` with every other element in row `i`.
2. Compare `A[i][j]` with every other element in column `j`.
3. Return `0` as soon as a value greater than or equal to the current value is found.
4. Return `1` if no such value exists.

You do **not** need to compare the cell with itself.

---

### Task 3: Write Dominant Cells to File

Implement:

```c
writeDominant()
```

This function must:

- Traverse every cell in the matrix.
- Call `isDominant()` for each cell.
- Write every dominant cell in the following format:

```text
(i, j) -> value
```

If there are no dominant cells, write:

```text
No dominant cells found.
```

---

## Recommended Algorithm

For every cell `(i, j)`:

### Step 1

Store its value:

```text
current = A[i][j]
```

### Step 2

Check the rest of its row.

Skip the current column `j`.

If any value is greater than or equal to `current`, the cell is not dominant.

### Step 3

Check the rest of its column.

Skip the current row `i`.

If any value is greater than or equal to `current`, the cell is not dominant.

### Step 4

If both checks succeed, the cell is dominant.

---

## Edge Cases to Consider

### 1. Single element matrix

```text
1 1
42
```

Output:

```text
Dominant cells:
(0, 0) -> 42
```

### 2. One-row matrix

```text
1 4
2 8 5 3
```

Output:

```text
Dominant cells:
(0, 1) -> 8
```

### 3. One-column matrix

```text
4 1
2
8
5
3
```

Output:

```text
Dominant cells:
(1, 0) -> 8
```

### 4. Duplicate maximum in a row

```text
2 3
9 9 1
2 3 4
```

Neither `9` is dominant because neither is strictly greater than the other `9`.

### 5. No dominant cells

A matrix may contain no dominant cells.

The program should write:

```text
Dominant cells:
No dominant cells found.
```

---

## Constraints

```text
1 <= N, M <= 100
0 <= A[i][j] <= 99
```

---

## Generating the Input Matrix

The provided `matrix_generator.py` generates a random matrix.

Run:

```bash
python matrix_generator.py ROWS COLS
```

or:

```bash
python3 matrix_generator.py ROWS COLS
```

For example:

```bash
python matrix_generator.py 5 6
```

This creates a random `5 x 6` matrix inside `matrix.txt`.

You are encouraged to test different matrix sizes:

```bash
python matrix_generator.py 1 1
python matrix_generator.py 1 10
python matrix_generator.py 10 1
python matrix_generator.py 5 5
python matrix_generator.py 20 20
```

---

## Recommended Workflow

```bash
python matrix_generator.py 5 5
gcc row_column_dominant.c -o dominant
./dominant
cat output.txt
```

---

## Compilation and Execution

```bash
gcc row_column_dominant.c -o dominant
./dominant
```

The program should create:

```text
output.txt
```

---

## Evaluation Rubric

| Component | Marks |
|---|---:|
| File Input Handling | 20 |
| Correct Row/Column Dominance Logic | 40 |
| Matrix Traversal | 15 |
| Boundary / Edge Case Handling | 15 |
| Output Formatting | 5 |
| Code Quality | 5 |
| **Total** | **100** |

---

## Expected Submission

Students should produce:

- `row_column_dominant.c`
- `output.txt`
- Evidence of successful compilation and execution

---

## Important Restrictions

For this lab, students should solve the problem using:

- Arrays
- Loops
- Functions
- File I/O

Do not use external libraries or sorting algorithms to determine the dominant cells.
