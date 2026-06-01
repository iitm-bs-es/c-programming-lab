# 2D Signal Peak Detector


## Project Overview
In digital signal processing, image analysis, and scientific computing, identifying local maxima is a common operation. A **local peak** is an element whose value is strictly greater than all surrounding neighboring values.

In this lab, students will implement a C program that reads a matrix from a file, detects all local peaks, and writes the results into an output file.

---

## Learning Objectives
After completing this exercise, students should be able to:

- Perform file input/output in C
- Work with two-dimensional arrays
- Use nested loops effectively
- Handle matrix boundary conditions safely
- Implement neighborhood-based search algorithms
- Produce formatted output files

---

## Problem Statement
Given a matrix of size `N x M`, determine every element that is a **peak**.

An element at position `(i, j)` is considered a peak if it is **strictly greater** than every valid neighbor around it.

Each element may have up to **8 neighbors**:

```text
(i-1,j-1) (i-1,j) (i-1,j+1)
(i,  j-1) (i,  j) (i,  j+1)
(i+1,j-1) (i+1,j) (i+1,j+1)
````

Only neighbors inside matrix bounds should be checked.

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

* `N` = number of rows
* `M` = number of columns

### Example Input

```text
3 3
1 5 2
4 9 3
2 6 1
```

---

## Output File Format (`output.txt`)

```text
Peaks:
(1, 1) -> 9
```

---

## Explanation

The value `9` is greater than all its surrounding neighbors, hence it is a peak.

---

## Student Tasks

### Task 1: Read Matrix from File

Implement:

```c
readMatrix()
```

This function must:

* Read dimensions `N` and `M`
* Read matrix values into a 2D array

---

### Task 2: Detect Peaks

Implement:

```c
isPeak()
```

This function must:

* Check all valid neighbors
* Return `1` if peak
* Return `0` otherwise

---

### Task 3: Write Peaks to File

Implement:

```c
writePeaks()
```

This function must:

* Traverse matrix
* Detect peaks using `isPeak()`
* Write formatted results into output file

---

## Recommended Algorithm

For each element `(i,j)`:

1. Assume it is a peak.
2. Visit all neighbor offsets from `-1 to +1` (skipping the offset of `0` since that is the current cell).
4. Ignore out-of-range indices.
5. If any neighbor value is greater than or equal to current value, it is not a peak.

---

## Constraints

```text
1 <= N, M <= 100
Matrix values may be positive, zero, or negative.
```

---

## Edge Cases to Consider

* Corner cells have only 3 neighbors
* Border cells have 5 neighbors
* Duplicate adjacent values are not peaks
* Matrix may contain zero peaks
* Single element matrix is always a peak

---

## Sample Test Case 1

### Input

```text
3 3
1 5 2
4 9 3
2 6 1
```

### Output

```text
Peaks:
(1, 1) -> 9
```

---

## Sample Test Case 2

### Input

```text
4 4
1 2 3 4
5 9 1 2
3 2 8 1
0 1 2 7
```

### Output

```text
Peaks:
(0, 3) -> 4
(1, 1) -> 9
```

---

## Sample Test Case 3 (No Peaks)

### Input

```text
3 3
5 5 5
5 5 5
5 5 5
```

### Output

```text
Peaks:
No peaks found.
```

---

## Generating Input Matrix File

The file `matrix_generator.py` is provided to generate random matrices for testing.

Run using:

```bash
python matrix_generator.py ROWS COLS
```

or

```bash
python3 matrix_generator.py ROWS COLS
```

Where:

* `ROWS` = number of rows
* `COLS` = number of columns

### Example

```bash
python matrix_generator.py 5 6
```

This creates a random `5 x 6` matrix inside `matrix.txt`.

### Students are encouraged to test multiple sizes:

```bash
python matrix_generator.py 1 1
python matrix_generator.py 3 3
python matrix_generator.py 10 8
python matrix_generator.py 20 20
```

Testing different sizes helps verify:

* Boundary handling
* Single element case
* Multiple peaks
* Larger inputs

---

## Recommended Workflow

```bash
python matrix_generator.py 5 5
gcc peak_detector.c -o peak
./peak
cat output.txt
```

---

## Compilation & Execution

```bash
gcc peak_detector.c -o peak
./peak
```

---


## Expected Submission

Students should produce:

* Complete `peak_detector.c`
* Show `output.txt`
* Show successful execution

