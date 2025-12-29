import numpy as np
from numpy import random
import sys
if len(sys.argv)<2:
    raise ValueError("Matrix dimension not passed.\nUsage: python genmat.py DIM\n    DIM - dimension of the square matrix.")

M = int(sys.argv[1])


A = random.random((M, M))
np.savetxt("a.txt", A, fmt='%6.4g')

B = random.random((M, M))
np.savetxt("b.txt", B, fmt='%6.4g')

C = A @ B
np.savetxt("c.txt", C, fmt='%8.4g')
