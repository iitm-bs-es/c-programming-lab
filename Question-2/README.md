# Matrix Multiplication

The goal of this project is to perform matrix multiplication on the matrix that are read from files and save the result in another file.

## Generating Matrix files

In the terminal move to the directory `p1-matmul` using the following command.

```
cd p1-matmul
```

The `genmat.py` file in this directory is used to generate random matrices using a python library called numpy (which is actually written in c).

Run the python program `genmat.py` according to the python installation in your stystem.

```
python genmat.py DIM
```

or

```
python3 genmat.py DIM
```

Where DIM is the dimensions of the square matrix.

For the first trial use `DIM = 3`.

This will generate the input matrix files `a.txt` and `b.txt` and the expected output matrix file `c.txt`.

## Implmenting matix multiplication

### Task 1

Read and print the matrices `A` and `B` from the files `a.txt` and `b.txt` by implementing the below functions in the `matmul.c`.

- `read_mat` - To read the matrix from the file.
- `print_mat` - To print the matrix in the stdout.

Compile and run program using the below commands from the terminal.

```
gcc matmul.c -o matmul
./matmul
```

or in a single line as follows

```
gcc matmul.c -o matmul && ./matmul
```

### Task 2

Perform matrix multiplication on `A` and `B` and store the result in `C` and measure the time taken to perform the matrix multiplication.

Implement the function `matmul` in `matmul.c`

Uncomment the Commented part in the `main` function of `matmul.c` and compile the code as mentioned above.

### Task 2.1

Use a different DIM with the `genmat.py` to matrcies of different size and compile the `matmul.c` with different dimension as follows.

For example, DIM=5

```
python genmat.py 5
gcc matmul.c -o matmul -D DIM=5
```

This will generate random matrices of dimensions 5x5 and compile the matmul.c with the DIM macro as 5.
