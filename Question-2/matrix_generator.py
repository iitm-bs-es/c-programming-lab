import sys
import random

if len(sys.argv) != 3:
    print("Usage: python matrix_generator.py <rows> <cols>")
    sys.exit(1)

rows = int(sys.argv[1])
cols = int(sys.argv[2])

with open("matrix.txt", "w") as f:
    f.write(f"{rows} {cols}\n")
    for _ in range(rows):
        row = [str(random.randint(0, 99)) for _ in range(cols)]
        f.write(" ".join(row) + "\n")

print("matrix.txt generated successfully")