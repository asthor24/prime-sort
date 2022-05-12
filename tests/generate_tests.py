import sys
from random import randint

"""
################################################
This file generates arrays of integers
for testing sorting algorithms. For array sizes
which are powers of two, it generates three
files. The first one contains already sorted 
arrays, the second one contains random arrays, 
and the third one contains reverse sorted arrays
Usage:
    python generate_tests.py [TOTAL_PER_FILE]
The TOTAL_PER_FILE is the total number of 
integers written to each file. This value
defaults to 10^5
################################################
"""

total_numbers_per_file = int(1e5)
if len(sys.argv) > 1:
    total_numbers_per_file = int(float(sys.argv[1])) # converting to floats first allows 1eX notation

INPUT_FILES_LOCATION = "input"

def get_sorted_case_filename(N):
    return f"{INPUT_FILES_LOCATION}/sorted/{N}.in"

def get_random_case_filename(N):
    return f"{INPUT_FILES_LOCATION}/random/{N}.in"

def get_reversed_case_filename(N):
    return f"{INPUT_FILES_LOCATION}/reversed/{N}.in"

def get_sorted_case(N):
    return list(range(1,N+1))

def get_random_case(N):
    return [randint(-(1<<31), (1<<31)) for _ in range(N)]

def get_reversed_case(N):
    return list(range(N,0,-1))


powersOfTwo = [1<<i for i in range(1,11)]
for N in powersOfTwo:
    T = total_numbers_per_file//N + 1
    sorted_case_filename = get_sorted_case_filename(N)
    print("Generating file", sorted_case_filename, "...")
    with open(sorted_case_filename, 'w') as file:
        file.write(f"{T}\n")
        for _ in range(T):
            file.write(f"{N}\n")
            file.write(" ".join(map(str, get_sorted_case(N)))+"\n")
    
    random_case_filename = get_random_case_filename(N)
    print("Generating file", random_case_filename, "...")
    with open(random_case_filename, 'w') as file:
        file.write(f"{T}\n")
        for _ in range(T):
            file.write(f"{N}\n")
            file.write(" ".join(map(str, get_random_case(N)))+"\n")
    
    reversed_case_filename = get_reversed_case_filename(N)
    print("Generating file", reversed_case_filename, "...")
    with open(reversed_case_filename, 'w') as file:
        file.write(f"{T}\n")
        for _ in range(T):
            file.write(f"{N}\n")
            file.write(" ".join(map(str, get_reversed_case(N)))+"\n")
