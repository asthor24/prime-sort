import os
import sys
#### This code imports the run_tests method
current = os.path.dirname(os.path.realpath(__file__))
parent = os.path.dirname(current)
sys.path.append(parent)
import run_tests_helper
####
run_tests_helper.run_tests("int")