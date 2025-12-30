You are maintaining a **16-bit feature flag** field. Each bit controls whether a feature is enabled (`1`) or disabled (`0`). Bit position 1 is the **LSB**, bit position 16 is the **MSB**.

---

## Tasks

1) **Set a bit** at position `k_set`.

2) **Clear a bit** at position `k_clear`.

3) **Toggle a bit** at position `k_toggle`.

4) **Check a bit** at position `k_check` (report whether it is `SET` or `NOT SET`).

5) **Swap two bit positions** `i_swap` and `j_swap` to remove bit-level bias.

6) **Print the final binary** configuration after every step and **count total set bits** at the end.

All binary outputs must show 16 bits with leading zeros.

---

## Input Format

Input consists of the following values (each on its own line, except the last line has two values):

1. Initial unsigned integer `n` (treated as 16-bit)
2. Position `k_set`
3. Position `k_clear`
4. Position `k_toggle`
5. Position `k_check`
6. Positions `i_swap` and `j_swap` (space-separated on one line)

All positions are 1-indexed (`1` = LSB)

---

## Output Format

1. `Initial:` followed by the 16-bit binary of `n`.
2. `After set bit:` binary after setting `k_set`.
3. `After clear bit:` binary after clearing `k_clear`.
4. `After toggle bit:` binary after toggling `k_toggle`.
5. `Bit <k_check> is SET/NOT SET` based on the check result.
6. `After swap bits:` binary after swapping `i_swap` and `j_swap`.
7. `Total SET bits:` count of 1s in the final value.

Output format has already been created, you need to completed all functions.

---

## Functions to Implement (in `main.c`)

- `printBinary(unsigned int n)` – print 16-bit binary with leading zeros.
- `countSetBits(unsigned int n)` – return number of 1s.
- `setBit(unsigned int n, unsigned int k)` – set position `k`.
- `clearBit(unsigned int n, unsigned int k)` – clear position `k`.
- `toggleBit(unsigned int n, unsigned int k)` – toggle position `k`.
- `isBitSet(unsigned int n, unsigned int k)` – return 1 if set, else 0.
- `swapBits(unsigned int n, unsigned int i, unsigned int j)` – swap bits at `i` and `j`.

Do not change `main`; implement the helpers. Work with 16-bit logic.

---

## Evaluation

- Correct binary formatting (16 bits, leading zeros) after each stage.
- Each operation updates the value correctly before the next step.
- Check message is accurate for `k_check`.
- Final swap reflects both positions exchanged.
- Final set-bit count matches the last binary output.

---

## Help

- Navigate: `cd /workspaces/c-programming-lab/Question-3/`
- Compile: `gcc main.c -o main`
- Run: `./main`