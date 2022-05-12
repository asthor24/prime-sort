import os
import sys
#### This code imports the run_tests method
current = os.path.dirname(os.path.realpath(__file__))
parent = os.path.dirname(current)
sys.path.append(parent)
import run_tests_helper
####
os.makedirs("output", exist_ok=True)
os.makedirs("output/random", exist_ok=True)
os.makedirs("output/sorted", exist_ok=True)
os.makedirs("output/reversed", exist_ok=True)
run_tests_helper.run_tests("int")