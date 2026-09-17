import sys
import random

if len(sys.argv) != 3:
    print("Usage: python matrix_generator.py ROWS COLS")
    sys.exit(1)

try:
    rows = int(sys.argv[1])
    cols = int(sys.argv[2])
except ValueError:
    print("Error: ROWS and COLS must be integers.")
    sys.exit(1)

if not (1 <= rows <= 100 and 1 <= cols <= 100):
    print("Error: ROWS and COLS must be between 1 and 100.")
    sys.exit(1)

with open("matrix.txt", "w") as f:
    f.write(f"{rows} {cols}\n")
    for _ in range(rows):
        row = [str(random.randint(0, 99)) for _ in range(cols)]
        f.write(" ".join(row) + "\n")

print(f"matrix.txt generated successfully ({rows}x{cols})")