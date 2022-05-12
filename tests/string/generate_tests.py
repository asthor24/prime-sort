from random import choice
import sys
import string
import os

#### This code imports the generate_tests method
current = os.path.dirname(os.path.realpath(__file__))
parent = os.path.dirname(current)
sys.path.append(parent)
import generate_tests_helper
####

letters = string.ascii_lowercase
def random_array_generator(params):
    N = params[0]
    M = params[1]
    return [''.join(choice(letters) for _ in range(M)) for _ in range(N)]

total_numbers_per_file = int(1e5)
if len(sys.argv) > 1:
    total_numbers_per_file = int(float(sys.argv[1])) # converting to floats first allows 1eX notation

powersOfTwo = [1<<i for i in range(1,9)]
for N in powersOfTwo:
    for M in powersOfTwo:
        test_cases = total_numbers_per_file//(N*M)+1
        generate_tests_helper.generate_tests(random_array_generator, test_cases, [N, M])