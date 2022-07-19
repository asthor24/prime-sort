"""
#######################################################
This file generates arrays of integers for testing 
sorting algorithms. For array sizes which are powers of 
two <= 1024, it generates three files. The first one 
contains already sorted arrays, the second one contains
random arrays, and the third one contains reverse 
sorted arrays.

Usage:
    python generate_tests.py [TOTAL_PER_FILE]
TOTAL_PER_FILE is the total number of integers written 
to each file. This value defaults to 10^5
#######################################################
"""

import sys
from random import randint

def generate_tests(random_array_generator, test_cases, params):
    total_numbers_per_file = int(1e5)
    if len(sys.argv) > 1:
        total_numbers_per_file = int(float(sys.argv[1])) # converting to floats first allows 1eX notation

    INPUT_FILES_LOCATION = "input"

    x_string = "x".join(map(str, params))

    sorted_case_filename = f"{INPUT_FILES_LOCATION}/sorted/{x_string}.in"
    random_case_filename = f"{INPUT_FILES_LOCATION}/random/{x_string}.in"
    reversed_case_filename = f"{INPUT_FILES_LOCATION}/reversed/{x_string}.in"

    def get_sorted_case():
        return sorted(random_array_generator(params))

    def get_random_case():
        return random_array_generator(params)

    def get_reversed_case():
        return sorted(random_array_generator(params), reverse=True)


    arrayLengths = [1<<i for i in range(1,8)]
    stringLengths = [1<<i for i in range(1,4)]
    """
    print("Generating file", sorted_case_filename, "...")
    with open(sorted_case_filename, 'w') as file:
        file.write(f"{test_cases}\n")
        for _ in range(test_cases):
            sorted_case = get_sorted_case()
            file.write(f"{len(sorted_case)}\n")
            file.write(" ".join(map(str, sorted_case))+"\n")
    """
    print("Generating file", random_case_filename, "...")
    with open(random_case_filename, 'w') as file:
        file.write(f"{test_cases}\n")
        for _ in range(test_cases):
            random_case = get_random_case()
            file.write(f"{len(random_case)}\n")
            file.write(" ".join(map(str, random_case))+"\n")
    
    """
    print("Generating file", reversed_case_filename, "...")
    with open(reversed_case_filename, 'w') as file:
        file.write(f"{test_cases}\n")
        for _ in range(test_cases):
            reversed_case = get_reversed_case()
            file.write(f"{len(reversed_case)}\n")
            file.write(" ".join(map(str, reversed_case))+"\n")
    """
