from random import randint
"""
################################################
This file generates tests for sorting algorithms
The total number of integers to write to each 
file is given by the constant below.
################################################
"""
TOTAL_NUMBERS_PER_FILE = int(1e4)
INPUT_FILES_LOCATION = "input"

def get_best_case_filename(N):
    return f"{INPUT_FILES_LOCATION}/best/{N}best.in"

def get_random_case_filename(N):
    return f"{INPUT_FILES_LOCATION}/random/{N}random.in"

def get_worst_case_filename(N):
    return f"{INPUT_FILES_LOCATION}/worst/{N}worst.in"

def get_best_case(N):
    return list(range(1,N+1))

def get_random_case(N):
    return [randint(-(1<<31), (1<<31)) for _ in range(N)]

def get_worst_case(N):
    return list(range(N,0,-1))


powersOfTwo = [1<<i for i in range(1,11)]
for N in powersOfTwo:
    T = TOTAL_NUMBERS_PER_FILE//N + 1
    with open(get_best_case_filename(N), 'w') as file:
        file.write(f"{T}\n")
        for _ in range(T):
            file.write(f"{N}\n")
            file.write(" ".join(map(str, get_best_case(N)))+"\n")
    
    with open(get_random_case_filename(N), 'w') as file:
        file.write(f"{T}\n")
        for _ in range(T):
            file.write(f"{N}\n")
            file.write(" ".join(map(str, get_random_case(N)))+"\n")
    
    with open(get_worst_case_filename(N), 'w') as file:
        file.write(f"{T}\n")
        for _ in range(T):
            file.write(f"{N}\n")
            file.write(" ".join(map(str, get_worst_case(N)))+"\n")
