#include <iostream>
#include <vector>

#include "../algos/prime_comp.h"
#include "../datatypes/my_string.cpp"
#include "../utils/comparison_tests.h"
#include "../utils/free_arrays.h"
#include "../utils/read_input.h"

using namespace std;

int main() {
  vector<vector<my_string*>> arrays = read_input<my_string>();
  run_comparison_tests(arrays, prime_sort);
  free_arrays(arrays);
}