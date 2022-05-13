# Bjornsson Sort
# Compiling Binaries
To compile the binaries which run various sorting algorithms, including bjornsson sort, run:

`make all`

To only compile the binaries for a specific sorting algorithm write

`make (bjornsson|insertion|selection`

For example: `make bjornsson`

# Testing
See the guide in the `tests` subdirectory.

## Format for binaries:
{name_of_algorithm}\_{what we're testing for}\_{the type of data we're testing on}

Example: bjornsson_cpu_string 
