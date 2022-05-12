# Tests
To run tests which compare the performance, and number of comparisons, for each algorithm, simply navigate to one of the following subfolders:
- int: tests on different lengths of arrays of integers
- string: tests on different lengths of arrays of strings, with different lengths of strings

Then, to generate testing data run:

`python generate_tests.py` 

and then to run the tests run:

`python run_tests.py`. 

You should now be able to view the results of the test in the output directory. Note that there is one output file per input file.

To clean the `input` directory run:

`python clean_inputs.py`

To clean the `output` directory run:

`python clean_outputs.py`