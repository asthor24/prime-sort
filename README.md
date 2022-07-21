# Prime Sort
# Compiling Binaries
To compile the binaries which run various sorting algorithms, including prime sort, run:

`make all`

To only compile the binaries for a specific sorting algorithm write

`make (prime|bubble|insertion|selection|shell)`

For example: `make prime`

## Filename format for binaries:
The binaries appear in the `bin` directory after compilation. They have the following format:

{name_of_algorithm}\_{what we're testing for}\_{the type of data we're testing on}

Example: prime_cpu_string 

# Testing
See the guide in the `tests` directory.


