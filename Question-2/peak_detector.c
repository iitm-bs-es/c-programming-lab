#include <stdio.h>
#define MAX 100

void readMatrix(FILE *fp, int A[MAX][MAX], int *N, int *M) {
    // TODO: Read N and M
    // TODO: Read matrix elements
}

int isPeak(int A[MAX][MAX], int N, int M, int i, int j) {
    int di, dj;

    // TODO:
    // Check all valid neighbors
    // Return 1 if peak else 0

    return 0;
}

void writePeaks(FILE *fp, int A[MAX][MAX], int N, int M) {
    int i, j;
    fprintf(fp, "Peaks: ");

    // TODO:
    // Traverse matrix
    // Use isPeak()
    // Write (i, j) -> value
    // If no peaks exist, write: No peaks found.
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
    writePeaks(out, A, N, M);

    fclose(in);
    fclose(out);

    printf("Output written to output.txt");
    return 0;
}