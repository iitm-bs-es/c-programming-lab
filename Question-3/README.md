You are developing a **network security module** that processes a **16-bit security flag field** embedded in data packets. Each of the 16 bits represents whether a **specific rule** is enabled (`1`) or disabled (`0`):

* Rule 1 corresponds to the **least significant bit (LSB)**.
* Rule 16 corresponds to the **most significant bit (MSB)**.

You are given the initial security configuration as an integer, and you need to apply a series of bitwise operations to sanitize and transform the flag field according to system rules.

---

Tasks:

1. **Clear all flags at perfect square positions** 

   * Positions: 1, 4, 9, 16

2. **Enable all flags at Fibonacci positions** 

   * Positions: 1, 2, 3, 5, 8, 13


3. **Toggle user-specified bit positions** 

   * User inputs positions between 1 and 16. Ends input with `-1`.

4. **Print the final binary configuration** and **count how many flags are ON** 


**Input Format**

The input consists of 2 lines.

-  The first line contains a positive integer n — the initial 16-bit flag field.

-  The second line contains positions (1–16) to be toggled, ending with -1.

**Output Format**

The input consists of 5 lines.

-  The first line contains 16-bit binary representation of the initial flag field.

-  The second line contains 16 bit binary representation after clearing perfect square positions.

-  The third line contains 16 bit binary representation after enabling Fibonacci positions.

-  The fourth line contains 16 bit binary representation after toggling user-specified positions.

-  The fifth line contains the total number of flags that are ON  in the final configuration.

## Evaluation:

1. Print Initial Configuration
   * Correctly prints the 16-bit binary representation of the given integer.
   * Leading zeros must be shown.

2. Clear Perfect Square Positions
   * Correctly clears bits at positions 1, 4, 9, 16 (LSB = position 1).
   * Prints the resulting 16-bit configuration.

3. Enable Fibonacci Positions
   * Correctly sets bits at positions 1, 2, 3, 5, 8, 13.
   * Prints the updated 16-bit configuration.

4. Toggle User-Specified Positions
   * Reads user input positions until -1.
   * Correctly toggles those bits.

5. Prints the 16-bit binary configuration after toggling.
   * Final Count of Flags ON
   * Correctly counts the number of 1s in the final configuration.
   * Prints the count.

# Help

- Navigate to question in the terminal
`cd /workspaces/c-programming-lab/Question-3/`
- Compile the code
`gcc main.c -o main`
- Run the code
`./main`