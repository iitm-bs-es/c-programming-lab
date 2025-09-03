#include <stdio.h>

//Implement the below function
void printBinary(unsigned int n) {

}

//Implement the below function
int countSetBits(unsigned int n) {

}

//Implement the below function
unsigned int clearPerfectSquares(unsigned int n) {

}

//Implement the below function
unsigned int setFibonacci(unsigned int n) {

}

//Implement the below function
unsigned int togglePositions(unsigned int n) {

}

int main() {
    unsigned int n;
    scanf("%u", &n);
    printf("Binary Representation:  ");
    printBinary(n);
    n = clearPerfectSquares(n);
    printf("After clearing squares: ");
    printBinary(n);
    n = setFibonacci(n);
    printf("After setting Fibonacci:");
    printBinary(n);
    n = togglePositions(n);
    printf("After toggling:         ");
    printBinary(n);
    int count = countSetBits(n);
    printf("Number of flags are ON: %d\n", count);

    return 0;
}
