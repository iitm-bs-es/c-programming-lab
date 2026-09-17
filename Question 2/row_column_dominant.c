#include <stdio.h>

#define MAX 100

void readMatrix(FILE *fp, int A[MAX][MAX], int *N, int *M) {
    // TODO 1:
    // Read N and M from the file.

    // TODO 2:
    // Read all N x M matrix elements into A.
}

int isDominant(int A[MAX][MAX], int N, int M, int i, int j) {
    int k;
    int current = A[i][j];

    // TODO 3:
    // Check every other element in row i.
    // If any element is greater than or equal to current,
    // return 0.

    // TODO 4:
    // Check every other element in column j.
    // If any element is greater than or equal to current,
    // return 0.

    return 1;
}

void writeDominant(FILE *fp, int A[MAX][MAX], int N, int M) {
    int i, j;
    int found = 0;

    fprintf(fp, "Dominant cells:\n");

    // TODO 5:
    // Traverse every cell in the matrix.
    // Use isDominant() to check each cell.
    // If it is dominant, write:
    //
    // (i, j) -> value
    //
    // and set found = 1.

    // TODO 6:
    // If no dominant cells were found,
    // write:
    //
    // No dominant cells found.
}

int main() {
    int A[MAX][MAX];
    int N, M;

    FILE *in = fopen("matrix.txt", "r");
    FILE *out = fopen("output.txt", "w");

    if (in == NULL || out == NULL) {
        printf("File error!");
        return 1;
    }

    readMatrix(in, A, &N, &M);
    writeDominant(out, A, N, M);

    fclose(in);
    fclose(out);

    printf("Output written to output.txt\n");

    return 0;
}
