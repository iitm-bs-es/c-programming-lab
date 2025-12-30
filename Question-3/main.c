#include <stdio.h>

// Print a 16-bit binary representation (keep existing format/spacing)
void printBinary(unsigned int n)
{
}

// Return how many bits are 1 in the 16-bit value
int countSetBits(unsigned int n)
{
}

// Set bit at position k (1 = LSB). Return updated value.
unsigned int setBit(unsigned int n, unsigned int k)
{
}

// Clear bit at position k (1 = LSB). Return updated value.
unsigned int clearBit(unsigned int n, unsigned int k)
{
}

// Toggle bit at position k (1 = LSB). Return updated value.
unsigned int toggleBit(unsigned int n, unsigned int k)
{
}

// Return 1 if bit at position k is set, else 0.
int isBitSet(unsigned int n, unsigned int k)
{
}

// Swap bits at positions i and j. Return updated value.
unsigned int swapBits(unsigned int n, unsigned int i, unsigned int j)
{
}

int main()
{
    unsigned int n;
    unsigned int k_set, k_clear, k_toggle, k_check, i_swap, j_swap;

    // Input order (one per line except last two on one line):
    // n, k_set, k_clear, k_toggle, k_check, i_swap j_swap
    scanf("%u", &n);
    scanf("%u", &k_set);
    scanf("%u", &k_clear);
    scanf("%u", &k_toggle);
    scanf("%u", &k_check);
    scanf("%u %u", &i_swap, &j_swap);

    printf("Initial:            ");
    printBinary(n);

    n = setBit(n, k_set);
    printf("After set bit:      ");
    printBinary(n);

    n = clearBit(n, k_clear);
    printf("After clear bit:    ");
    printBinary(n);

    n = toggleBit(n, k_toggle);
    printf("After toggle bit:   ");
    printBinary(n);

    int checked = isBitSet(n, k_check);
    printf("Bit %u is %s\n", k_check, checked ? "SET" : "NOT SET");

    n = swapBits(n, i_swap, j_swap);
    printf("After swap bits:    ");
    printBinary(n);

    int count = countSetBits(n);
    printf("Total SET bits: %d\n", count);

    return 0;
}
